#include <iostream>
#include <cstring>
#include "antlr4-runtime.h"
#include "LuaLexer.h"
#include "LuaParser.h"
#include "LuaBaseVisitor.h"
#include "LuaSecondVisitor.h"

using namespace antlr4;
using namespace std;


extern "C" int parse(char* target,size_t len,char* second,size_t lenS);
extern "C" void fuzz(int index, char** ret, size_t* retlen);

#define MAXSAMPLES 10000
#define MAXTEXT 200

string ret[MAXSAMPLES+2];

int error_cnt = 0;

bool cmp(const string &x, const string &y){return x<y;}

int parse(char* target,size_t len,char* second,size_t lenS) {
	vector<misc::Interval> intervals;
    intervals.clear();
	vector<string> texts;
    texts.clear();
	int num_of_smaples=0;
	//parse the target
	string targetString;
	try{
		targetString=string(target,len);
		//cout<<targetString<<endl;
		ANTLRInputStream input(targetString);
		//ANTLRInputStream input(target);
		LuaLexer lexer(&input);
		CommonTokenStream tokens(&lexer);
		LuaParser parser(&tokens);
		TokenStreamRewriter rewriter(&tokens);
		tree::ParseTree* tree = parser.chunk();
		if(parser.getNumberOfSyntaxErrors()>0){
			//std::cerr<<"NumberOfSyntaxErrors:"<<parser.getNumberOfSyntaxErrors()<<endl;
			return 0;
		}else{
 			LuaBaseVisitor *visitor=new LuaBaseVisitor();
			visitor->visit(tree);

			int interval_size = visitor->intervals.size();
            for(int i=0;i<interval_size;i++){
				if(find(intervals.begin(),intervals.end(),visitor->intervals[i])!=intervals.end()){
				}else if(visitor->intervals[i].a<=visitor->intervals[i].b){
					intervals.push_back(visitor->intervals[i]);	
				}
			}
			int texts_size = visitor->texts.size();

			//cout<<"texts_size: "+to_string(texts_size)+"\n\n"<<endl;


			for(int i=0;i<texts_size;i++){
				if(find(texts.begin(),texts.end(),visitor->texts[i])!=texts.end()){
				}else if(visitor->texts[i].length()>MAXTEXT){
				}else{
					//cout<<visitor->texts[i]<<endl;
					texts.push_back(visitor->texts[i]);
            	}
			}
            		delete visitor;
			//parse sencond
			string secondString;
			try{
				secondString=string(second,lenS);
				//cout<<targetString<<endl;
				//cout<<secondString<<endl;

				ANTLRInputStream inputS(secondString);
				LuaLexer lexerS(&inputS);
				CommonTokenStream tokensS(&lexerS);
				LuaParser parserS(&tokensS);
				tree::ParseTree* treeS = parserS.chunk();

				if(parserS.getNumberOfSyntaxErrors()>0){
		 			//std::cerr<<"NumberOfSyntaxErrors S: "+ to_string(error_cnt++)<<parserS.getNumberOfSyntaxErrors()<<endl;
				}else{
					LuaSecondVisitor *visitorS=new LuaSecondVisitor();
					visitorS->visit(treeS);
					texts_size = visitorS->texts.size();
					for(int i=0;i<texts_size;i++){
						if(find(texts.begin(),texts.end(),visitorS->texts[i])!=texts.end()){
                        			}else if(visitorS->texts[i].length()>MAXTEXT){
						}else{
                            //cout<<visitorS->texts[i]+"\n\n"<<endl;
							texts.push_back(visitorS->texts[i]);
						}
					}
                    		delete visitorS;
				}
                
				/*
				cout<<"============[1]===========\n"<<endl;
                for (int i = 0; i < texts.size(); i++)
  					cout << texts[i] << " ";
				*/
				interval_size = intervals.size();
				sort(texts.begin(),texts.end());
				texts_size = texts.size();
				
				/*
				cout<<"============[2]===========\n"<<endl;
                for (int i = 0; i < texts.size(); i++)
  					cout << texts[i] << " ";
				*/


                //cout<<"check2\n\n"<<endl;
                //cout<<"interval_size: "+to_string(interval_size)<<endl;


				for(int i=0;i<interval_size;i++){
                    //cout<<"check3\n\n"<<endl;
					for(int j=0;j<texts_size;j++){
						//cout<<"=======[1]=======\n"+rewriter.getText()+"\n\n"<<endl;
						rewriter.replace(intervals[i].a,intervals[i].b,texts[j]);
						//cout<<"=======[2]=======\n"+rewriter.getText()+"\n\n"<<endl;
						
						
						ret[num_of_smaples++]=rewriter.getText();
						if(num_of_smaples>=MAXSAMPLES)break;
					}
					if(num_of_smaples>=MAXSAMPLES)break;
				}
			}catch(range_error e){
                //cout<<"range_error\n\n"<<endl;
				//std::cerr<<"range_error"<<second<<endl;
			}
		}
	}catch(range_error e){
		//std::cerr<<"range_error:"<<target<<endl;
	}

	return num_of_smaples;
}

void fuzz(int index, char** result, size_t* retlen){
	*retlen=ret[index].length();
	*result=strdup(ret[index].c_str());
}


int main(){
  	ifstream in;
	char target[100*1024];
	int len=0;
  	in.open("/home/pwn9uin/bob/project/Superion/tree_mutation/lua_parser/test.lua");
	while(!in.eof()){
		in.read(target,102400);
	}
	len=in.gcount();
	//cout<<target<<endl;
	//cout<<len<<endl;
	in.close();

	char second[100*1024];
	int lenS=0;
  	in.open("/home/pwn9uin/bob/project/Superion/tree_mutation/lua_parser/starts.lua");
	while(!in.eof()){
		in.read(second,102400);
	}
	lenS=in.gcount();
	//cout<<second<<endl;
	//cout<<lenS<<endl;

  	int num_of_smaples=parse(target,len,second,lenS);
  	for(int i=0;i<num_of_smaples;i++){
     	char* retbuf=nullptr;
     	size_t retlen=0;
     	fuzz(i,&retbuf,&retlen);
     	cout<<retlen<<retbuf<<endl;
  	}
  	cout<<"num_of_smaples:"<<num_of_smaples<<endl;
}