
// Generated from /home/efeder/work/itmo/mt/lab4/antlr/GrammaticScheme.g4 by ANTLR 4.7


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

std::vector<GrammaticSchemeParser::IgnoreContext *> GrammaticSchemeParser::GrammaticContext::ignore() {
  return getRuleContexts<GrammaticSchemeParser::IgnoreContext>();
}

GrammaticSchemeParser::IgnoreContext* GrammaticSchemeParser::GrammaticContext::ignore(size_t i) {
  return getRuleContext<GrammaticSchemeParser::IgnoreContext>(i);
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
    setState(13);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == GrammaticSchemeParser::HEADER) {
      setState(12);
      header();
    }
    setState(15);
    start();
    setState(21);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << GrammaticSchemeParser::IGNORE)
      | (1ULL << GrammaticSchemeParser::TERM)
      | (1ULL << GrammaticSchemeParser::NTERM))) != 0)) {
      setState(19);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case GrammaticSchemeParser::TERM: {
          setState(16);
          lexem();
          break;
        }

        case GrammaticSchemeParser::IGNORE: {
          setState(17);
          ignore();
          break;
        }

        case GrammaticSchemeParser::NTERM: {
          setState(18);
          rules();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(23);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
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
    setState(24);
    match(GrammaticSchemeParser::START);
    setState(25);
    match(GrammaticSchemeParser::NTERM);
    setState(26);
    match(GrammaticSchemeParser::SCOLON);
   
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
    setState(28);
    match(GrammaticSchemeParser::HEADER);
    setState(29);
    match(GrammaticSchemeParser::CODE);
    setState(30);
    match(GrammaticSchemeParser::SCOLON);
   
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(32);
    match(GrammaticSchemeParser::TERM);
    setState(33);
    match(GrammaticSchemeParser::COLON);
    setState(34);
    match(GrammaticSchemeParser::STRING);
    setState(35);
    match(GrammaticSchemeParser::SCOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IgnoreContext ------------------------------------------------------------------

GrammaticSchemeParser::IgnoreContext::IgnoreContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GrammaticSchemeParser::IgnoreContext::IGNORE() {
  return getToken(GrammaticSchemeParser::IGNORE, 0);
}

tree::TerminalNode* GrammaticSchemeParser::IgnoreContext::TERM() {
  return getToken(GrammaticSchemeParser::TERM, 0);
}

tree::TerminalNode* GrammaticSchemeParser::IgnoreContext::SCOLON() {
  return getToken(GrammaticSchemeParser::SCOLON, 0);
}


size_t GrammaticSchemeParser::IgnoreContext::getRuleIndex() const {
  return GrammaticSchemeParser::RuleIgnore;
}

void GrammaticSchemeParser::IgnoreContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammaticSchemeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIgnore(this);
}

void GrammaticSchemeParser::IgnoreContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammaticSchemeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIgnore(this);
}

GrammaticSchemeParser::IgnoreContext* GrammaticSchemeParser::ignore() {
  IgnoreContext *_localctx = _tracker.createInstance<IgnoreContext>(_ctx, getState());
  enterRule(_localctx, 8, GrammaticSchemeParser::RuleIgnore);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(37);
    match(GrammaticSchemeParser::IGNORE);
    setState(38);
    match(GrammaticSchemeParser::TERM);
    setState(39);
    match(GrammaticSchemeParser::SCOLON);
   
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

std::vector<tree::TerminalNode *> GrammaticSchemeParser::RulesContext::NTERM() {
  return getTokens(GrammaticSchemeParser::NTERM);
}

tree::TerminalNode* GrammaticSchemeParser::RulesContext::NTERM(size_t i) {
  return getToken(GrammaticSchemeParser::NTERM, i);
}

tree::TerminalNode* GrammaticSchemeParser::RulesContext::COLON() {
  return getToken(GrammaticSchemeParser::COLON, 0);
}

tree::TerminalNode* GrammaticSchemeParser::RulesContext::SCOLON() {
  return getToken(GrammaticSchemeParser::SCOLON, 0);
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

std::vector<tree::TerminalNode *> GrammaticSchemeParser::RulesContext::TERM() {
  return getTokens(GrammaticSchemeParser::TERM);
}

tree::TerminalNode* GrammaticSchemeParser::RulesContext::TERM(size_t i) {
  return getToken(GrammaticSchemeParser::TERM, i);
}

std::vector<tree::TerminalNode *> GrammaticSchemeParser::RulesContext::CODE() {
  return getTokens(GrammaticSchemeParser::CODE);
}

tree::TerminalNode* GrammaticSchemeParser::RulesContext::CODE(size_t i) {
  return getToken(GrammaticSchemeParser::CODE, i);
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
  enterRule(_localctx, 10, GrammaticSchemeParser::RuleRules);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(41);
    match(GrammaticSchemeParser::NTERM);
    setState(43);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == GrammaticSchemeParser::ATTR) {
      setState(42);
      match(GrammaticSchemeParser::ATTR);
    }
    setState(47);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == GrammaticSchemeParser::RETURS) {
      setState(45);
      match(GrammaticSchemeParser::RETURS);
      setState(46);
      match(GrammaticSchemeParser::ATTR);
    }
    setState(49);
    match(GrammaticSchemeParser::COLON);

    setState(56); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(56);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case GrammaticSchemeParser::TERM: {
          setState(50);
          match(GrammaticSchemeParser::TERM);
          break;
        }

        case GrammaticSchemeParser::NTERM: {
          setState(51);
          match(GrammaticSchemeParser::NTERM);
          setState(53);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == GrammaticSchemeParser::ATTR) {
            setState(52);
            match(GrammaticSchemeParser::ATTR);
          }
          break;
        }

        case GrammaticSchemeParser::CODE: {
          setState(55);
          match(GrammaticSchemeParser::CODE);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(58); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << GrammaticSchemeParser::TERM)
      | (1ULL << GrammaticSchemeParser::NTERM)
      | (1ULL << GrammaticSchemeParser::CODE))) != 0));
    setState(73);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GrammaticSchemeParser::STICK) {
      setState(60);
      match(GrammaticSchemeParser::STICK);
      setState(67); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(67);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case GrammaticSchemeParser::TERM: {
            setState(61);
            match(GrammaticSchemeParser::TERM);
            break;
          }

          case GrammaticSchemeParser::NTERM: {
            setState(62);
            match(GrammaticSchemeParser::NTERM);
            setState(64);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == GrammaticSchemeParser::ATTR) {
              setState(63);
              match(GrammaticSchemeParser::ATTR);
            }
            break;
          }

          case GrammaticSchemeParser::CODE: {
            setState(66);
            match(GrammaticSchemeParser::CODE);
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(69); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << GrammaticSchemeParser::TERM)
        | (1ULL << GrammaticSchemeParser::NTERM)
        | (1ULL << GrammaticSchemeParser::CODE))) != 0));
      setState(75);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(76);
    match(GrammaticSchemeParser::SCOLON);
   
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
  "grammatic", "start", "header", "lexem", "ignore", "rules"
};

