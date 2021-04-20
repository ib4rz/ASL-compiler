
// Generated from Asl.g4 by ANTLR 4.7.2


#include "AslVisitor.h"

#include "AslParser.h"


using namespace antlrcpp;
using namespace antlr4;

AslParser::AslParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

AslParser::~AslParser() {
  delete _interpreter;
}

std::string AslParser::getGrammarFileName() const {
  return "Asl.g4";
}

const std::vector<std::string>& AslParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& AslParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

AslParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AslParser::ProgramContext::EOF() {
  return getToken(AslParser::EOF, 0);
}

std::vector<AslParser::FunctionContext *> AslParser::ProgramContext::function() {
  return getRuleContexts<AslParser::FunctionContext>();
}

AslParser::FunctionContext* AslParser::ProgramContext::function(size_t i) {
  return getRuleContext<AslParser::FunctionContext>(i);
}


size_t AslParser::ProgramContext::getRuleIndex() const {
  return AslParser::RuleProgram;
}

antlrcpp::Any AslParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

AslParser::ProgramContext* AslParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, AslParser::RuleProgram);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(31); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(30);
      function();
      setState(33); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == AslParser::FUNC);
    setState(35);
    match(AslParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionContext ------------------------------------------------------------------

AslParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AslParser::FunctionContext::FUNC() {
  return getToken(AslParser::FUNC, 0);
}

tree::TerminalNode* AslParser::FunctionContext::ID() {
  return getToken(AslParser::ID, 0);
}

AslParser::ParametersContext* AslParser::FunctionContext::parameters() {
  return getRuleContext<AslParser::ParametersContext>(0);
}

AslParser::DeclarationsContext* AslParser::FunctionContext::declarations() {
  return getRuleContext<AslParser::DeclarationsContext>(0);
}

AslParser::StatementsContext* AslParser::FunctionContext::statements() {
  return getRuleContext<AslParser::StatementsContext>(0);
}

tree::TerminalNode* AslParser::FunctionContext::ENDFUNC() {
  return getToken(AslParser::ENDFUNC, 0);
}

AslParser::Basic_typeContext* AslParser::FunctionContext::basic_type() {
  return getRuleContext<AslParser::Basic_typeContext>(0);
}


size_t AslParser::FunctionContext::getRuleIndex() const {
  return AslParser::RuleFunction;
}

antlrcpp::Any AslParser::FunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitFunction(this);
  else
    return visitor->visitChildren(this);
}

AslParser::FunctionContext* AslParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 2, AslParser::RuleFunction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(37);
    match(AslParser::FUNC);
    setState(38);
    match(AslParser::ID);
    setState(39);
    match(AslParser::T__0);
    setState(40);
    parameters();
    setState(41);
    match(AslParser::T__1);
    setState(44);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AslParser::T__2) {
      setState(42);
      match(AslParser::T__2);
      setState(43);
      basic_type();
    }
    setState(46);
    declarations();
    setState(47);
    statements();
    setState(48);
    match(AslParser::ENDFUNC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParametersContext ------------------------------------------------------------------

AslParser::ParametersContext::ParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> AslParser::ParametersContext::ID() {
  return getTokens(AslParser::ID);
}

tree::TerminalNode* AslParser::ParametersContext::ID(size_t i) {
  return getToken(AslParser::ID, i);
}

std::vector<AslParser::TypeContext *> AslParser::ParametersContext::type() {
  return getRuleContexts<AslParser::TypeContext>();
}

AslParser::TypeContext* AslParser::ParametersContext::type(size_t i) {
  return getRuleContext<AslParser::TypeContext>(i);
}


size_t AslParser::ParametersContext::getRuleIndex() const {
  return AslParser::RuleParameters;
}

antlrcpp::Any AslParser::ParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitParameters(this);
  else
    return visitor->visitChildren(this);
}

