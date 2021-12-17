// Generated from Lua.g4 by ANTLR 4.7.2

#pragma once

#include <iostream>
#include <vector>
#include "antlr4-runtime.h"
#include "LuaVisitor.h"

using namespace antlr4;
using namespace std;

/**
 * This class provides an empty implementation of LuaVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  LuaBaseVisitor : public LuaVisitor {
public:
  vector<misc::Interval> intervals;
  vector<string> texts;

  virtual antlrcpp::Any visitChunk(LuaParser::ChunkContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(LuaParser::BlockContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStat(LuaParser::StatContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttnamelist(LuaParser::AttnamelistContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttrib(LuaParser::AttribContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRetstat(LuaParser::RetstatContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLabel(LuaParser::LabelContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuncname(LuaParser::FuncnameContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarlist(LuaParser::VarlistContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNamelist(LuaParser::NamelistContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExplist(LuaParser::ExplistContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExp(LuaParser::ExpContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrefixexp(LuaParser::PrefixexpContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctioncall(LuaParser::FunctioncallContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarOrExp(LuaParser::VarOrExpContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarSuffix(LuaParser::VarSuffixContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNameAndArgs(LuaParser::NameAndArgsContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArgs(LuaParser::ArgsContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctiondef(LuaParser::FunctiondefContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuncbody(LuaParser::FuncbodyContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParlist(LuaParser::ParlistContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableconstructor(LuaParser::TableconstructorContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFieldlist(LuaParser::FieldlistContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitField(LuaParser::FieldContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFieldsep(LuaParser::FieldsepContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumber(LuaParser::NumberContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitString(LuaParser::StringContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

/********************************/

  virtual antlrcpp::Any visitVarDecl(LuaParser::VarDeclContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  /*virtual antlrcpp::Any visitFunctioncall(LuaParser::FunctioncallContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }*/

  virtual antlrcpp::Any visitGotoStat(LuaParser::GotoStatContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDoStat(LuaParser::DoStatContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhileStat(LuaParser::WhileStatContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRepeatStat(LuaParser::RepeatStatContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfStat(LuaParser::IfStatContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForStat(LuaParser::ForStatContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForInStat(LuaParser::ForInStatContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuncStat(LuaParser::FuncStatContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLocalFuncStat(LuaParser::LocalFuncStatContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLocalVarDecl(LuaParser::LocalVarDeclContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }
  
  virtual antlrcpp::Any visitVar(LuaParser::VarContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }
  
  virtual antlrcpp::Any visitLinkOperator(LuaParser::LinkOperatorContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnaryOperator(LuaParser::UnaryOperatorContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }
};