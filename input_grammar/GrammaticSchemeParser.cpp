
#include <string>
#include "../parser_generator/grammatic.h"


// Generated from /home/efeder/work/itmo/mt/lab4/input_grammar/GrammaticScheme.g4 by ANTLR 4.7.2


#include "GrammaticSchemeListener.h"

#include "GrammaticSchemeParser.h"


using namespace antlrcpp;
using namespace antlr4;

GrammaticSchemeParser::GrammaticSchemeParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

GrammaticSchemeParser::~GrammaticSchemeParser() {
  delete _interpreter;
}

std::string GrammaticSchemeParser::getGrammarFileName() const {
  return "GrammaticScheme.g4";
}

const std::vector<std::string>& GrammaticSchemeParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& GrammaticSchemeParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- GrammaticContext ------------------------------------------------------------------

GrammaticSchemeParser::GrammaticContext::GrammaticContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GrammaticSchemeParser::StartContext* GrammaticSchemeParser::GrammaticContext::start() {
  return getRuleContext<GrammaticSchemeParser::StartContext>(0);
}

GrammaticSchemeParser::HeaderContext* GrammaticSchemeParser::GrammaticContext::header() {
  return getRuleContext<GrammaticSchemeParser::HeaderContext>(0);
}

std::vector<GrammaticSchemeParser::LexemContext *> GrammaticSchemeParser::GrammaticContext::lexem() {
  return getRuleContexts<GrammaticSchemeParser::LexemContext>();
}

GrammaticSchemeParser::LexemContext* GrammaticSchemeParser::GrammaticContext::lexem(size_t i) {
  return getRuleContext<GrammaticSchemeParser::LexemContext>(i);
}

std::vector<GrammaticSchemeParser::RulesContext *> GrammaticSchemeParser::GrammaticContext::rules() {
  return getRuleContexts<GrammaticSchemeParser::RulesContext>();
}

GrammaticSchemeParser::RulesContext* GrammaticSchemeParser::GrammaticContext::rules(size_t i) {
  return getRuleContext<GrammaticSchemeParser::RulesContext>(i);
}


size_t GrammaticSchemeParser::GrammaticContext::getRuleIndex() const {
  return GrammaticSchemeParser::RuleGrammatic;
}

void GrammaticSchemeParser::GrammaticContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammaticSchemeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGrammatic(this);
}

void GrammaticSchemeParser::GrammaticContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammaticSchemeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGrammatic(this);
}

GrammaticSchemeParser::GrammaticContext* GrammaticSchemeParser::grammatic() {
  GrammaticContext *_localctx = _tracker.createInstance<GrammaticContext>(_ctx, getState());
  enterRule(_localctx, 0, GrammaticSchemeParser::RuleGrammatic);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(15);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == GrammaticSchemeParser::HEADER) {
      setState(12);
      dynamic_cast<GrammaticContext *>(_localctx)->headerContext = header();
      _localctx->g.set_header(dynamic_cast<GrammaticContext *>(_localctx)->headerContext->header_text);
    }
    setState(17);
    dynamic_cast<GrammaticContext *>(_localctx)->st = start();
    _localctx->g.set_start(dynamic_cast<GrammaticContext *>(_localctx)->st->start_token);
    setState(25); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(25);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case GrammaticSchemeParser::TERM: {
          setState(19);
          dynamic_cast<GrammaticContext *>(_localctx)->lexemContext = lexem();
          _localctx->g.add_term(dynamic_cast<GrammaticContext *>(_localctx)->lexemContext->term, dynamic_cast<GrammaticContext *>(_localctx)->lexemContext->ignore);
          break;
        }

        case GrammaticSchemeParser::NTERM: {
          setState(22);
          dynamic_cast<GrammaticContext *>(_localctx)->rulesContext = rules();
          _localctx->g.add_non_term(std::move(dynamic_cast<GrammaticContext *>(_localctx)->rulesContext->nterm));
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(27); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == GrammaticSchemeParser::TERM

    || _la == GrammaticSchemeParser::NTERM);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StartContext ------------------------------------------------------------------