AslParser::ParametersContext* AslParser::parameters() {
  ParametersContext *_localctx = _tracker.createInstance<ParametersContext>(_ctx, getState());
  enterRule(_localctx, 4, AslParser::RuleParameters);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(63);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AslParser::T__1: {
        break;
      }

      case AslParser::ID: {
        setState(51);
        match(AslParser::ID);
        setState(52);
        match(AslParser::T__2);
        setState(53);
        type();
        setState(60);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == AslParser::T__3) {
          setState(54);
          match(AslParser::T__3);
          setState(55);
          match(AslParser::ID);
          setState(56);
          match(AslParser::T__2);
          setState(57);
          type();
          setState(62);
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

//----------------- DeclarationsContext ------------------------------------------------------------------

AslParser::DeclarationsContext::DeclarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<AslParser::Variable_declContext *> AslParser::DeclarationsContext::variable_decl() {
  return getRuleContexts<AslParser::Variable_declContext>();
}

AslParser::Variable_declContext* AslParser::DeclarationsContext::variable_decl(size_t i) {
  return getRuleContext<AslParser::Variable_declContext>(i);
}


size_t AslParser::DeclarationsContext::getRuleIndex() const {
  return AslParser::RuleDeclarations;
}

antlrcpp::Any AslParser::DeclarationsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitDeclarations(this);
  else
    return visitor->visitChildren(this);
}

AslParser::DeclarationsContext* AslParser::declarations() {
  DeclarationsContext *_localctx = _tracker.createInstance<DeclarationsContext>(_ctx, getState());
  enterRule(_localctx, 6, AslParser::RuleDeclarations);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(68);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == AslParser::VAR) {
      setState(65);
      variable_decl();
      setState(70);
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

//----------------- Array_declContext ------------------------------------------------------------------

AslParser::Array_declContext::Array_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AslParser::Array_declContext::ARRAY() {
  return getToken(AslParser::ARRAY, 0);
}

tree::TerminalNode* AslParser::Array_declContext::INTVAL() {
  return getToken(AslParser::INTVAL, 0);
}

AslParser::Basic_typeContext* AslParser::Array_declContext::basic_type() {
  return getRuleContext<AslParser::Basic_typeContext>(0);
}


size_t AslParser::Array_declContext::getRuleIndex() const {
  return AslParser::RuleArray_decl;
}

antlrcpp::Any AslParser::Array_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitArray_decl(this);
  else
    return visitor->visitChildren(this);
}

AslParser::Array_declContext* AslParser::array_decl() {
  Array_declContext *_localctx = _tracker.createInstance<Array_declContext>(_ctx, getState());
  enterRule(_localctx, 8, AslParser::RuleArray_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(71);
    match(AslParser::ARRAY);
    setState(72);
    match(AslParser::T__4);
    setState(73);
    match(AslParser::INTVAL);
    setState(74);
    match(AslParser::T__5);
    setState(75);
    match(AslParser::T__6);
    setState(76);
    basic_type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Variable_declContext ------------------------------------------------------------------

AslParser::Variable_declContext::Variable_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AslParser::Variable_declContext::VAR() {
  return getToken(AslParser::VAR, 0);
}

std::vector<tree::TerminalNode *> AslParser::Variable_declContext::ID() {
  return getTokens(AslParser::ID);
}

tree::TerminalNode* AslParser::Variable_declContext::ID(size_t i) {
  return getToken(AslParser::ID, i);
}

AslParser::TypeContext* AslParser::Variable_declContext::type() {
  return getRuleContext<AslParser::TypeContext>(0);
}


size_t AslParser::Variable_declContext::getRuleIndex() const {
  return AslParser::RuleVariable_decl;
}

antlrcpp::Any AslParser::Variable_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitVariable_decl(this);
  else
    return visitor->visitChildren(this);
}

AslParser::Variable_declContext* AslParser::variable_decl() {
  Variable_declContext *_localctx = _tracker.createInstance<Variable_declContext>(_ctx, getState());
  enterRule(_localctx, 10, AslParser::RuleVariable_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(78);
    match(AslParser::VAR);
    setState(79);
    match(AslParser::ID);
    setState(84);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == AslParser::T__3) {
      setState(80);
      match(AslParser::T__3);
      setState(81);
      match(AslParser::ID);
      setState(86);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(87);
    match(AslParser::T__2);
    setState(88);
    type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

AslParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AslParser::Basic_typeContext* AslParser::TypeContext::basic_type() {
  return getRuleContext<AslParser::Basic_typeContext>(0);
}

AslParser::Array_declContext* AslParser::TypeContext::array_decl() {
  return getRuleContext<AslParser::Array_declContext>(0);
}

AslParser::Pair_typeContext* AslParser::TypeContext::pair_type() {
  return getRuleContext<AslParser::Pair_typeContext>(0);
}


size_t AslParser::TypeContext::getRuleIndex() const {
  return AslParser::RuleType;
}

antlrcpp::Any AslParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

AslParser::TypeContext* AslParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 12, AslParser::RuleType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(93);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AslParser::INT:
      case AslParser::BOOL:
      case AslParser::FLOAT:
      case AslParser::CHAR: {
        enterOuterAlt(_localctx, 1);
        setState(90);
        basic_type();
        break;
      }

      case AslParser::ARRAY: {
        enterOuterAlt(_localctx, 2);
        setState(91);
        array_decl();
        break;
      }

      case AslParser::PAIR: {
        enterOuterAlt(_localctx, 3);
        setState(92);
        pair_type();
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

//----------------- Pair_typeContext ------------------------------------------------------------------

AslParser::Pair_typeContext::Pair_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AslParser::Pair_typeContext::PAIR() {
  return getToken(AslParser::PAIR, 0);
}

std::vector<AslParser::Basic_typeContext *> AslParser::Pair_typeContext::basic_type() {
  return getRuleContexts<AslParser::Basic_typeContext>();
}

AslParser::Basic_typeContext* AslParser::Pair_typeContext::basic_type(size_t i) {
  return getRuleContext<AslParser::Basic_typeContext>(i);
}

tree::TerminalNode* AslParser::Pair_typeContext::EDNPAIR() {
  return getToken(AslParser::EDNPAIR, 0);
}


size_t AslParser::Pair_typeContext::getRuleIndex() const {
  return AslParser::RulePair_type;
}

antlrcpp::Any AslParser::Pair_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitPair_type(this);
  else
    return visitor->visitChildren(this);
}

AslParser::Pair_typeContext* AslParser::pair_type() {
  Pair_typeContext *_localctx = _tracker.createInstance<Pair_typeContext>(_ctx, getState());
  enterRule(_localctx, 14, AslParser::RulePair_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(95);
    match(AslParser::PAIR);
    setState(96);
    basic_type();
    setState(97);
    match(AslParser::T__3);
    setState(98);
    basic_type();
    setState(99);
    match(AslParser::EDNPAIR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Basic_typeContext ------------------------------------------------------------------

AslParser::Basic_typeContext::Basic_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AslParser::Basic_typeContext::INT() {
  return getToken(AslParser::INT, 0);
}

tree::TerminalNode* AslParser::Basic_typeContext::BOOL() {
  return getToken(AslParser::BOOL, 0);
}

tree::TerminalNode* AslParser::Basic_typeContext::FLOAT() {
  return getToken(AslParser::FLOAT, 0);
}

tree::TerminalNode* AslParser::Basic_typeContext::CHAR() {
  return getToken(AslParser::CHAR, 0);
}


size_t AslParser::Basic_typeContext::getRuleIndex() const {
  return AslParser::RuleBasic_type;
}

antlrcpp::Any AslParser::Basic_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitBasic_type(this);
  else
    return visitor->visitChildren(this);
}

AslParser::Basic_typeContext* AslParser::basic_type() {
  Basic_typeContext *_localctx = _tracker.createInstance<Basic_typeContext>(_ctx, getState());
  enterRule(_localctx, 16, AslParser::RuleBasic_type);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(101);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << AslParser::INT)
      | (1ULL << AslParser::BOOL)
      | (1ULL << AslParser::FLOAT)
      | (1ULL << AslParser::CHAR))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementsContext ------------------------------------------------------------------

AslParser::StatementsContext::StatementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<AslParser::StatementContext *> AslParser::StatementsContext::statement() {
  return getRuleContexts<AslParser::StatementContext>();
}

AslParser::StatementContext* AslParser::StatementsContext::statement(size_t i) {
  return getRuleContext<AslParser::StatementContext>(i);
}


size_t AslParser::StatementsContext::getRuleIndex() const {
  return AslParser::RuleStatements;
}

antlrcpp::Any AslParser::StatementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitStatements(this);
  else
    return visitor->visitChildren(this);
}

AslParser::StatementsContext* AslParser::statements() {
  StatementsContext *_localctx = _tracker.createInstance<StatementsContext>(_ctx, getState());
  enterRule(_localctx, 18, AslParser::RuleStatements);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(106);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << AslParser::IF)
      | (1ULL << AslParser::WHILE)
      | (1ULL << AslParser::FOR)
      | (1ULL << AslParser::RET)
      | (1ULL << AslParser::READ)
      | (1ULL << AslParser::WRITE)
      | (1ULL << AslParser::ID))) != 0)) {
      setState(103);
      statement();
      setState(108);
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

//----------------- StatementContext ------------------------------------------------------------------

AslParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t AslParser::StatementContext::getRuleIndex() const {
  return AslParser::RuleStatement;
}

void AslParser::StatementContext::copyFrom(StatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- RetStmtContext ------------------------------------------------------------------

tree::TerminalNode* AslParser::RetStmtContext::RET() {
  return getToken(AslParser::RET, 0);
}

AslParser::ExprContext* AslParser::RetStmtContext::expr() {
  return getRuleContext<AslParser::ExprContext>(0);
}

AslParser::RetStmtContext::RetStmtContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any AslParser::RetStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitRetStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ForStmtContext ------------------------------------------------------------------

tree::TerminalNode* AslParser::ForStmtContext::FOR() {
  return getToken(AslParser::FOR, 0);
}

std::vector<AslParser::ExprContext *> AslParser::ForStmtContext::expr() {
  return getRuleContexts<AslParser::ExprContext>();
}

AslParser::ExprContext* AslParser::ForStmtContext::expr(size_t i) {
  return getRuleContext<AslParser::ExprContext>(i);
}

tree::TerminalNode* AslParser::ForStmtContext::INRANGE() {
  return getToken(AslParser::INRANGE, 0);
}

tree::TerminalNode* AslParser::ForStmtContext::DO() {
  return getToken(AslParser::DO, 0);
}

AslParser::StatementsContext* AslParser::ForStmtContext::statements() {
  return getRuleContext<AslParser::StatementsContext>(0);
}

tree::TerminalNode* AslParser::ForStmtContext::ENDFOR() {
  return getToken(AslParser::ENDFOR, 0);
}

AslParser::ForStmtContext::ForStmtContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any AslParser::ForStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitForStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ProcCallContext ------------------------------------------------------------------

AslParser::IdentContext* AslParser::ProcCallContext::ident() {
  return getRuleContext<AslParser::IdentContext>(0);
}

std::vector<AslParser::ExprContext *> AslParser::ProcCallContext::expr() {
  return getRuleContexts<AslParser::ExprContext>();
}

AslParser::ExprContext* AslParser::ProcCallContext::expr(size_t i) {
  return getRuleContext<AslParser::ExprContext>(i);
}

AslParser::ProcCallContext::ProcCallContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any AslParser::ProcCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitProcCall(this);
  else
    return visitor->visitChildren(this);
}
//----------------- WriteExprContext ------------------------------------------------------------------

tree::TerminalNode* AslParser::WriteExprContext::WRITE() {
  return getToken(AslParser::WRITE, 0);
}

AslParser::ExprContext* AslParser::WriteExprContext::expr() {
  return getRuleContext<AslParser::ExprContext>(0);
}

AslParser::WriteExprContext::WriteExprContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any AslParser::WriteExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitWriteExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- WhileStmtContext ------------------------------------------------------------------

tree::TerminalNode* AslParser::WhileStmtContext::WHILE() {
  return getToken(AslParser::WHILE, 0);
}

AslParser::ExprContext* AslParser::WhileStmtContext::expr() {
  return getRuleContext<AslParser::ExprContext>(0);
}

tree::TerminalNode* AslParser::WhileStmtContext::DO() {
  return getToken(AslParser::DO, 0);
}

AslParser::StatementsContext* AslParser::WhileStmtContext::statements() {
  return getRuleContext<AslParser::StatementsContext>(0);
}

tree::TerminalNode* AslParser::WhileStmtContext::ENDWHILE() {
  return getToken(AslParser::ENDWHILE, 0);
}

AslParser::WhileStmtContext::WhileStmtContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any AslParser::WhileStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitWhileStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfStmtContext ------------------------------------------------------------------

tree::TerminalNode* AslParser::IfStmtContext::IF() {
  return getToken(AslParser::IF, 0);
}

AslParser::ExprContext* AslParser::IfStmtContext::expr() {
  return getRuleContext<AslParser::ExprContext>(0);
}

tree::TerminalNode* AslParser::IfStmtContext::THEN() {
  return getToken(AslParser::THEN, 0);
}

AslParser::StatementsContext* AslParser::IfStmtContext::statements() {
  return getRuleContext<AslParser::StatementsContext>(0);
}

tree::TerminalNode* AslParser::IfStmtContext::ENDIF() {
  return getToken(AslParser::ENDIF, 0);
}

AslParser::ElseStatContext* AslParser::IfStmtContext::elseStat() {
  return getRuleContext<AslParser::ElseStatContext>(0);
}

AslParser::IfStmtContext::IfStmtContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any AslParser::IfStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitIfStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ReadStmtContext ------------------------------------------------------------------

tree::TerminalNode* AslParser::ReadStmtContext::READ() {
  return getToken(AslParser::READ, 0);
}

AslParser::Left_exprContext* AslParser::ReadStmtContext::left_expr() {
  return getRuleContext<AslParser::Left_exprContext>(0);
}

AslParser::ReadStmtContext::ReadStmtContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any AslParser::ReadStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitReadStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignStmtContext ------------------------------------------------------------------

AslParser::Left_exprContext* AslParser::AssignStmtContext::left_expr() {
  return getRuleContext<AslParser::Left_exprContext>(0);
}

tree::TerminalNode* AslParser::AssignStmtContext::ASSIGN() {
  return getToken(AslParser::ASSIGN, 0);
}

AslParser::ExprContext* AslParser::AssignStmtContext::expr() {
  return getRuleContext<AslParser::ExprContext>(0);
}

AslParser::AssignStmtContext::AssignStmtContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any AslParser::AssignStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitAssignStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- WriteStringContext ------------------------------------------------------------------

tree::TerminalNode* AslParser::WriteStringContext::WRITE() {
  return getToken(AslParser::WRITE, 0);
}

tree::TerminalNode* AslParser::WriteStringContext::STRING() {
  return getToken(AslParser::STRING, 0);
}

AslParser::WriteStringContext::WriteStringContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any AslParser::WriteStringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitWriteString(this);
  else
    return visitor->visitChildren(this);
}
AslParser::StatementContext* AslParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 20, AslParser::RuleStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(179);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<AslParser::AssignStmtContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(109);
      left_expr();
      setState(110);
      match(AslParser::ASSIGN);
      setState(111);
      expr(0);
      setState(112);
      match(AslParser::T__7);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<AslParser::IfStmtContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(114);
      match(AslParser::IF);
      setState(115);
      expr(0);
      setState(116);
      match(AslParser::THEN);
      setState(117);
      statements();
      setState(119);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AslParser::ELSE) {
        setState(118);
        elseStat();
      }
      setState(121);
      match(AslParser::ENDIF);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<AslParser::WhileStmtContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(123);
      match(AslParser::WHILE);
      setState(124);
      expr(0);
      setState(125);
      match(AslParser::DO);
      setState(126);
      statements();
      setState(127);
      match(AslParser::ENDWHILE);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<AslParser::ForStmtContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(129);
      match(AslParser::FOR);
      setState(130);
      expr(0);
      setState(131);
      match(AslParser::INRANGE);
      setState(132);
      match(AslParser::T__0);
      setState(141);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << AslParser::T__0)
        | (1ULL << AslParser::ADD)
        | (1ULL << AslParser::SUB)
        | (1ULL << AslParser::NOT)
        | (1ULL << AslParser::MAX)
        | (1ULL << AslParser::SUM)
        | (1ULL << AslParser::FILTER)
        | (1ULL << AslParser::INTVAL)
        | (1ULL << AslParser::BOOLVAL)
        | (1ULL << AslParser::FLOATVAL)
        | (1ULL << AslParser::CHARVAL)
        | (1ULL << AslParser::ID))) != 0)) {
        setState(133);
        expr(0);
        setState(138);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == AslParser::T__3) {
          setState(134);
          match(AslParser::T__3);
          setState(135);
          expr(0);
          setState(140);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(143);
      match(AslParser::T__1);
      setState(144);
      match(AslParser::DO);
      setState(145);
      statements();
      setState(146);
      match(AslParser::ENDFOR);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<AslParser::ProcCallContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(148);
      ident();
      setState(149);
      match(AslParser::T__0);
      setState(158);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << AslParser::T__0)
        | (1ULL << AslParser::ADD)
        | (1ULL << AslParser::SUB)
        | (1ULL << AslParser::NOT)
        | (1ULL << AslParser::MAX)
        | (1ULL << AslParser::SUM)
        | (1ULL << AslParser::FILTER)
        | (1ULL << AslParser::INTVAL)
        | (1ULL << AslParser::BOOLVAL)
        | (1ULL << AslParser::FLOATVAL)
        | (1ULL << AslParser::CHARVAL)
        | (1ULL << AslParser::ID))) != 0)) {
        setState(150);
        expr(0);
        setState(155);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == AslParser::T__3) {
          setState(151);
          match(AslParser::T__3);
          setState(152);
          expr(0);
          setState(157);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(160);
      match(AslParser::T__1);
      setState(161);
      match(AslParser::T__7);
      break;
    }

    case 6: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<AslParser::RetStmtContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(163);
      match(AslParser::RET);
      setState(165);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << AslParser::T__0)
        | (1ULL << AslParser::ADD)
        | (1ULL << AslParser::SUB)
        | (1ULL << AslParser::NOT)
        | (1ULL << AslParser::MAX)
        | (1ULL << AslParser::SUM)
        | (1ULL << AslParser::FILTER)
        | (1ULL << AslParser::INTVAL)
        | (1ULL << AslParser::BOOLVAL)
        | (1ULL << AslParser::FLOATVAL)
        | (1ULL << AslParser::CHARVAL)
        | (1ULL << AslParser::ID))) != 0)) {
        setState(164);
        expr(0);
      }
      setState(167);
      match(AslParser::T__7);
      break;
    }

    case 7: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<AslParser::ReadStmtContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(168);
      match(AslParser::READ);
      setState(169);
      left_expr();
      setState(170);
      match(AslParser::T__7);
      break;
    }

    case 8: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<AslParser::WriteExprContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(172);
      match(AslParser::WRITE);
      setState(173);
      expr(0);
      setState(174);
      match(AslParser::T__7);
      break;
    }

    case 9: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<AslParser::WriteStringContext>(_localctx));
      enterOuterAlt(_localctx, 9);
      setState(176);
      match(AslParser::WRITE);
      setState(177);
      match(AslParser::STRING);
      setState(178);
      match(AslParser::T__7);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Left_exprContext ------------------------------------------------------------------

