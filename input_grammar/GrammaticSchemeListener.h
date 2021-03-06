
#include <string>
#include "../parser_generator/grammatic.h"


// Generated from /home/efeder/work/itmo/mt/lab4/input_grammar/GrammaticScheme.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "GrammaticSchemeParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by GrammaticSchemeParser.
 */
class  GrammaticSchemeListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterGrammatic(GrammaticSchemeParser::GrammaticContext *ctx) = 0;
  virtual void exitGrammatic(GrammaticSchemeParser::GrammaticContext *ctx) = 0;

  virtual void enterStart(GrammaticSchemeParser::StartContext *ctx) = 0;
  virtual void exitStart(GrammaticSchemeParser::StartContext *ctx) = 0;

  virtual void enterHeader(GrammaticSchemeParser::HeaderContext *ctx) = 0;
  virtual void exitHeader(GrammaticSchemeParser::HeaderContext *ctx) = 0;

  virtual void enterLexem(GrammaticSchemeParser::LexemContext *ctx) = 0;
  virtual void exitLexem(GrammaticSchemeParser::LexemContext *ctx) = 0;

  virtual void enterRules(GrammaticSchemeParser::RulesContext *ctx) = 0;
  virtual void exitRules(GrammaticSchemeParser::RulesContext *ctx) = 0;

  virtual void enterOne_rule(GrammaticSchemeParser::One_ruleContext *ctx) = 0;
  virtual void exitOne_rule(GrammaticSchemeParser::One_ruleContext *ctx) = 0;


};