GrammaticSchemeParser::StartContext::StartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GrammaticSchemeParser::StartContext::START() {
  return getToken(GrammaticSchemeParser::START, 0);
}

tree::TerminalNode* GrammaticSchemeParser::StartContext::NTERM() {
  return getToken(GrammaticSchemeParser::NTERM, 0);
}

tree::TerminalNode* GrammaticSchemeParser::StartContext::SCOLON() {
  return getToken(GrammaticSchemeParser::SCOLON, 0);
}


size_t GrammaticSchemeParser::StartContext::getRuleIndex() const {
  return GrammaticSchemeParser::RuleStart;
}

void GrammaticSchemeParser::StartContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammaticSchemeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStart(this);
}

void GrammaticSchemeParser::StartContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammaticSchemeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStart(this);
}

GrammaticSchemeParser::StartContext* GrammaticSchemeParser::start() {
  StartContext *_localctx = _tracker.createInstance<StartContext>(_ctx, getState());
  enterRule(_localctx, 2, GrammaticSchemeParser::RuleStart);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(29);
    match(GrammaticSchemeParser::START);
    setState(30);
    dynamic_cast<StartContext *>(_localctx)->ntermToken = match(GrammaticSchemeParser::NTERM);
    setState(31);
    match(GrammaticSchemeParser::SCOLON);
    dynamic_cast<StartContext *>(_localctx)->start_token =  (dynamic_cast<StartContext *>(_localctx)->ntermToken != nullptr ? dynamic_cast<StartContext *>(_localctx)->ntermToken->getText() : "");
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HeaderContext ------------------------------------------------------------------

GrammaticSchemeParser::HeaderContext::HeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GrammaticSchemeParser::HeaderContext::HEADER() {
  return getToken(GrammaticSchemeParser::HEADER, 0);
}

tree::TerminalNode* GrammaticSchemeParser::HeaderContext::CODE() {
  return getToken(GrammaticSchemeParser::CODE, 0);
}

tree::TerminalNode* GrammaticSchemeParser::HeaderContext::SCOLON() {
  return getToken(GrammaticSchemeParser::SCOLON, 0);
}


size_t GrammaticSchemeParser::HeaderContext::getRuleIndex() const {
  return GrammaticSchemeParser::RuleHeader;
}

void GrammaticSchemeParser::HeaderContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammaticSchemeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHeader(this);
}

void GrammaticSchemeParser::HeaderContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammaticSchemeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHeader(this);
}

GrammaticSchemeParser::HeaderContext* GrammaticSchemeParser::header() {
  HeaderContext *_localctx = _tracker.createInstance<HeaderContext>(_ctx, getState());
  enterRule(_localctx, 4, GrammaticSchemeParser::RuleHeader);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(34);
    match(GrammaticSchemeParser::HEADER);
    setState(35);
    dynamic_cast<HeaderContext *>(_localctx)->codeToken = match(GrammaticSchemeParser::CODE);
    setState(36);
    match(GrammaticSchemeParser::SCOLON);
    dynamic_cast<HeaderContext *>(_localctx)->header_text =  (dynamic_cast<HeaderContext *>(_localctx)->codeToken != nullptr ? dynamic_cast<HeaderContext *>(_localctx)->codeToken->getText() : "").substr(1, (dynamic_cast<HeaderContext *>(_localctx)->codeToken != nullptr ? dynamic_cast<HeaderContext *>(_localctx)->codeToken->getText() : "").size() - 2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LexemContext ------------------------------------------------------------------

GrammaticSchemeParser::LexemContext::LexemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GrammaticSchemeParser::LexemContext::TERM() {
  return getToken(GrammaticSchemeParser::TERM, 0);
}

tree::TerminalNode* GrammaticSchemeParser::LexemContext::COLON() {
  return getToken(GrammaticSchemeParser::COLON, 0);
}

tree::TerminalNode* GrammaticSchemeParser::LexemContext::STRING() {
  return getToken(GrammaticSchemeParser::STRING, 0);
}

tree::TerminalNode* GrammaticSchemeParser::LexemContext::SCOLON() {
  return getToken(GrammaticSchemeParser::SCOLON, 0);
}

tree::TerminalNode* GrammaticSchemeParser::LexemContext::IGNORE() {
  return getToken(GrammaticSchemeParser::IGNORE, 0);
}


size_t GrammaticSchemeParser::LexemContext::getRuleIndex() const {
  return GrammaticSchemeParser::RuleLexem;
}

void GrammaticSchemeParser::LexemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammaticSchemeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLexem(this);
}

void GrammaticSchemeParser::LexemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammaticSchemeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLexem(this);
}