std::vector<std::string> GrammaticSchemeParser::_literalNames = {
  "", "'header'", "'ignore'", "'returns'", "'start'", "", "", "", "", "", 
  "", "','", "':'", "'::'", "';'", "'='", "'|'", "'{'", "'}'", "'('", "')'", 
  "'['", "']'"
};

std::vector<std::string> GrammaticSchemeParser::_symbolicNames = {
  "", "HEADER", "IGNORE", "RETURS", "START", "TERM", "NTERM", "WHITESPACE", 
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
    0x3, 0x18, 0x51, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x3, 
    0x2, 0x5, 0x2, 0x10, 0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 
    0x7, 0x2, 0x16, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x19, 0xb, 0x2, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x2e, 0xa, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x5, 0x7, 0x32, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x5, 0x7, 0x38, 0xa, 0x7, 0x3, 0x7, 0x6, 0x7, 0x3b, 0xa, 0x7, 
    0xd, 0x7, 0xe, 0x7, 0x3c, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 
    0x7, 0x43, 0xa, 0x7, 0x3, 0x7, 0x6, 0x7, 0x46, 0xa, 0x7, 0xd, 0x7, 0xe, 
    0x7, 0x47, 0x7, 0x7, 0x4a, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x4d, 0xb, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x2, 0x2, 0x8, 0x2, 0x4, 0x6, 0x8, 
    0xa, 0xc, 0x2, 0x2, 0x2, 0x59, 0x2, 0xf, 0x3, 0x2, 0x2, 0x2, 0x4, 0x1a, 
    0x3, 0x2, 0x2, 0x2, 0x6, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x8, 0x22, 0x3, 0x2, 
    0x2, 0x2, 0xa, 0x27, 0x3, 0x2, 0x2, 0x2, 0xc, 0x2b, 0x3, 0x2, 0x2, 0x2, 
    0xe, 0x10, 0x5, 0x6, 0x4, 0x2, 0xf, 0xe, 0x3, 0x2, 0x2, 0x2, 0xf, 0x10, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x11, 0x3, 0x2, 0x2, 0x2, 0x11, 0x17, 0x5, 
    0x4, 0x3, 0x2, 0x12, 0x16, 0x5, 0x8, 0x5, 0x2, 0x13, 0x16, 0x5, 0xa, 
    0x6, 0x2, 0x14, 0x16, 0x5, 0xc, 0x7, 0x2, 0x15, 0x12, 0x3, 0x2, 0x2, 
    0x2, 0x15, 0x13, 0x3, 0x2, 0x2, 0x2, 0x15, 0x14, 0x3, 0x2, 0x2, 0x2, 
    0x16, 0x19, 0x3, 0x2, 0x2, 0x2, 0x17, 0x15, 0x3, 0x2, 0x2, 0x2, 0x17, 
    0x18, 0x3, 0x2, 0x2, 0x2, 0x18, 0x3, 0x3, 0x2, 0x2, 0x2, 0x19, 0x17, 
    0x3, 0x2, 0x2, 0x2, 0x1a, 0x1b, 0x7, 0x6, 0x2, 0x2, 0x1b, 0x1c, 0x7, 
    0x8, 0x2, 0x2, 0x1c, 0x1d, 0x7, 0x10, 0x2, 0x2, 0x1d, 0x5, 0x3, 0x2, 
    0x2, 0x2, 0x1e, 0x1f, 0x7, 0x3, 0x2, 0x2, 0x1f, 0x20, 0x7, 0xa, 0x2, 
    0x2, 0x20, 0x21, 0x7, 0x10, 0x2, 0x2, 0x21, 0x7, 0x3, 0x2, 0x2, 0x2, 
    0x22, 0x23, 0x7, 0x7, 0x2, 0x2, 0x23, 0x24, 0x7, 0xe, 0x2, 0x2, 0x24, 
    0x25, 0x7, 0xb, 0x2, 0x2, 0x25, 0x26, 0x7, 0x10, 0x2, 0x2, 0x26, 0x9, 
    0x3, 0x2, 0x2, 0x2, 0x27, 0x28, 0x7, 0x4, 0x2, 0x2, 0x28, 0x29, 0x7, 
    0x7, 0x2, 0x2, 0x29, 0x2a, 0x7, 0x10, 0x2, 0x2, 0x2a, 0xb, 0x3, 0x2, 
    0x2, 0x2, 0x2b, 0x2d, 0x7, 0x8, 0x2, 0x2, 0x2c, 0x2e, 0x7, 0xc, 0x2, 
    0x2, 0x2d, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2e, 0x3, 0x2, 0x2, 0x2, 
    0x2e, 0x31, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x30, 0x7, 0x5, 0x2, 0x2, 0x30, 
    0x32, 0x7, 0xc, 0x2, 0x2, 0x31, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x31, 0x32, 
    0x3, 0x2, 0x2, 0x2, 0x32, 0x33, 0x3, 0x2, 0x2, 0x2, 0x33, 0x3a, 0x7, 
    0xe, 0x2, 0x2, 0x34, 0x3b, 0x7, 0x7, 0x2, 0x2, 0x35, 0x37, 0x7, 0x8, 
    0x2, 0x2, 0x36, 0x38, 0x7, 0xc, 0x2, 0x2, 0x37, 0x36, 0x3, 0x2, 0x2, 
    0x2, 0x37, 0x38, 0x3, 0x2, 0x2, 0x2, 0x38, 0x3b, 0x3, 0x2, 0x2, 0x2, 
    0x39, 0x3b, 0x7, 0xa, 0x2, 0x2, 0x3a, 0x34, 0x3, 0x2, 0x2, 0x2, 0x3a, 
    0x35, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x39, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x3c, 
    0x3, 0x2, 0x2, 0x2, 0x3c, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3d, 0x3, 
    0x2, 0x2, 0x2, 0x3d, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x45, 0x7, 0x12, 
    0x2, 0x2, 0x3f, 0x46, 0x7, 0x7, 0x2, 0x2, 0x40, 0x42, 0x7, 0x8, 0x2, 
    0x2, 0x41, 0x43, 0x7, 0xc, 0x2, 0x2, 0x42, 0x41, 0x3, 0x2, 0x2, 0x2, 
    0x42, 0x43, 0x3, 0x2, 0x2, 0x2, 0x43, 0x46, 0x3, 0x2, 0x2, 0x2, 0x44, 
    0x46, 0x7, 0xa, 0x2, 0x2, 0x45, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x45, 0x40, 
    0x3, 0x2, 0x2, 0x2, 0x45, 0x44, 0x3, 0x2, 0x2, 0x2, 0x46, 0x47, 0x3, 
    0x2, 0x2, 0x2, 0x47, 0x45, 0x3, 0x2, 0x2, 0x2, 0x47, 0x48, 0x3, 0x2, 
    0x2, 0x2, 0x48, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x49, 0x3e, 0x3, 0x2, 0x2, 
    0x2, 0x4a, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x49, 0x3, 0x2, 0x2, 0x2, 
    0x4b, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x4d, 
    0x4b, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4f, 0x7, 0x10, 0x2, 0x2, 0x4f, 0xd, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0xf, 0x15, 0x17, 0x2d, 0x31, 0x37, 0x3a, 0x3c, 
    0x42, 0x45, 0x47, 0x4b, 
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
