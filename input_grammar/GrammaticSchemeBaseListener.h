
// Generated from /home/efeder/work/itmo/mt/lab4/antlr/GrammaticScheme.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "GrammaticSchemeListener.h"


/**
 * This class provides an empty implementation of GrammaticSchemeListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  GrammaticSchemeBaseListener : public GrammaticSchemeListener {
public:

  virtual void enterGrammatic(GrammaticSchemeParser::GrammaticContext * /*ctx*/) override { }
  virtual void exitGrammatic(GrammaticSchemeParser::GrammaticContext * /*ctx*/) override { }

  virtual void enterStart(GrammaticSchemeParser::StartContext * /*ctx*/) override { }
  virtual void exitStart(GrammaticSchemeParser::StartContext * /*ctx*/) override { }

  virtual void enterHeader(GrammaticSchemeParser::HeaderContext * /*ctx*/) override { }
  virtual void exitHeader(GrammaticSchemeParser::HeaderContext * /*ctx*/) override { }

  virtual void enterLexem(GrammaticSchemeParser::LexemContext * /*ctx*/) override { }
  virtual void exitLexem(GrammaticSchemeParser::LexemContext * /*ctx*/) override { }

  virtual void enterIgnore(GrammaticSchemeParser::IgnoreContext * /*ctx*/) override { }
  virtual void exitIgnore(GrammaticSchemeParser::IgnoreContext * /*ctx*/) override { }

  virtual void enterRules(GrammaticSchemeParser::RulesContext * /*ctx*/) override { }
  virtual void exitRules(GrammaticSchemeParser::RulesContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