GrammaticSchemeParser::LexemContext* GrammaticSchemeParser::lexem() {
  LexemContext *_localctx = _tracker.createInstance<LexemContext>(_ctx, getState());
  enterRule(_localctx, 6, GrammaticSchemeParser::RuleLexem);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    dynamic_cast<LexemContext *>(_localctx)->ignore =  false;
    setState(40);
    dynamic_cast<LexemContext *>(_localctx)->termToken = match(GrammaticSchemeParser::TERM);
    setState(41);
    match(GrammaticSchemeParser::COLON);
    setState(42);
    dynamic_cast<LexemContext *>(_localctx)->stringToken = match(GrammaticSchemeParser::STRING);
    setState(45);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == GrammaticSchemeParser::IGNORE) {
      setState(43);
      match(GrammaticSchemeParser::IGNORE);
      dynamic_cast<LexemContext *>(_localctx)->ignore =  true;
    }
    setState(47);
    match(GrammaticSchemeParser::SCOLON);
    dynamic_cast<LexemContext *>(_localctx)->term =  term_t((dynamic_cast<LexemContext *>(_localctx)->termToken != nullptr ? dynamic_cast<LexemContext *>(_localctx)->termToken->getText() : ""), (dynamic_cast<LexemContext *>(_localctx)->stringToken != nullptr ? dynamic_cast<LexemContext *>(_localctx)->stringToken->getText() : "").substr(1, (dynamic_cast<LexemContext *>(_localctx)->stringToken != nullptr ? dynamic_cast<LexemContext *>(_localctx)->stringToken->getText() : "").size() - 2));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RulesContext ------------------------------------------------------------------

GrammaticSchemeParser::RulesContext::RulesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GrammaticSchemeParser::RulesContext::NTERM() {
  return getToken(GrammaticSchemeParser::NTERM, 0);
}

tree::TerminalNode* GrammaticSchemeParser::RulesContext::COLON() {
  return getToken(GrammaticSchemeParser::COLON, 0);
}

tree::TerminalNode* GrammaticSchemeParser::RulesContext::SCOLON() {
  return getToken(GrammaticSchemeParser::SCOLON, 0);
}

std::vector<GrammaticSchemeParser::One_ruleContext *> GrammaticSchemeParser::RulesContext::one_rule() {
  return getRuleContexts<GrammaticSchemeParser::One_ruleContext>();
}

GrammaticSchemeParser::One_ruleContext* GrammaticSchemeParser::RulesContext::one_rule(size_t i) {
  return getRuleContext<GrammaticSchemeParser::One_ruleContext>(i);
}

std::vector<tree::TerminalNode *> GrammaticSchemeParser::RulesContext::ATTR() {
  return getTokens(GrammaticSchemeParser::ATTR);
}

tree::TerminalNode* GrammaticSchemeParser::RulesContext::ATTR(size_t i) {
  return getToken(GrammaticSchemeParser::ATTR, i);
}

tree::TerminalNode* GrammaticSchemeParser::RulesContext::RETURS() {
  return getToken(GrammaticSchemeParser::RETURS, 0);
}

std::vector<tree::TerminalNode *> GrammaticSchemeParser::RulesContext::STICK() {
  return getTokens(GrammaticSchemeParser::STICK);
}

tree::TerminalNode* GrammaticSchemeParser::RulesContext::STICK(size_t i) {
  return getToken(GrammaticSchemeParser::STICK, i);
}


size_t GrammaticSchemeParser::RulesContext::getRuleIndex() const {
  return GrammaticSchemeParser::RuleRules;
}

void GrammaticSchemeParser::RulesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammaticSchemeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRules(this);
}

