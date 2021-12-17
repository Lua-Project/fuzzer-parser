// Generated from Lua.g4 by ANTLR 4.7.2

#pragma once

#include <iostream>
#include <vector>
#include "antlr4-runtime.h"
#include "LuaVisitor.h"

using namespace std;
using namespace antlr4;

/**
 * This class provides an empty implementation of LuaVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  LuaSecondVisitor : public LuaVisitor {
public:
  //vector<misc::Interval> intervals;
  vector<string> texts;

  virtual antlrcpp::Any visitChunk(LuaParser::ChunkContext *ctx) override {
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(LuaParser::BlockContext *ctx) override {
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStat(LuaParser::StatContext *ctx) override {
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttnamelist(LuaParser::AttnamelistContext *ctx) override {
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttrib(LuaParser::AttribContext *ctx) override {
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRetstat(LuaParser::RetstatContext *ctx) override {
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLabel(LuaParser::LabelContext *ctx) override {
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuncname(LuaParser::FuncnameContext *ctx) override {
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarlist(LuaParser::VarlistContext *ctx) override {
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNamelist(LuaParser::NamelistContext *ctx) override {
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExplist(LuaParser::ExplistContext *ctx) override {
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExp(LuaParser::ExpContext *ctx) override {
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrefixexp(LuaParser::PrefixexpContext *ctx) override {
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctioncall(LuaParser::FunctioncallContext *ctx) override {
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarOrExp(LuaParser::VarOrExpContext *ctx) override {
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarSuffix(LuaParser::VarSuffixContext *ctx) override {
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNameAndArgs(LuaParser::NameAndArgsContext *ctx) override {
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArgs(LuaParser::ArgsContext *ctx) override {
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctiondef(LuaParser::FunctiondefContext *ctx) override {
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuncbody(LuaParser::FuncbodyContext *ctx) override {
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParlist(LuaParser::ParlistContext *ctx) override {
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableconstructor(LuaParser::TableconstructorContext *ctx) override {
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFieldlist(LuaParser::FieldlistContext *ctx) override {
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitField(LuaParser::FieldContext *ctx) override {
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFieldsep(LuaParser::FieldsepContext *ctx) override {
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumber(LuaParser::NumberContext *ctx) override {
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitString(LuaParser::StringContext *ctx) override {
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

/********************************/

  virtual antlrcpp::Any visitVarDecl(LuaParser::VarDeclContext *ctx) override {
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  /*virtual antlrcpp::Any visitFunctioncall(LuaParser::FunctioncallContext *ctx) override {
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }*/

  virtual antlrcpp::Any visitGotoStat(LuaParser::GotoStatContext *ctx) override {
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDoStat(LuaParser::DoStatContext *ctx) override {
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhileStat(LuaParser::WhileStatContext *ctx) override {
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRepeatStat(LuaParser::RepeatStatContext *ctx) override {
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfStat(LuaParser::IfStatContext *ctx) override {
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForStat(LuaParser::ForStatContext *ctx) override {
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForInStat(LuaParser::ForInStatContext *ctx) override {
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuncStat(LuaParser::FuncStatContext *ctx) override {
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLocalFuncStat(LuaParser::LocalFuncStatContext *ctx) override {
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLocalVarDecl(LuaParser::LocalVarDeclContext *ctx) override {
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }
  
  virtual antlrcpp::Any visitVar(LuaParser::VarContext *ctx) override {
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }
  
  virtual antlrcpp::Any visitLinkOperator(LuaParser::LinkOperatorContext *ctx) override {
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnaryOperator(LuaParser::UnaryOperatorContext *ctx) override {
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }
};