AslParser::Left_exprContext::Left_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AslParser::IdentContext* AslParser::Left_exprContext::ident() {
  return getRuleContext<AslParser::IdentContext>(0);
}

tree::TerminalNode* AslParser::Left_exprContext::FIRST() {
  return getToken(AslParser::FIRST, 0);
}

tree::TerminalNode* AslParser::Left_exprContext::SECOND() {
  return getToken(AslParser::SECOND, 0);
}

AslParser::ExprContext* AslParser::Left_exprContext::expr() {
  return getRuleContext<AslParser::ExprContext>(0);
}


size_t AslParser::Left_exprContext::getRuleIndex() const {
  return AslParser::RuleLeft_expr;
}

antlrcpp::Any AslParser::Left_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitLeft_expr(this);
  else
    return visitor->visitChildren(this);
}

AslParser::Left_exprContext* AslParser::left_expr() {
  Left_exprContext *_localctx = _tracker.createInstance<Left_exprContext>(_ctx, getState());
  enterRule(_localctx, 22, AslParser::RuleLeft_expr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(181);
    ident();
    setState(188);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AslParser::T__4: {
        setState(182);
        match(AslParser::T__4);
        setState(183);
        expr(0);
        setState(184);
        match(AslParser::T__5);
        break;
      }

      case AslParser::T__8: {
        setState(186);
        match(AslParser::T__8);
        setState(187);
        _la = _input->LA(1);
        if (!(_la == AslParser::FIRST

        || _la == AslParser::SECOND)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case AslParser::T__7:
      case AslParser::ASSIGN: {
        break;
      }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseStatContext ------------------------------------------------------------------

AslParser::ElseStatContext::ElseStatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AslParser::ElseStatContext::ELSE() {
  return getToken(AslParser::ELSE, 0);
}

AslParser::StatementsContext* AslParser::ElseStatContext::statements() {
  return getRuleContext<AslParser::StatementsContext>(0);
}


size_t AslParser::ElseStatContext::getRuleIndex() const {
  return AslParser::RuleElseStat;
}

antlrcpp::Any AslParser::ElseStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitElseStat(this);
  else
    return visitor->visitChildren(this);
}

AslParser::ElseStatContext* AslParser::elseStat() {
  ElseStatContext *_localctx = _tracker.createInstance<ElseStatContext>(_ctx, getState());
  enterRule(_localctx, 24, AslParser::RuleElseStat);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(190);
    match(AslParser::ELSE);
    setState(191);
    statements();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

AslParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t AslParser::ExprContext::getRuleIndex() const {
  return AslParser::RuleExpr;
}

void AslParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- FunctionalContext ------------------------------------------------------------------

AslParser::IdentContext* AslParser::FunctionalContext::ident() {
  return getRuleContext<AslParser::IdentContext>(0);
}

std::vector<AslParser::ExprContext *> AslParser::FunctionalContext::expr() {
  return getRuleContexts<AslParser::ExprContext>();
}

AslParser::ExprContext* AslParser::FunctionalContext::expr(size_t i) {
  return getRuleContext<AslParser::ExprContext>(i);
}

AslParser::FunctionalContext::FunctionalContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any AslParser::FunctionalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitFunctional(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArithmeticContext ------------------------------------------------------------------

std::vector<AslParser::ExprContext *> AslParser::ArithmeticContext::expr() {
  return getRuleContexts<AslParser::ExprContext>();
}

AslParser::ExprContext* AslParser::ArithmeticContext::expr(size_t i) {
  return getRuleContext<AslParser::ExprContext>(i);
}

tree::TerminalNode* AslParser::ArithmeticContext::MUL() {
  return getToken(AslParser::MUL, 0);
}

tree::TerminalNode* AslParser::ArithmeticContext::DIV() {
  return getToken(AslParser::DIV, 0);
}

tree::TerminalNode* AslParser::ArithmeticContext::MOD() {
  return getToken(AslParser::MOD, 0);
}

tree::TerminalNode* AslParser::ArithmeticContext::ADD() {
  return getToken(AslParser::ADD, 0);
}

tree::TerminalNode* AslParser::ArithmeticContext::SUB() {
  return getToken(AslParser::SUB, 0);
}

AslParser::ArithmeticContext::ArithmeticContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any AslParser::ArithmeticContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitArithmetic(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IndexerContext ------------------------------------------------------------------

AslParser::IdentContext* AslParser::IndexerContext::ident() {
  return getRuleContext<AslParser::IdentContext>(0);
}

AslParser::ExprContext* AslParser::IndexerContext::expr() {
  return getRuleContext<AslParser::ExprContext>(0);
}

AslParser::IndexerContext::IndexerContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any AslParser::IndexerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitIndexer(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnaryContext ------------------------------------------------------------------

AslParser::ExprContext* AslParser::UnaryContext::expr() {
  return getRuleContext<AslParser::ExprContext>(0);
}

tree::TerminalNode* AslParser::UnaryContext::NOT() {
  return getToken(AslParser::NOT, 0);
}

tree::TerminalNode* AslParser::UnaryContext::ADD() {
  return getToken(AslParser::ADD, 0);
}

tree::TerminalNode* AslParser::UnaryContext::SUB() {
  return getToken(AslParser::SUB, 0);
}

AslParser::UnaryContext::UnaryContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any AslParser::UnaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitUnary(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenthesisContext ------------------------------------------------------------------

AslParser::ExprContext* AslParser::ParenthesisContext::expr() {
  return getRuleContext<AslParser::ExprContext>(0);
}

AslParser::ParenthesisContext::ParenthesisContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any AslParser::ParenthesisContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitParenthesis(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicalContext ------------------------------------------------------------------

std::vector<AslParser::ExprContext *> AslParser::LogicalContext::expr() {
  return getRuleContexts<AslParser::ExprContext>();
}

AslParser::ExprContext* AslParser::LogicalContext::expr(size_t i) {
  return getRuleContext<AslParser::ExprContext>(i);
}

tree::TerminalNode* AslParser::LogicalContext::AND() {
  return getToken(AslParser::AND, 0);
}

tree::TerminalNode* AslParser::LogicalContext::OR() {
  return getToken(AslParser::OR, 0);
}

AslParser::LogicalContext::LogicalContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any AslParser::LogicalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitLogical(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FilterContext ------------------------------------------------------------------

tree::TerminalNode* AslParser::FilterContext::FILTER() {
  return getToken(AslParser::FILTER, 0);
}

std::vector<AslParser::ExprContext *> AslParser::FilterContext::expr() {
  return getRuleContexts<AslParser::ExprContext>();
}

AslParser::ExprContext* AslParser::FilterContext::expr(size_t i) {
  return getRuleContext<AslParser::ExprContext>(i);
}

tree::TerminalNode* AslParser::FilterContext::INTO() {
  return getToken(AslParser::INTO, 0);
}

tree::TerminalNode* AslParser::FilterContext::USING() {
  return getToken(AslParser::USING, 0);
}

AslParser::FilterContext::FilterContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any AslParser::FilterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitFilter(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SumExprContext ------------------------------------------------------------------

tree::TerminalNode* AslParser::SumExprContext::SUM() {
  return getToken(AslParser::SUM, 0);
}

std::vector<AslParser::ExprContext *> AslParser::SumExprContext::expr() {
  return getRuleContexts<AslParser::ExprContext>();
}

AslParser::ExprContext* AslParser::SumExprContext::expr(size_t i) {
  return getRuleContext<AslParser::ExprContext>(i);
}

AslParser::SumExprContext::SumExprContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any AslParser::SumExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitSumExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MaximumContext ------------------------------------------------------------------

tree::TerminalNode* AslParser::MaximumContext::MAX() {
  return getToken(AslParser::MAX, 0);
}

std::vector<AslParser::ExprContext *> AslParser::MaximumContext::expr() {
  return getRuleContexts<AslParser::ExprContext>();
}

AslParser::ExprContext* AslParser::MaximumContext::expr(size_t i) {
  return getRuleContext<AslParser::ExprContext>(i);
}

AslParser::MaximumContext::MaximumContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any AslParser::MaximumContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitMaximum(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprIdentContext ------------------------------------------------------------------

AslParser::IdentContext* AslParser::ExprIdentContext::ident() {
  return getRuleContext<AslParser::IdentContext>(0);
}

AslParser::ExprIdentContext::ExprIdentContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any AslParser::ExprIdentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitExprIdent(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RelationalContext ------------------------------------------------------------------

std::vector<AslParser::ExprContext *> AslParser::RelationalContext::expr() {
  return getRuleContexts<AslParser::ExprContext>();
}

AslParser::ExprContext* AslParser::RelationalContext::expr(size_t i) {
  return getRuleContext<AslParser::ExprContext>(i);
}

tree::TerminalNode* AslParser::RelationalContext::SEQ() {
  return getToken(AslParser::SEQ, 0);
}

tree::TerminalNode* AslParser::RelationalContext::SNEQ() {
  return getToken(AslParser::SNEQ, 0);
}

tree::TerminalNode* AslParser::RelationalContext::SGT() {
  return getToken(AslParser::SGT, 0);
}

tree::TerminalNode* AslParser::RelationalContext::SGE() {
  return getToken(AslParser::SGE, 0);
}

tree::TerminalNode* AslParser::RelationalContext::SLE() {
  return getToken(AslParser::SLE, 0);
}

tree::TerminalNode* AslParser::RelationalContext::SLT() {
  return getToken(AslParser::SLT, 0);
}

AslParser::RelationalContext::RelationalContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any AslParser::RelationalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitRelational(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PairExprContext ------------------------------------------------------------------

AslParser::IdentContext* AslParser::PairExprContext::ident() {
  return getRuleContext<AslParser::IdentContext>(0);
}

tree::TerminalNode* AslParser::PairExprContext::FIRST() {
  return getToken(AslParser::FIRST, 0);
}

tree::TerminalNode* AslParser::PairExprContext::SECOND() {
  return getToken(AslParser::SECOND, 0);
}

AslParser::PairExprContext::PairExprContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any AslParser::PairExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitPairExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ValueContext ------------------------------------------------------------------

tree::TerminalNode* AslParser::ValueContext::INTVAL() {
  return getToken(AslParser::INTVAL, 0);
}

tree::TerminalNode* AslParser::ValueContext::BOOLVAL() {
  return getToken(AslParser::BOOLVAL, 0);
}

tree::TerminalNode* AslParser::ValueContext::FLOATVAL() {
  return getToken(AslParser::FLOATVAL, 0);
}

tree::TerminalNode* AslParser::ValueContext::CHARVAL() {
  return getToken(AslParser::CHARVAL, 0);
}

AslParser::ValueContext::ValueContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any AslParser::ValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitValue(this);
  else
    return visitor->visitChildren(this);
}

AslParser::ExprContext* AslParser::expr() {
   return expr(0);
}

AslParser::ExprContext* AslParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  AslParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  AslParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 26;
  enterRecursionRule(_localctx, 26, AslParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(258);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<FilterContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(194);
      match(AslParser::FILTER);
      setState(195);
      expr(0);
      setState(196);
      match(AslParser::INTO);
      setState(197);
      expr(0);
      setState(198);
      match(AslParser::USING);
      setState(199);
      expr(15);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<ParenthesisContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(201);
      match(AslParser::T__0);
      setState(202);
      expr(0);
      setState(203);
      match(AslParser::T__1);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<IndexerContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(205);
      ident();
      setState(206);
      match(AslParser::T__4);
      setState(207);
      expr(0);
      setState(208);
      match(AslParser::T__5);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<PairExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(210);
      ident();
      setState(211);
      match(AslParser::T__8);
      setState(212);
      _la = _input->LA(1);
      if (!(_la == AslParser::FIRST

      || _la == AslParser::SECOND)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<FunctionalContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(214);
      ident();
      setState(215);
      match(AslParser::T__0);
      setState(224);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << AslParser::T__0)
        | (1ULL << AslParser::ADD)
        | (1ULL << AslParser::SUB)
        | (1ULL << AslParser::NOT)
        | (1ULL << AslParser::MAX)
        | (1ULL << AslParser::SUM)
        | (1ULL << AslParser::FILTER)
        | (1ULL << AslParser::INTVAL)
        | (1ULL << AslParser::BOOLVAL)
        | (1ULL << AslParser::FLOATVAL)
        | (1ULL << AslParser::CHARVAL)
        | (1ULL << AslParser::ID))) != 0)) {
        setState(216);
        expr(0);
        setState(221);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == AslParser::T__3) {
          setState(217);
          match(AslParser::T__3);
          setState(218);
          expr(0);
          setState(223);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(226);
      match(AslParser::T__1);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<UnaryContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(228);
      dynamic_cast<UnaryContext *>(_localctx)->op = _input->LT(1);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << AslParser::ADD)
        | (1ULL << AslParser::SUB)
        | (1ULL << AslParser::NOT))) != 0))) {
        dynamic_cast<UnaryContext *>(_localctx)->op = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(229);
      expr(10);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<SumExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(230);
      match(AslParser::SUM);
      setState(231);
      match(AslParser::T__0);
      setState(240);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << AslParser::T__0)
        | (1ULL << AslParser::ADD)
        | (1ULL << AslParser::SUB)
        | (1ULL << AslParser::NOT)
        | (1ULL << AslParser::MAX)
        | (1ULL << AslParser::SUM)
        | (1ULL << AslParser::FILTER)
        | (1ULL << AslParser::INTVAL)
        | (1ULL << AslParser::BOOLVAL)
        | (1ULL << AslParser::FLOATVAL)
        | (1ULL << AslParser::CHARVAL)
        | (1ULL << AslParser::ID))) != 0)) {
        setState(232);
        expr(0);
        setState(237);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == AslParser::T__3) {
          setState(233);
          match(AslParser::T__3);
          setState(234);
          expr(0);
          setState(239);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(242);
      match(AslParser::T__1);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<MaximumContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(243);
      match(AslParser::MAX);
      setState(244);
      match(AslParser::T__0);
      setState(253);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << AslParser::T__0)
        | (1ULL << AslParser::ADD)
        | (1ULL << AslParser::SUB)
        | (1ULL << AslParser::NOT)
        | (1ULL << AslParser::MAX)
        | (1ULL << AslParser::SUM)
        | (1ULL << AslParser::FILTER)
        | (1ULL << AslParser::INTVAL)
        | (1ULL << AslParser::BOOLVAL)
        | (1ULL << AslParser::FLOATVAL)
        | (1ULL << AslParser::CHARVAL)
        | (1ULL << AslParser::ID))) != 0)) {
        setState(245);
        expr(0);
        setState(250);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == AslParser::T__3) {
          setState(246);
          match(AslParser::T__3);
          setState(247);
          expr(0);
          setState(252);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(255);
      match(AslParser::T__1);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<ValueContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(256);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << AslParser::INTVAL)
        | (1ULL << AslParser::BOOLVAL)
        | (1ULL << AslParser::FLOATVAL)
        | (1ULL << AslParser::CHARVAL))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<ExprIdentContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(257);
      ident();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(277);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(275);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ArithmeticContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(260);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(261);
          dynamic_cast<ArithmeticContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << AslParser::MUL)
            | (1ULL << AslParser::DIV)
            | (1ULL << AslParser::MOD))) != 0))) {
            dynamic_cast<ArithmeticContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(262);
          expr(10);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ArithmeticContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(263);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(264);
          dynamic_cast<ArithmeticContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == AslParser::ADD

          || _la == AslParser::SUB)) {
            dynamic_cast<ArithmeticContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(265);
          expr(9);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<RelationalContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(266);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(267);
          dynamic_cast<RelationalContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << AslParser::SEQ)
            | (1ULL << AslParser::SNEQ)
            | (1ULL << AslParser::SGT)
            | (1ULL << AslParser::SGE)
            | (1ULL << AslParser::SLE)
            | (1ULL << AslParser::SLT))) != 0))) {
            dynamic_cast<RelationalContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(268);
          expr(8);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<LogicalContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(269);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(270);
          dynamic_cast<LogicalContext *>(_localctx)->op = match(AslParser::AND);
          setState(271);
          expr(7);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<LogicalContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(272);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(273);
          dynamic_cast<LogicalContext *>(_localctx)->op = match(AslParser::OR);
          setState(274);
          expr(6);
          break;
        }

        } 
      }
      setState(279);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- IdentContext ------------------------------------------------------------------