void GrammaticSchemeParser::RulesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammaticSchemeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRules(this);
}

GrammaticSchemeParser::RulesContext* GrammaticSchemeParser::rules() {
  RulesContext *_localctx = _tracker.createInstance<RulesContext>(_ctx, getState());
  enterRule(_localctx, 8, GrammaticSchemeParser::RuleRules);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(50);
    dynamic_cast<RulesContext *>(_localctx)->ntermToken = match(GrammaticSchemeParser::NTERM);
    dynamic_cast<RulesContext *>(_localctx)->nterm =  non_term_t((dynamic_cast<RulesContext *>(_localctx)->ntermToken != nullptr ? dynamic_cast<RulesContext *>(_localctx)->ntermToken->getText() : "")); 
    setState(54);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == GrammaticSchemeParser::ATTR) {
      setState(52);
      dynamic_cast<RulesContext *>(_localctx)->attrToken = match(GrammaticSchemeParser::ATTR);
      _localctx->nterm.args = (dynamic_cast<RulesContext *>(_localctx)->attrToken != nullptr ? dynamic_cast<RulesContext *>(_localctx)->attrToken->getText() : "").substr(1, (dynamic_cast<RulesContext *>(_localctx)->attrToken != nullptr ? dynamic_cast<RulesContext *>(_localctx)->attrToken->getText() : "").size() - 2);
    }
    setState(59);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == GrammaticSchemeParser::RETURS) {
      setState(56);
      match(GrammaticSchemeParser::RETURS);
      setState(57);
      dynamic_cast<RulesContext *>(_localctx)->attrToken = match(GrammaticSchemeParser::ATTR);
      _localctx->nterm.returns = (dynamic_cast<RulesContext *>(_localctx)->attrToken != nullptr ? dynamic_cast<RulesContext *>(_localctx)->attrToken->getText() : "").substr(1, (dynamic_cast<RulesContext *>(_localctx)->attrToken != nullptr ? dynamic_cast<RulesContext *>(_localctx)->attrToken->getText() : "").size() - 2);
    }
    setState(61);
    match(GrammaticSchemeParser::COLON);

    setState(62);
    dynamic_cast<RulesContext *>(_localctx)->one_ruleContext = one_rule();
    _localctx->nterm.add_rule(std::move(dynamic_cast<RulesContext *>(_localctx)->one_ruleContext->rule));
    setState(70);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GrammaticSchemeParser::STICK) {
      setState(64);
      match(GrammaticSchemeParser::STICK);
      setState(65);
      dynamic_cast<RulesContext *>(_localctx)->one_ruleContext = one_rule();
      _localctx->nterm.add_rule(std::move(dynamic_cast<RulesContext *>(_localctx)->one_ruleContext->rule));
      setState(72);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(73);
    match(GrammaticSchemeParser::SCOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- One_ruleContext ------------------------------------------------------------------

GrammaticSchemeParser::One_ruleContext::One_ruleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> GrammaticSchemeParser::One_ruleContext::TERM() {
  return getTokens(GrammaticSchemeParser::TERM);
}

tree::TerminalNode* GrammaticSchemeParser::One_ruleContext::TERM(size_t i) {
  return getToken(GrammaticSchemeParser::TERM, i);
}

std::vector<tree::TerminalNode *> GrammaticSchemeParser::One_ruleContext::NTERM() {
  return getTokens(GrammaticSchemeParser::NTERM);
}

tree::TerminalNode* GrammaticSchemeParser::One_ruleContext::NTERM(size_t i) {
  return getToken(GrammaticSchemeParser::NTERM, i);
}

std::vector<tree::TerminalNode *> GrammaticSchemeParser::One_ruleContext::CODE() {
  return getTokens(GrammaticSchemeParser::CODE);
}

tree::TerminalNode* GrammaticSchemeParser::One_ruleContext::CODE(size_t i) {
  return getToken(GrammaticSchemeParser::CODE, i);
}

std::vector<tree::TerminalNode *> GrammaticSchemeParser::One_ruleContext::ATTR() {
  return getTokens(GrammaticSchemeParser::ATTR);
}

tree::TerminalNode* GrammaticSchemeParser::One_ruleContext::ATTR(size_t i) {
  return getToken(GrammaticSchemeParser::ATTR, i);
}

tree::TerminalNode* GrammaticSchemeParser::One_ruleContext::EPS() {
  return getToken(GrammaticSchemeParser::EPS, 0);
}


size_t GrammaticSchemeParser::One_ruleContext::getRuleIndex() const {
  return GrammaticSchemeParser::RuleOne_rule;
}

void GrammaticSchemeParser::One_ruleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammaticSchemeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOne_rule(this);
}

void GrammaticSchemeParser::One_ruleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammaticSchemeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOne_rule(this);
}

