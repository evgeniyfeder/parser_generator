
// Generated from /home/efeder/work/itmo/mt/lab4/antlr/GrammaticScheme.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"




class  GrammaticSchemeParser : public antlr4::Parser {
public:
  enum {
    HEADER = 1, IGNORE = 2, RETURS = 3, START = 4, TERM = 5, NTERM = 6, 
    WHITESPACE = 7, CODE = 8, STRING = 9, ATTR = 10, COMMA = 11, COLON = 12, 
    DCOLON = 13, SCOLON = 14, EQ = 15, STICK = 16, LB = 17, RB = 18, LP = 19, 
    RP = 20, LSQUARE = 21, RSQUARE = 22
  };

  enum {
    RuleGrammatic = 0, RuleStart = 1, RuleHeader = 2, RuleLexem = 3, RuleIgnore = 4, 
    RuleRules = 5
  };

  GrammaticSchemeParser(antlr4::TokenStream *input);
  ~GrammaticSchemeParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class GrammaticContext;
  class StartContext;
  class HeaderContext;
  class LexemContext;
  class IgnoreContext;
  class RulesContext; 

  class  GrammaticContext : public antlr4::ParserRuleContext {
  public:
    GrammaticContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StartContext *start();
    HeaderContext *header();
    std::vector<LexemContext *> lexem();
    LexemContext* lexem(size_t i);
    std::vector<IgnoreContext *> ignore();
    IgnoreContext* ignore(size_t i);
    std::vector<RulesContext *> rules();
    RulesContext* rules(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GrammaticContext* grammatic();

  class  StartContext : public antlr4::ParserRuleContext {
  public:
    StartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *NTERM();
    antlr4::tree::TerminalNode *SCOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StartContext* start();

  class  HeaderContext : public antlr4::ParserRuleContext {
  public:
    HeaderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HEADER();
    antlr4::tree::TerminalNode *CODE();
    antlr4::tree::TerminalNode *SCOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  HeaderContext* header();

  class  LexemContext : public antlr4::ParserRuleContext {
  public:
    LexemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TERM();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *SCOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LexemContext* lexem();

  class  IgnoreContext : public antlr4::ParserRuleContext {
  public:
    IgnoreContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *TERM();
    antlr4::tree::TerminalNode *SCOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IgnoreContext* ignore();

  class  RulesContext : public antlr4::ParserRuleContext {
  public:
    RulesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> NTERM();
    antlr4::tree::TerminalNode* NTERM(size_t i);
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *SCOLON();
    std::vector<antlr4::tree::TerminalNode *> ATTR();
    antlr4::tree::TerminalNode* ATTR(size_t i);
    antlr4::tree::TerminalNode *RETURS();
    std::vector<antlr4::tree::TerminalNode *> TERM();
    antlr4::tree::TerminalNode* TERM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CODE();
    antlr4::tree::TerminalNode* CODE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STICK();
    antlr4::tree::TerminalNode* STICK(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RulesContext* rules();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