AslParser::IdentContext::IdentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AslParser::IdentContext::ID() {
  return getToken(AslParser::ID, 0);
}


size_t AslParser::IdentContext::getRuleIndex() const {
  return AslParser::RuleIdent;
}

antlrcpp::Any AslParser::IdentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitIdent(this);
  else
    return visitor->visitChildren(this);
}

AslParser::IdentContext* AslParser::ident() {
  IdentContext *_localctx = _tracker.createInstance<IdentContext>(_ctx, getState());
  enterRule(_localctx, 28, AslParser::RuleIdent);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(280);
    match(AslParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool AslParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 13: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool AslParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 9);
    case 1: return precpred(_ctx, 8);
    case 2: return precpred(_ctx, 7);
    case 3: return precpred(_ctx, 6);
    case 4: return precpred(_ctx, 5);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> AslParser::_decisionToDFA;
atn::PredictionContextCache AslParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN AslParser::_atn;
std::vector<uint16_t> AslParser::_serializedATN;

std::vector<std::string> AslParser::_ruleNames = {
  "program", "function", "parameters", "declarations", "array_decl", "variable_decl", 
  "type", "pair_type", "basic_type", "statements", "statement", "left_expr", 
  "elseStat", "expr", "ident"
};

std::vector<std::string> AslParser::_literalNames = {
  "", "'('", "')'", "':'", "','", "'['", "']'", "'of'", "';'", "'.'", "'='", 
  "'+'", "'-'", "'*'", "'/'", "'%'", "'=='", "'!='", "'>'", "'>='", "'<='", 
  "'<'", "'and'", "'not'", "'or'", "'var'", "'int'", "'bool'", "'float'", 
  "'char'", "'array'", "'pair'", "'endpair'", "'if'", "'then'", "'else'", 
  "'endif'", "'while'", "'do'", "'endwhile'", "'for'", "'in range'", "'endfor'", 
  "'func'", "'endfunc'", "'return'", "'read'", "'write'", "'max'", "'sum'", 
  "'filter'", "'into'", "'using'", "'first'", "'second'"
};

std::vector<std::string> AslParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "ASSIGN", "ADD", "SUB", "MUL", 
  "DIV", "MOD", "SEQ", "SNEQ", "SGT", "SGE", "SLE", "SLT", "AND", "NOT", 
  "OR", "VAR", "INT", "BOOL", "FLOAT", "CHAR", "ARRAY", "PAIR", "EDNPAIR", 
  "IF", "THEN", "ELSE", "ENDIF", "WHILE", "DO", "ENDWHILE", "FOR", "INRANGE", 
  "ENDFOR", "FUNC", "ENDFUNC", "RET", "READ", "WRITE", "MAX", "SUM", "FILTER", 
  "INTO", "USING", "FIRST", "SECOND", "INTVAL", "BOOLVAL", "FLOATVAL", "CHARVAL", 
  "ID", "STRING", "COMMENT", "WS"
};

