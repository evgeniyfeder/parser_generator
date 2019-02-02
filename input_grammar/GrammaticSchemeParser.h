
#include <string>
#include "../parser_generator/grammatic.h"


// Generated from /home/efeder/work/itmo/mt/lab4/input_grammar/GrammaticScheme.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  GrammaticSchemeParser : public antlr4::Parser {
public:
  enum {
    HEADER = 1, IGNORE = 2, RETURS = 3, START = 4, EPS = 5, TERM = 6, NTERM = 7, 
    WHITESPACE = 8, CODE = 9, STRING = 10, ATTR = 11, COMMA = 12, COLON = 13, 
    DCOLON = 14, SCOLON = 15, EQ = 16, STICK = 17, LB = 18, RB = 19, LP = 20, 
    RP = 21, LSQUARE = 22, RSQUARE = 23
  };

  enum {
    RuleGrammatic = 0, RuleStart = 1, RuleHeader = 2, RuleLexem = 3, RuleRules = 4, 
    RuleOne_rule = 5
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
  class RulesContext;
  class One_ruleContext; 

  class  GrammaticContext : public antlr4::ParserRuleContext {
  public:
    grammatic_t g;
    GrammaticSchemeParser::HeaderContext *headerContext = nullptr;;
    GrammaticSchemeParser::StartContext *st = nullptr;;
    GrammaticSchemeParser::LexemContext *lexemContext = nullptr;;
    GrammaticSchemeParser::RulesContext *rulesContext = nullptr;;
    GrammaticContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StartContext *start();
    HeaderContext *header();
    std::vector<LexemContext *> lexem();
    LexemContext* lexem(size_t i);
    std::vector<RulesContext *> rules();
    RulesContext* rules(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GrammaticContext* grammatic();

  class  StartContext : public antlr4::ParserRuleContext {
  public:
    std::string start_token;
    antlr4::Token *ntermToken = nullptr;;
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
    std::string header_text;
    antlr4::Token *codeToken = nullptr;;
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
    term_t term;
    bool ignore;
    antlr4::Token *termToken = nullptr;;
    antlr4::Token *stringToken = nullptr;;
    LexemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TERM();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *SCOLON();
    antlr4::tree::TerminalNode *IGNORE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LexemContext* lexem();

  class  RulesContext : public antlr4::ParserRuleContext {
  public:
    non_term_t nterm;
    antlr4::Token *ntermToken = nullptr;;
    antlr4::Token *attrToken = nullptr;;
    GrammaticSchemeParser::One_ruleContext *one_ruleContext = nullptr;;
    RulesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NTERM();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *SCOLON();
    std::vector<One_ruleContext *> one_rule();
    One_ruleContext* one_rule(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ATTR();
    antlr4::tree::TerminalNode* ATTR(size_t i);
    antlr4::tree::TerminalNode *RETURS();
    std::vector<antlr4::tree::TerminalNode *> STICK();
    antlr4::tree::TerminalNode* STICK(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RulesContext* rules();

  class  One_ruleContext : public antlr4::ParserRuleContext {
  public:
    rule_t rule;
    antlr4::Token *termToken = nullptr;;
    antlr4::Token *ntermToken = nullptr;;
    antlr4::Token *attrToken = nullptr;;
    antlr4::Token *codeToken = nullptr;;
    One_ruleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> TERM();
    antlr4::tree::TerminalNode* TERM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NTERM();
    antlr4::tree::TerminalNode* NTERM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CODE();
    antlr4::tree::TerminalNode* CODE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ATTR();
    antlr4::tree::TerminalNode* ATTR(size_t i);
    antlr4::tree::TerminalNode *EPS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  One_ruleContext* one_rule();


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