GrammaticSchemeParser::One_ruleContext* GrammaticSchemeParser::one_rule() {
  One_ruleContext *_localctx = _tracker.createInstance<One_ruleContext>(_ctx, getState());
  enterRule(_localctx, 10, GrammaticSchemeParser::RuleOne_rule);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(109);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GrammaticSchemeParser::TERM:
      case GrammaticSchemeParser::NTERM: {
        enterOuterAlt(_localctx, 1);
        setState(83);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case GrammaticSchemeParser::TERM: {
            setState(75);
            dynamic_cast<One_ruleContext *>(_localctx)->termToken = match(GrammaticSchemeParser::TERM);
            _localctx->rule.emplace_back((dynamic_cast<One_ruleContext *>(_localctx)->termToken != nullptr ? dynamic_cast<One_ruleContext *>(_localctx)->termToken->getText() : ""));
            break;
          }

          case GrammaticSchemeParser::NTERM: {
            setState(77);
            dynamic_cast<One_ruleContext *>(_localctx)->ntermToken = match(GrammaticSchemeParser::NTERM);
            _localctx->rule.emplace_back((dynamic_cast<One_ruleContext *>(_localctx)->ntermToken != nullptr ? dynamic_cast<One_ruleContext *>(_localctx)->ntermToken->getText() : ""));
            setState(81);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == GrammaticSchemeParser::ATTR) {
              setState(79);
              dynamic_cast<One_ruleContext *>(_localctx)->attrToken = match(GrammaticSchemeParser::ATTR);
              _localctx->rule.back().code = (dynamic_cast<One_ruleContext *>(_localctx)->attrToken != nullptr ? dynamic_cast<One_ruleContext *>(_localctx)->attrToken->getText() : "").substr(1, (dynamic_cast<One_ruleContext *>(_localctx)->attrToken != nullptr ? dynamic_cast<One_ruleContext *>(_localctx)->attrToken->getText() : "").size() - 2);
            }
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(97);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << GrammaticSchemeParser::TERM)
          | (1ULL << GrammaticSchemeParser::NTERM)
          | (1ULL << GrammaticSchemeParser::CODE))) != 0)) {
          setState(95);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case GrammaticSchemeParser::TERM: {
              setState(85);
              dynamic_cast<One_ruleContext *>(_localctx)->termToken = match(GrammaticSchemeParser::TERM);
              _localctx->rule.emplace_back((dynamic_cast<One_ruleContext *>(_localctx)->termToken != nullptr ? dynamic_cast<One_ruleContext *>(_localctx)->termToken->getText() : ""));
              break;
            }

            case GrammaticSchemeParser::NTERM: {
              setState(87);
              dynamic_cast<One_ruleContext *>(_localctx)->ntermToken = match(GrammaticSchemeParser::NTERM);
              _localctx->rule.emplace_back((dynamic_cast<One_ruleContext *>(_localctx)->ntermToken != nullptr ? dynamic_cast<One_ruleContext *>(_localctx)->ntermToken->getText() : ""));
              setState(91);
              _errHandler->sync(this);

              _la = _input->LA(1);
              if (_la == GrammaticSchemeParser::ATTR) {
                setState(89);
                dynamic_cast<One_ruleContext *>(_localctx)->attrToken = match(GrammaticSchemeParser::ATTR);
                _localctx->rule.back().code = (dynamic_cast<One_ruleContext *>(_localctx)->attrToken != nullptr ? dynamic_cast<One_ruleContext *>(_localctx)->attrToken->getText() : "").substr(1, (dynamic_cast<One_ruleContext *>(_localctx)->attrToken != nullptr ? dynamic_cast<One_ruleContext *>(_localctx)->attrToken->getText() : "").size() - 2);
              }
              break;
            }

            case GrammaticSchemeParser::CODE: {
              setState(93);
              dynamic_cast<One_ruleContext *>(_localctx)->codeToken = match(GrammaticSchemeParser::CODE);
              _localctx->rule.emplace_back("@code", (dynamic_cast<One_ruleContext *>(_localctx)->codeToken != nullptr ? dynamic_cast<One_ruleContext *>(_localctx)->codeToken->getText() : "").substr(1, (dynamic_cast<One_ruleContext *>(_localctx)->codeToken != nullptr ? dynamic_cast<One_ruleContext *>(_localctx)->codeToken->getText() : "").size() - 2));
              break;
            }

          default:
            throw NoViableAltException(this);
          }
          setState(99);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case GrammaticSchemeParser::EPS: {
        enterOuterAlt(_localctx, 2);
        setState(100);
        match(GrammaticSchemeParser::EPS);
        _localctx->rule.emplace_back("@eps");
        setState(106);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == GrammaticSchemeParser::CODE) {
          setState(102);
          dynamic_cast<One_ruleContext *>(_localctx)->codeToken = match(GrammaticSchemeParser::CODE);
          _localctx->rule.emplace_back("@code", (dynamic_cast<One_ruleContext *>(_localctx)->codeToken != nullptr ? dynamic_cast<One_ruleContext *>(_localctx)->codeToken->getText() : "").substr(1, (dynamic_cast<One_ruleContext *>(_localctx)->codeToken != nullptr ? dynamic_cast<One_ruleContext *>(_localctx)->codeToken->getText() : "").size() - 2));
          setState(108);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> GrammaticSchemeParser::_decisionToDFA;
atn::PredictionContextCache GrammaticSchemeParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN GrammaticSchemeParser::_atn;
std::vector<uint16_t> GrammaticSchemeParser::_serializedATN;

std::vector<std::string> GrammaticSchemeParser::_ruleNames = {
  "grammatic", "start", "header", "lexem", "rules", "one_rule"
};

std::vector<std::string> GrammaticSchemeParser::_literalNames = {
  "", "'header'", "'ignore'", "'returns'", "'start'", "'EPS'", "", "", "", 
  "", "", "", "','", "':'", "'::'", "';'", "'='", "'|'", "'{'", "'}'", "'('", 
  "')'", "'['", "']'"
};

std::vector<std::string> GrammaticSchemeParser::_symbolicNames = {
  "", "HEADER", "IGNORE", "RETURS", "START", "EPS", "TERM", "NTERM", "WHITESPACE", 
  "CODE", "STRING", "ATTR", "COMMA", "COLON", "DCOLON", "SCOLON", "EQ", 
  "STICK", "LB", "RB", "LP", "RP", "LSQUARE", "RSQUARE"
};

dfa::Vocabulary GrammaticSchemeParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> GrammaticSchemeParser::_tokenNames;

GrammaticSchemeParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x19, 0x72, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x12, 0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x6, 0x2, 
    0x1c, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x1d, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 
    0x30, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x5, 0x6, 0x39, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x5, 0x6, 0x3e, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x47, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 
    0x4a, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x54, 0xa, 0x7, 0x5, 0x7, 0x56, 0xa, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 
    0x7, 0x5e, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x62, 0xa, 0x7, 0xc, 
    0x7, 0xe, 0x7, 0x65, 0xb, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x7, 0x7, 0x6b, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x6e, 0xb, 0x7, 0x5, 0x7, 
    0x70, 0xa, 0x7, 0x3, 0x7, 0x2, 0x2, 0x8, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 
    0x2, 0x2, 0x2, 0x7a, 0x2, 0x11, 0x3, 0x2, 0x2, 0x2, 0x4, 0x1f, 0x3, 
    0x2, 0x2, 0x2, 0x6, 0x24, 0x3, 0x2, 0x2, 0x2, 0x8, 0x29, 0x3, 0x2, 0x2, 
    0x2, 0xa, 0x34, 0x3, 0x2, 0x2, 0x2, 0xc, 0x6f, 0x3, 0x2, 0x2, 0x2, 0xe, 
    0xf, 0x5, 0x6, 0x4, 0x2, 0xf, 0x10, 0x8, 0x2, 0x1, 0x2, 0x10, 0x12, 
    0x3, 0x2, 0x2, 0x2, 0x11, 0xe, 0x3, 0x2, 0x2, 0x2, 0x11, 0x12, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x13, 0x3, 0x2, 0x2, 0x2, 0x13, 0x14, 0x5, 0x4, 
    0x3, 0x2, 0x14, 0x1b, 0x8, 0x2, 0x1, 0x2, 0x15, 0x16, 0x5, 0x8, 0x5, 
    0x2, 0x16, 0x17, 0x8, 0x2, 0x1, 0x2, 0x17, 0x1c, 0x3, 0x2, 0x2, 0x2, 
    0x18, 0x19, 0x5, 0xa, 0x6, 0x2, 0x19, 0x1a, 0x8, 0x2, 0x1, 0x2, 0x1a, 
    0x1c, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x15, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x18, 
    0x3, 0x2, 0x2, 0x2, 0x1c, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x1b, 0x3, 
    0x2, 0x2, 0x2, 0x1d, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x3, 0x3, 0x2, 
    0x2, 0x2, 0x1f, 0x20, 0x7, 0x6, 0x2, 0x2, 0x20, 0x21, 0x7, 0x9, 0x2, 
    0x2, 0x21, 0x22, 0x7, 0x11, 0x2, 0x2, 0x22, 0x23, 0x8, 0x3, 0x1, 0x2, 
    0x23, 0x5, 0x3, 0x2, 0x2, 0x2, 0x24, 0x25, 0x7, 0x3, 0x2, 0x2, 0x25, 
    0x26, 0x7, 0xb, 0x2, 0x2, 0x26, 0x27, 0x7, 0x11, 0x2, 0x2, 0x27, 0x28, 
    0x8, 0x4, 0x1, 0x2, 0x28, 0x7, 0x3, 0x2, 0x2, 0x2, 0x29, 0x2a, 0x8, 
    0x5, 0x1, 0x2, 0x2a, 0x2b, 0x7, 0x8, 0x2, 0x2, 0x2b, 0x2c, 0x7, 0xf, 
    0x2, 0x2, 0x2c, 0x2f, 0x7, 0xc, 0x2, 0x2, 0x2d, 0x2e, 0x7, 0x4, 0x2, 
    0x2, 0x2e, 0x30, 0x8, 0x5, 0x1, 0x2, 0x2f, 0x2d, 0x3, 0x2, 0x2, 0x2, 
    0x2f, 0x30, 0x3, 0x2, 0x2, 0x2, 0x30, 0x31, 0x3, 0x2, 0x2, 0x2, 0x31, 
    0x32, 0x7, 0x11, 0x2, 0x2, 0x32, 0x33, 0x8, 0x5, 0x1, 0x2, 0x33, 0x9, 
    0x3, 0x2, 0x2, 0x2, 0x34, 0x35, 0x7, 0x9, 0x2, 0x2, 0x35, 0x38, 0x8, 
    0x6, 0x1, 0x2, 0x36, 0x37, 0x7, 0xd, 0x2, 0x2, 0x37, 0x39, 0x8, 0x6, 
    0x1, 0x2, 0x38, 0x36, 0x3, 0x2, 0x2, 0x2, 0x38, 0x39, 0x3, 0x2, 0x2, 
    0x2, 0x39, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b, 0x7, 0x5, 0x2, 0x2, 
    0x3b, 0x3c, 0x7, 0xd, 0x2, 0x2, 0x3c, 0x3e, 0x8, 0x6, 0x1, 0x2, 0x3d, 
    0x3a, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3f, 
    0x3, 0x2, 0x2, 0x2, 0x3f, 0x40, 0x7, 0xf, 0x2, 0x2, 0x40, 0x41, 0x5, 
    0xc, 0x7, 0x2, 0x41, 0x48, 0x8, 0x6, 0x1, 0x2, 0x42, 0x43, 0x7, 0x13, 
    0x2, 0x2, 0x43, 0x44, 0x5, 0xc, 0x7, 0x2, 0x44, 0x45, 0x8, 0x6, 0x1, 
    0x2, 0x45, 0x47, 0x3, 0x2, 0x2, 0x2, 0x46, 0x42, 0x3, 0x2, 0x2, 0x2, 
    0x47, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x48, 0x46, 0x3, 0x2, 0x2, 0x2, 0x48, 
    0x49, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x48, 
    0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 0x7, 0x11, 0x2, 0x2, 0x4c, 0xb, 0x3, 
    0x2, 0x2, 0x2, 0x4d, 0x4e, 0x7, 0x8, 0x2, 0x2, 0x4e, 0x56, 0x8, 0x7, 
    0x1, 0x2, 0x4f, 0x50, 0x7, 0x9, 0x2, 0x2, 0x50, 0x53, 0x8, 0x7, 0x1, 
    0x2, 0x51, 0x52, 0x7, 0xd, 0x2, 0x2, 0x52, 0x54, 0x8, 0x7, 0x1, 0x2, 
    0x53, 0x51, 0x3, 0x2, 0x2, 0x2, 0x53, 0x54, 0x3, 0x2, 0x2, 0x2, 0x54, 
    0x56, 0x3, 0x2, 0x2, 0x2, 0x55, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x55, 0x4f, 
    0x3, 0x2, 0x2, 0x2, 0x56, 0x63, 0x3, 0x2, 0x2, 0x2, 0x57, 0x58, 0x7, 
    0x8, 0x2, 0x2, 0x58, 0x62, 0x8, 0x7, 0x1, 0x2, 0x59, 0x5a, 0x7, 0x9, 
    0x2, 0x2, 0x5a, 0x5d, 0x8, 0x7, 0x1, 0x2, 0x5b, 0x5c, 0x7, 0xd, 0x2, 
    0x2, 0x5c, 0x5e, 0x8, 0x7, 0x1, 0x2, 0x5d, 0x5b, 0x3, 0x2, 0x2, 0x2, 
    0x5d, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x62, 0x3, 0x2, 0x2, 0x2, 0x5f, 
    0x60, 0x7, 0xb, 0x2, 0x2, 0x60, 0x62, 0x8, 0x7, 0x1, 0x2, 0x61, 0x57, 
    0x3, 0x2, 0x2, 0x2, 0x61, 0x59, 0x3, 0x2, 0x2, 0x2, 0x61, 0x5f, 0x3, 
    0x2, 0x2, 0x2, 0x62, 0x65, 0x3, 0x2, 0x2, 0x2, 0x63, 0x61, 0x3, 0x2, 
    0x2, 0x2, 0x63, 0x64, 0x3, 0x2, 0x2, 0x2, 0x64, 0x70, 0x3, 0x2, 0x2, 
    0x2, 0x65, 0x63, 0x3, 0x2, 0x2, 0x2, 0x66, 0x67, 0x7, 0x7, 0x2, 0x2, 
    0x67, 0x6c, 0x8, 0x7, 0x1, 0x2, 0x68, 0x69, 0x7, 0xb, 0x2, 0x2, 0x69, 
    0x6b, 0x8, 0x7, 0x1, 0x2, 0x6a, 0x68, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6e, 
    0x3, 0x2, 0x2, 0x2, 0x6c, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6d, 0x3, 
    0x2, 0x2, 0x2, 0x6d, 0x70, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6c, 0x3, 0x2, 
    0x2, 0x2, 0x6f, 0x55, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x66, 0x3, 0x2, 0x2, 
    0x2, 0x70, 0xd, 0x3, 0x2, 0x2, 0x2, 0x10, 0x11, 0x1b, 0x1d, 0x2f, 0x38, 
    0x3d, 0x48, 0x53, 0x55, 0x5d, 0x61, 0x63, 0x6c, 0x6f, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

GrammaticSchemeParser::Initializer GrammaticSchemeParser::_init;