dfa::Vocabulary AslParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> AslParser::_tokenNames;

AslParser::Initializer::Initializer() {
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
    0x3, 0x40, 0x11d, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x3, 0x2, 0x6, 0x2, 0x22, 
    0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x23, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x2f, 
    0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 
    0x3d, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x40, 0xb, 0x4, 0x5, 0x4, 0x42, 
    0xa, 0x4, 0x3, 0x5, 0x7, 0x5, 0x45, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x48, 
    0xb, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x55, 0xa, 
    0x7, 0xc, 0x7, 0xe, 0x7, 0x58, 0xb, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x60, 0xa, 0x8, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xb, 0x7, 0xb, 0x6b, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x6e, 0xb, 0xb, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x7a, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 
    0x8b, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x8e, 0xb, 0xc, 0x5, 0xc, 0x90, 
    0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x9c, 0xa, 0xc, 0xc, 
    0xc, 0xe, 0xc, 0x9f, 0xb, 0xc, 0x5, 0xc, 0xa1, 0xa, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0xa8, 0xa, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0xb6, 0xa, 0xc, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 
    0xd, 0xbf, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0xde, 0xa, 0xf, 0xc, 0xf, 0xe, 
    0xf, 0xe1, 0xb, 0xf, 0x5, 0xf, 0xe3, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 
    0xf, 0xee, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0xf1, 0xb, 0xf, 0x5, 0xf, 0xf3, 
    0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x7, 0xf, 0xfb, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0xfe, 0xb, 0xf, 0x5, 0xf, 
    0x100, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x105, 0xa, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x7, 0xf, 0x116, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x119, 
    0xb, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x2, 0x3, 0x1c, 0x11, 0x2, 
    0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 
    0x1e, 0x2, 0x9, 0x3, 0x2, 0x1c, 0x1f, 0x3, 0x2, 0x37, 0x38, 0x4, 0x2, 
    0xd, 0xe, 0x19, 0x19, 0x3, 0x2, 0x39, 0x3c, 0x3, 0x2, 0xf, 0x11, 0x3, 
    0x2, 0xd, 0xe, 0x3, 0x2, 0x12, 0x17, 0x2, 0x13a, 0x2, 0x21, 0x3, 0x2, 
    0x2, 0x2, 0x4, 0x27, 0x3, 0x2, 0x2, 0x2, 0x6, 0x41, 0x3, 0x2, 0x2, 0x2, 
    0x8, 0x46, 0x3, 0x2, 0x2, 0x2, 0xa, 0x49, 0x3, 0x2, 0x2, 0x2, 0xc, 0x50, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x10, 0x61, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x67, 0x3, 0x2, 0x2, 0x2, 0x14, 0x6c, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0xb5, 0x3, 0x2, 0x2, 0x2, 0x18, 0xb7, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0xc0, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x104, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x20, 0x22, 0x5, 0x4, 0x3, 0x2, 0x21, 
    0x20, 0x3, 0x2, 0x2, 0x2, 0x22, 0x23, 0x3, 0x2, 0x2, 0x2, 0x23, 0x21, 
    0x3, 0x2, 0x2, 0x2, 0x23, 0x24, 0x3, 0x2, 0x2, 0x2, 0x24, 0x25, 0x3, 
    0x2, 0x2, 0x2, 0x25, 0x26, 0x7, 0x2, 0x2, 0x3, 0x26, 0x3, 0x3, 0x2, 
    0x2, 0x2, 0x27, 0x28, 0x7, 0x2d, 0x2, 0x2, 0x28, 0x29, 0x7, 0x3d, 0x2, 
    0x2, 0x29, 0x2a, 0x7, 0x3, 0x2, 0x2, 0x2a, 0x2b, 0x5, 0x6, 0x4, 0x2, 
    0x2b, 0x2e, 0x7, 0x4, 0x2, 0x2, 0x2c, 0x2d, 0x7, 0x5, 0x2, 0x2, 0x2d, 
    0x2f, 0x5, 0x12, 0xa, 0x2, 0x2e, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2f, 
    0x3, 0x2, 0x2, 0x2, 0x2f, 0x30, 0x3, 0x2, 0x2, 0x2, 0x30, 0x31, 0x5, 
    0x8, 0x5, 0x2, 0x31, 0x32, 0x5, 0x14, 0xb, 0x2, 0x32, 0x33, 0x7, 0x2e, 
    0x2, 0x2, 0x33, 0x5, 0x3, 0x2, 0x2, 0x2, 0x34, 0x42, 0x3, 0x2, 0x2, 
    0x2, 0x35, 0x36, 0x7, 0x3d, 0x2, 0x2, 0x36, 0x37, 0x7, 0x5, 0x2, 0x2, 
    0x37, 0x3e, 0x5, 0xe, 0x8, 0x2, 0x38, 0x39, 0x7, 0x6, 0x2, 0x2, 0x39, 
    0x3a, 0x7, 0x3d, 0x2, 0x2, 0x3a, 0x3b, 0x7, 0x5, 0x2, 0x2, 0x3b, 0x3d, 
    0x5, 0xe, 0x8, 0x2, 0x3c, 0x38, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x40, 0x3, 
    0x2, 0x2, 0x2, 0x3e, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3f, 0x3, 0x2, 
    0x2, 0x2, 0x3f, 0x42, 0x3, 0x2, 0x2, 0x2, 0x40, 0x3e, 0x3, 0x2, 0x2, 
    0x2, 0x41, 0x34, 0x3, 0x2, 0x2, 0x2, 0x41, 0x35, 0x3, 0x2, 0x2, 0x2, 
    0x42, 0x7, 0x3, 0x2, 0x2, 0x2, 0x43, 0x45, 0x5, 0xc, 0x7, 0x2, 0x44, 
    0x43, 0x3, 0x2, 0x2, 0x2, 0x45, 0x48, 0x3, 0x2, 0x2, 0x2, 0x46, 0x44, 
    0x3, 0x2, 0x2, 0x2, 0x46, 0x47, 0x3, 0x2, 0x2, 0x2, 0x47, 0x9, 0x3, 
    0x2, 0x2, 0x2, 0x48, 0x46, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4a, 0x7, 0x20, 
    0x2, 0x2, 0x4a, 0x4b, 0x7, 0x7, 0x2, 0x2, 0x4b, 0x4c, 0x7, 0x39, 0x2, 
    0x2, 0x4c, 0x4d, 0x7, 0x8, 0x2, 0x2, 0x4d, 0x4e, 0x7, 0x9, 0x2, 0x2, 
    0x4e, 0x4f, 0x5, 0x12, 0xa, 0x2, 0x4f, 0xb, 0x3, 0x2, 0x2, 0x2, 0x50, 
    0x51, 0x7, 0x1b, 0x2, 0x2, 0x51, 0x56, 0x7, 0x3d, 0x2, 0x2, 0x52, 0x53, 
    0x7, 0x6, 0x2, 0x2, 0x53, 0x55, 0x7, 0x3d, 0x2, 0x2, 0x54, 0x52, 0x3, 
    0x2, 0x2, 0x2, 0x55, 0x58, 0x3, 0x2, 0x2, 0x2, 0x56, 0x54, 0x3, 0x2, 
    0x2, 0x2, 0x56, 0x57, 0x3, 0x2, 0x2, 0x2, 0x57, 0x59, 0x3, 0x2, 0x2, 
    0x2, 0x58, 0x56, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5a, 0x7, 0x5, 0x2, 0x2, 
    0x5a, 0x5b, 0x5, 0xe, 0x8, 0x2, 0x5b, 0xd, 0x3, 0x2, 0x2, 0x2, 0x5c, 
    0x60, 0x5, 0x12, 0xa, 0x2, 0x5d, 0x60, 0x5, 0xa, 0x6, 0x2, 0x5e, 0x60, 
    0x5, 0x10, 0x9, 0x2, 0x5f, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x5d, 0x3, 
    0x2, 0x2, 0x2, 0x5f, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x60, 0xf, 0x3, 0x2, 
    0x2, 0x2, 0x61, 0x62, 0x7, 0x21, 0x2, 0x2, 0x62, 0x63, 0x5, 0x12, 0xa, 
    0x2, 0x63, 0x64, 0x7, 0x6, 0x2, 0x2, 0x64, 0x65, 0x5, 0x12, 0xa, 0x2, 
    0x65, 0x66, 0x7, 0x22, 0x2, 0x2, 0x66, 0x11, 0x3, 0x2, 0x2, 0x2, 0x67, 
    0x68, 0x9, 0x2, 0x2, 0x2, 0x68, 0x13, 0x3, 0x2, 0x2, 0x2, 0x69, 0x6b, 
    0x5, 0x16, 0xc, 0x2, 0x6a, 0x69, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6e, 0x3, 
    0x2, 0x2, 0x2, 0x6c, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6d, 0x3, 0x2, 
    0x2, 0x2, 0x6d, 0x15, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6c, 0x3, 0x2, 0x2, 
    0x2, 0x6f, 0x70, 0x5, 0x18, 0xd, 0x2, 0x70, 0x71, 0x7, 0xc, 0x2, 0x2, 
    0x71, 0x72, 0x5, 0x1c, 0xf, 0x2, 0x72, 0x73, 0x7, 0xa, 0x2, 0x2, 0x73, 
    0xb6, 0x3, 0x2, 0x2, 0x2, 0x74, 0x75, 0x7, 0x23, 0x2, 0x2, 0x75, 0x76, 
    0x5, 0x1c, 0xf, 0x2, 0x76, 0x77, 0x7, 0x24, 0x2, 0x2, 0x77, 0x79, 0x5, 
    0x14, 0xb, 0x2, 0x78, 0x7a, 0x5, 0x1a, 0xe, 0x2, 0x79, 0x78, 0x3, 0x2, 
    0x2, 0x2, 0x79, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 0x3, 0x2, 0x2, 
    0x2, 0x7b, 0x7c, 0x7, 0x26, 0x2, 0x2, 0x7c, 0xb6, 0x3, 0x2, 0x2, 0x2, 
    0x7d, 0x7e, 0x7, 0x27, 0x2, 0x2, 0x7e, 0x7f, 0x5, 0x1c, 0xf, 0x2, 0x7f, 
    0x80, 0x7, 0x28, 0x2, 0x2, 0x80, 0x81, 0x5, 0x14, 0xb, 0x2, 0x81, 0x82, 
    0x7, 0x29, 0x2, 0x2, 0x82, 0xb6, 0x3, 0x2, 0x2, 0x2, 0x83, 0x84, 0x7, 
    0x2a, 0x2, 0x2, 0x84, 0x85, 0x5, 0x1c, 0xf, 0x2, 0x85, 0x86, 0x7, 0x2b, 
    0x2, 0x2, 0x86, 0x8f, 0x7, 0x3, 0x2, 0x2, 0x87, 0x8c, 0x5, 0x1c, 0xf, 
    0x2, 0x88, 0x89, 0x7, 0x6, 0x2, 0x2, 0x89, 0x8b, 0x5, 0x1c, 0xf, 0x2, 
    0x8a, 0x88, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x8c, 
    0x8a, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x90, 
    0x3, 0x2, 0x2, 0x2, 0x8e, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x87, 0x3, 
    0x2, 0x2, 0x2, 0x8f, 0x90, 0x3, 0x2, 0x2, 0x2, 0x90, 0x91, 0x3, 0x2, 
    0x2, 0x2, 0x91, 0x92, 0x7, 0x4, 0x2, 0x2, 0x92, 0x93, 0x7, 0x28, 0x2, 
    0x2, 0x93, 0x94, 0x5, 0x14, 0xb, 0x2, 0x94, 0x95, 0x7, 0x2c, 0x2, 0x2, 
    0x95, 0xb6, 0x3, 0x2, 0x2, 0x2, 0x96, 0x97, 0x5, 0x1e, 0x10, 0x2, 0x97, 
    0xa0, 0x7, 0x3, 0x2, 0x2, 0x98, 0x9d, 0x5, 0x1c, 0xf, 0x2, 0x99, 0x9a, 
    0x7, 0x6, 0x2, 0x2, 0x9a, 0x9c, 0x5, 0x1c, 0xf, 0x2, 0x9b, 0x99, 0x3, 
    0x2, 0x2, 0x2, 0x9c, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9b, 0x3, 0x2, 
    0x2, 0x2, 0x9d, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x9e, 0xa1, 0x3, 0x2, 0x2, 
    0x2, 0x9f, 0x9d, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x98, 0x3, 0x2, 0x2, 0x2, 
    0xa0, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa2, 
    0xa3, 0x7, 0x4, 0x2, 0x2, 0xa3, 0xa4, 0x7, 0xa, 0x2, 0x2, 0xa4, 0xb6, 
    0x3, 0x2, 0x2, 0x2, 0xa5, 0xa7, 0x7, 0x2f, 0x2, 0x2, 0xa6, 0xa8, 0x5, 
    0x1c, 0xf, 0x2, 0xa7, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa8, 0x3, 0x2, 
    0x2, 0x2, 0xa8, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xb6, 0x7, 0xa, 0x2, 
    0x2, 0xaa, 0xab, 0x7, 0x30, 0x2, 0x2, 0xab, 0xac, 0x5, 0x18, 0xd, 0x2, 
    0xac, 0xad, 0x7, 0xa, 0x2, 0x2, 0xad, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xae, 
    0xaf, 0x7, 0x31, 0x2, 0x2, 0xaf, 0xb0, 0x5, 0x1c, 0xf, 0x2, 0xb0, 0xb1, 
    0x7, 0xa, 0x2, 0x2, 0xb1, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb3, 0x7, 
    0x31, 0x2, 0x2, 0xb3, 0xb4, 0x7, 0x3e, 0x2, 0x2, 0xb4, 0xb6, 0x7, 0xa, 
    0x2, 0x2, 0xb5, 0x6f, 0x3, 0x2, 0x2, 0x2, 0xb5, 0x74, 0x3, 0x2, 0x2, 
    0x2, 0xb5, 0x7d, 0x3, 0x2, 0x2, 0x2, 0xb5, 0x83, 0x3, 0x2, 0x2, 0x2, 
    0xb5, 0x96, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xb5, 
    0xaa, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xae, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb2, 
    0x3, 0x2, 0x2, 0x2, 0xb6, 0x17, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xbe, 0x5, 
    0x1e, 0x10, 0x2, 0xb8, 0xb9, 0x7, 0x7, 0x2, 0x2, 0xb9, 0xba, 0x5, 0x1c, 
    0xf, 0x2, 0xba, 0xbb, 0x7, 0x8, 0x2, 0x2, 0xbb, 0xbf, 0x3, 0x2, 0x2, 
    0x2, 0xbc, 0xbd, 0x7, 0xb, 0x2, 0x2, 0xbd, 0xbf, 0x9, 0x3, 0x2, 0x2, 
    0xbe, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbe, 
    0xbf, 0x3, 0x2, 0x2, 0x2, 0xbf, 0x19, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc1, 
    0x7, 0x25, 0x2, 0x2, 0xc1, 0xc2, 0x5, 0x14, 0xb, 0x2, 0xc2, 0x1b, 0x3, 
    0x2, 0x2, 0x2, 0xc3, 0xc4, 0x8, 0xf, 0x1, 0x2, 0xc4, 0xc5, 0x7, 0x34, 
    0x2, 0x2, 0xc5, 0xc6, 0x5, 0x1c, 0xf, 0x2, 0xc6, 0xc7, 0x7, 0x35, 0x2, 
    0x2, 0xc7, 0xc8, 0x5, 0x1c, 0xf, 0x2, 0xc8, 0xc9, 0x7, 0x36, 0x2, 0x2, 
    0xc9, 0xca, 0x5, 0x1c, 0xf, 0x11, 0xca, 0x105, 0x3, 0x2, 0x2, 0x2, 0xcb, 
    0xcc, 0x7, 0x3, 0x2, 0x2, 0xcc, 0xcd, 0x5, 0x1c, 0xf, 0x2, 0xcd, 0xce, 
    0x7, 0x4, 0x2, 0x2, 0xce, 0x105, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd0, 0x5, 
    0x1e, 0x10, 0x2, 0xd0, 0xd1, 0x7, 0x7, 0x2, 0x2, 0xd1, 0xd2, 0x5, 0x1c, 
    0xf, 0x2, 0xd2, 0xd3, 0x7, 0x8, 0x2, 0x2, 0xd3, 0x105, 0x3, 0x2, 0x2, 
    0x2, 0xd4, 0xd5, 0x5, 0x1e, 0x10, 0x2, 0xd5, 0xd6, 0x7, 0xb, 0x2, 0x2, 
    0xd6, 0xd7, 0x9, 0x3, 0x2, 0x2, 0xd7, 0x105, 0x3, 0x2, 0x2, 0x2, 0xd8, 
    0xd9, 0x5, 0x1e, 0x10, 0x2, 0xd9, 0xe2, 0x7, 0x3, 0x2, 0x2, 0xda, 0xdf, 
    0x5, 0x1c, 0xf, 0x2, 0xdb, 0xdc, 0x7, 0x6, 0x2, 0x2, 0xdc, 0xde, 0x5, 
    0x1c, 0xf, 0x2, 0xdd, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xde, 0xe1, 0x3, 0x2, 
    0x2, 0x2, 0xdf, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe0, 0x3, 0x2, 0x2, 
    0x2, 0xe0, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xdf, 0x3, 0x2, 0x2, 0x2, 
    0xe2, 0xda, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe3, 
    0xe4, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe5, 0x7, 0x4, 0x2, 0x2, 0xe5, 0x105, 
    0x3, 0x2, 0x2, 0x2, 0xe6, 0xe7, 0x9, 0x4, 0x2, 0x2, 0xe7, 0x105, 0x5, 
    0x1c, 0xf, 0xc, 0xe8, 0xe9, 0x7, 0x33, 0x2, 0x2, 0xe9, 0xf2, 0x7, 0x3, 
    0x2, 0x2, 0xea, 0xef, 0x5, 0x1c, 0xf, 0x2, 0xeb, 0xec, 0x7, 0x6, 0x2, 
    0x2, 0xec, 0xee, 0x5, 0x1c, 0xf, 0x2, 0xed, 0xeb, 0x3, 0x2, 0x2, 0x2, 
    0xee, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xef, 0xed, 0x3, 0x2, 0x2, 0x2, 0xef, 
    0xf0, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xef, 
    0x3, 0x2, 0x2, 0x2, 0xf2, 0xea, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf3, 0x3, 
    0x2, 0x2, 0x2, 0xf3, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf4, 0x105, 0x7, 0x4, 
    0x2, 0x2, 0xf5, 0xf6, 0x7, 0x32, 0x2, 0x2, 0xf6, 0xff, 0x7, 0x3, 0x2, 
    0x2, 0xf7, 0xfc, 0x5, 0x1c, 0xf, 0x2, 0xf8, 0xf9, 0x7, 0x6, 0x2, 0x2, 
    0xf9, 0xfb, 0x5, 0x1c, 0xf, 0x2, 0xfa, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xfb, 
    0xfe, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xfd, 
    0x3, 0x2, 0x2, 0x2, 0xfd, 0x100, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xfc, 0x3, 
    0x2, 0x2, 0x2, 0xff, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xff, 0x100, 0x3, 0x2, 
    0x2, 0x2, 0x100, 0x101, 0x3, 0x2, 0x2, 0x2, 0x101, 0x105, 0x7, 0x4, 
    0x2, 0x2, 0x102, 0x105, 0x9, 0x5, 0x2, 0x2, 0x103, 0x105, 0x5, 0x1e, 
    0x10, 0x2, 0x104, 0xc3, 0x3, 0x2, 0x2, 0x2, 0x104, 0xcb, 0x3, 0x2, 0x2, 
    0x2, 0x104, 0xcf, 0x3, 0x2, 0x2, 0x2, 0x104, 0xd4, 0x3, 0x2, 0x2, 0x2, 
    0x104, 0xd8, 0x3, 0x2, 0x2, 0x2, 0x104, 0xe6, 0x3, 0x2, 0x2, 0x2, 0x104, 
    0xe8, 0x3, 0x2, 0x2, 0x2, 0x104, 0xf5, 0x3, 0x2, 0x2, 0x2, 0x104, 0x102, 
    0x3, 0x2, 0x2, 0x2, 0x104, 0x103, 0x3, 0x2, 0x2, 0x2, 0x105, 0x117, 
    0x3, 0x2, 0x2, 0x2, 0x106, 0x107, 0xc, 0xb, 0x2, 0x2, 0x107, 0x108, 
    0x9, 0x6, 0x2, 0x2, 0x108, 0x116, 0x5, 0x1c, 0xf, 0xc, 0x109, 0x10a, 
    0xc, 0xa, 0x2, 0x2, 0x10a, 0x10b, 0x9, 0x7, 0x2, 0x2, 0x10b, 0x116, 
    0x5, 0x1c, 0xf, 0xb, 0x10c, 0x10d, 0xc, 0x9, 0x2, 0x2, 0x10d, 0x10e, 
    0x9, 0x8, 0x2, 0x2, 0x10e, 0x116, 0x5, 0x1c, 0xf, 0xa, 0x10f, 0x110, 
    0xc, 0x8, 0x2, 0x2, 0x110, 0x111, 0x7, 0x18, 0x2, 0x2, 0x111, 0x116, 
    0x5, 0x1c, 0xf, 0x9, 0x112, 0x113, 0xc, 0x7, 0x2, 0x2, 0x113, 0x114, 
    0x7, 0x1a, 0x2, 0x2, 0x114, 0x116, 0x5, 0x1c, 0xf, 0x8, 0x115, 0x106, 
    0x3, 0x2, 0x2, 0x2, 0x115, 0x109, 0x3, 0x2, 0x2, 0x2, 0x115, 0x10c, 
    0x3, 0x2, 0x2, 0x2, 0x115, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x115, 0x112, 
    0x3, 0x2, 0x2, 0x2, 0x116, 0x119, 0x3, 0x2, 0x2, 0x2, 0x117, 0x115, 
    0x3, 0x2, 0x2, 0x2, 0x117, 0x118, 0x3, 0x2, 0x2, 0x2, 0x118, 0x1d, 0x3, 
    0x2, 0x2, 0x2, 0x119, 0x117, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x11b, 0x7, 
    0x3d, 0x2, 0x2, 0x11b, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x23, 0x2e, 0x3e, 
    0x41, 0x46, 0x56, 0x5f, 0x6c, 0x79, 0x8c, 0x8f, 0x9d, 0xa0, 0xa7, 0xb5, 
    0xbe, 0xdf, 0xe2, 0xef, 0xf2, 0xfc, 0xff, 0x104, 0x115, 0x117, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

AslParser::Initializer AslParser::_init;
