//////////////////////////////////////////////////////////////////////
//
//    TypeCheckVisitor - Walk the parser tree to do the semantic
//                       typecheck for the ASl programming language
//
//////////////////////////////////////////////////////////////////////

#include "TypeCheckVisitor.h"

#include "antlr4-runtime.h"

#include "../common/TypesMgr.h"
#include "../common/SymTable.h"
#include "../common/TreeDecoration.h"
#include "../common/SemErrors.h"

#include <iostream>
#include <string>

// uncomment the following line to enable debugging messages with DEBUG*
// #define DEBUG_BUILD
#include "../common/debug.h"


// Constructor
TypeCheckVisitor::TypeCheckVisitor(TypesMgr       & Types,
				   SymTable       & Symbols,
				   TreeDecoration & Decorations,
				   SemErrors      & Errors) :
  Types{Types},
  Symbols {Symbols},
  Decorations{Decorations},
  Errors{Errors} {
}

antlrcpp::Any TypeCheckVisitor::visitProgram(AslParser::ProgramContext *ctx) {
  DEBUG_ENTER();
  SymTable::ScopeId sc = getScopeDecor(ctx);
  Symbols.pushThisScope(sc);  
  for (auto ctxFunc : ctx->function()) visit(ctxFunc);
  // Check the existence of the "main" function
  if (Symbols.noMainProperlyDeclared())
    Errors.noMainProperlyDeclared(ctx);
  Symbols.popScope();
  Errors.print();
  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any TypeCheckVisitor::visitFunction(AslParser::FunctionContext *ctx) {
  DEBUG_ENTER();
  // Return type
  TypesMgr::TypeId t;
  if (ctx->basic_type()) {
    visit(ctx->basic_type());
    t = getTypeDecor(ctx->basic_type());
  }
  else
    t = Types.createVoidTy();
  Symbols.setCurrentFunctionTy(t);
  SymTable::ScopeId sc = getScopeDecor(ctx);
  Symbols.pushThisScope(sc);
  //Symbols.print();
  visit(ctx->statements());
  Symbols.popScope();
  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any TypeCheckVisitor::visitStatements(AslParser::StatementsContext *ctx) {
  DEBUG_ENTER();
  visitChildren(ctx);
  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any TypeCheckVisitor::visitAssignStmt(AslParser::AssignStmtContext *ctx) {
  DEBUG_ENTER();
  visit(ctx->left_expr());
  visit(ctx->expr());
  TypesMgr::TypeId t1 = getTypeDecor(ctx->left_expr());
  TypesMgr::TypeId t2 = getTypeDecor(ctx->expr());
  // Check if t2 values can be copied to t1
  if (!Types.isErrorTy(t1) && !Types.isErrorTy(t2) && !Types.copyableTypes(t1, t2))
    Errors.incompatibleAssignment(ctx->ASSIGN());
  // Check if assignment is referenceable
  if (!Types.isErrorTy(t1) && !getIsLValueDecor(ctx->left_expr()))
    Errors.nonReferenceableLeftExpr(ctx->left_expr());
  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any TypeCheckVisitor::visitIfStmt(AslParser::IfStmtContext *ctx) {
  DEBUG_ENTER();
  visit(ctx->expr());
  TypesMgr::TypeId t = getTypeDecor(ctx->expr());
  // Check if the "if" condition is boolean
  if (!Types.isErrorTy(t) && !Types.isBooleanTy(t))
    Errors.booleanRequired(ctx);
  visit(ctx->statements());
  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any TypeCheckVisitor::visitElseStat(AslParser::ElseStatContext *ctx) {
  DEBUG_ENTER();
  visit(ctx->statements());
  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any TypeCheckVisitor::visitWhileStmt(AslParser::WhileStmtContext *ctx) {
  DEBUG_ENTER();
  visit(ctx->expr());
  TypesMgr::TypeId t = getTypeDecor(ctx->expr());
  // Check if the "while" condition is boolean
  if (!Types.isErrorTy(t) && !Types.isBooleanTy(t))
    Errors.booleanRequired(ctx);
  visit(ctx->statements());
  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any TypeCheckVisitor::visitProcCall(AslParser::ProcCallContext *ctx) {
  DEBUG_ENTER();
  visit(ctx->ident());
  for (auto ctxParam : ctx->expr()) visit(ctxParam);
  TypesMgr::TypeId t = getTypeDecor(ctx->ident());
  // Check if the function is callable or not
  if (!Types.isFunctionTy(t) && !Types.isErrorTy(t))
    Errors.isNotCallable(ctx->ident());
  else if (!Types.isErrorTy(t)) {
    // Check if number of params in call matches with function definition
    if (Types.getNumOfParameters(t) != (std::size_t) ctx->expr().size())
      Errors.numberOfParameters(ctx->ident());
    else {  // Check parameters passing
      auto parameters = Types.getFuncParamsTypes(t);
      for (size_t i = 0; i < parameters.size(); ++i) {
        if (!Types.copyableTypes(parameters[i], getTypeDecor(ctx->expr(i))))
        Errors.incompatibleParameter(ctx->expr(i), i+1, ctx);
      }
    }
  }
  putIsLValueDecor(ctx, false);
  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any TypeCheckVisitor::visitRetStmt(AslParser::RetStmtContext *ctx) {
  DEBUG_ENTER();
  TypesMgr::TypeId t;
  if (ctx->expr()) {
    visit(ctx->expr());
    t = getTypeDecor(ctx->expr());
  }
  else t = Types.createVoidTy();
  // Check return compatibility
  if (!Types.copyableTypes(Symbols.getCurrentFunctionTy(),t))
    Errors.incompatibleReturn(ctx->RET());
  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any TypeCheckVisitor::visitReadStmt(AslParser::ReadStmtContext *ctx) {
  DEBUG_ENTER();
  visit(ctx->left_expr());
  TypesMgr::TypeId t = getTypeDecor(ctx->left_expr());
  // Check if the type of the input data is a basic type
  if (!Types.isErrorTy(t) && !Types.isPrimitiveTy(t) && !Types.isFunctionTy(t))
    Errors.readWriteRequireBasic(ctx);
  // Check if the left expression is referenceable
  if (!Types.isErrorTy(t) && !getIsLValueDecor(ctx->left_expr()))
    Errors.nonReferenceableExpression(ctx);
  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any TypeCheckVisitor::visitWriteExpr(AslParser::WriteExprContext *ctx) {
  DEBUG_ENTER();
  visit(ctx->expr());
  TypesMgr::TypeId t = getTypeDecor(ctx->expr());
  // Check if write prints a basic type
  if ((!Types.isErrorTy(t)) && (!Types.isPrimitiveTy(t)))
    Errors.readWriteRequireBasic(ctx);
  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any TypeCheckVisitor::visitLeft_expr(AslParser::Left_exprContext *ctx) {
  DEBUG_ENTER();
  visit(ctx->ident());
  TypesMgr::TypeId t1 = getTypeDecor(ctx->ident());
  if (ctx->expr()) {
    visit(ctx->expr());
    TypesMgr::TypeId t2 = getTypeDecor(ctx->expr());
    // Non array in array access
    if (!Types.isArrayTy(t1) && !Types.isErrorTy(t1) && !Types.isErrorTy(t2)) {
      Errors.nonArrayInArrayAccess(ctx);
      t1 = Types.createErrorTy();
    }
    // Non integer index in array access
    if (!Types.isIntegerTy(t2) && !Types.isErrorTy(t2))
      Errors.nonIntegerIndexInArrayAccess(ctx->expr());
    if (Types.isArrayTy(t1) && Types.isIntegerTy(t2))
      t1 = Types.getArrayElemType(t1);
  }
  bool b = getIsLValueDecor(ctx->ident());
  putTypeDecor(ctx, t1);
  putIsLValueDecor(ctx, b);
  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any TypeCheckVisitor::visitParenthesis(AslParser::ParenthesisContext *ctx) {
  DEBUG_ENTER();
  visit(ctx->expr());
  putTypeDecor(ctx, getTypeDecor(ctx->expr()));
  putIsLValueDecor(ctx, getIsLValueDecor(ctx->expr()));
  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any TypeCheckVisitor::visitIndexer(AslParser::IndexerContext *ctx) {
  DEBUG_ENTER();
  visit(ctx->ident());
  visit(ctx->expr());
  TypesMgr::TypeId t = Types.createErrorTy();
  TypesMgr::TypeId t1 = getTypeDecor(ctx->ident());
  TypesMgr::TypeId t2 = getTypeDecor(ctx->expr());
  // Non integer index in array access
  if(!Types.isIntegerTy(t2) && !Types.isErrorTy(t2))
    Errors.nonIntegerIndexInArrayAccess(ctx->expr());
  // Array access
  if (!Types.isErrorTy(t1)) {
    if (!Types.isArrayTy(t1)) Errors.nonArrayInArrayAccess(ctx);
    else t = Types.getArrayElemType(t1);
  }
  bool b = getIsLValueDecor(ctx->ident());
  putTypeDecor(ctx, t);
  putIsLValueDecor(ctx, b);
  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any TypeCheckVisitor::visitFunctional(AslParser::FunctionalContext *ctx) {
  DEBUG_ENTER();
  visit(ctx->ident());  
  for (auto ctxParam : ctx->expr()) visit(ctxParam);
  TypesMgr::TypeId t1 = getTypeDecor(ctx->ident());
  TypesMgr::TypeId t2 = Types.createErrorTy();
  // Check if the function is callable or not
  if (!Types.isFunctionTy(t1) && !Types.isErrorTy(t1))
    Errors.isNotCallable(ctx->ident());
  else if (!Types.isErrorTy(t1)) {
    t2 = Types.getFuncReturnType(t1);
    // Error assigning a void returning function
    if (Types.isVoidFunction(t1)) {
      Errors.isNotFunction(ctx->ident());
      t2 = Types.createErrorTy();
    }
    // Check if number of params in call matches with function definition
    if (Types.getNumOfParameters(t1) != (std::size_t) ctx->expr().size())
      Errors.numberOfParameters(ctx->ident());
    else {   // Check parameters passing
      auto parameters = Types.getFuncParamsTypes(t1);
      for (size_t i = 0; i < parameters.size(); ++i) {
        TypesMgr::TypeId t = getTypeDecor(ctx->expr(i));
        if (!Types.isErrorTy(t) && !Types.copyableTypes(parameters[i], t))
        Errors.incompatibleParameter(ctx->expr(i), i+1, ctx);
      }
    }
  }
  putTypeDecor(ctx,t2);
  putIsLValueDecor(ctx, false);
  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any TypeCheckVisitor::visitUnary(AslParser::UnaryContext *ctx) {
  DEBUG_ENTER();
  visit(ctx->expr());
  TypesMgr::TypeId t = getTypeDecor(ctx->expr());
  if (ctx->NOT()) {
    // Check if t is boolean
    if (!Types.isErrorTy(t) && !Types.isBooleanTy(t)) {
      Errors.incompatibleOperator(ctx->op);
      t = Types.createBooleanTy();
    }
  }
  else {  // -,+
    // Check if t is numerical
    if (!Types.isErrorTy(t) && !Types.isNumericTy(t))
      Errors.incompatibleOperator(ctx->op);
  }
  putTypeDecor(ctx, t);
  putIsLValueDecor(ctx, false);
  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any TypeCheckVisitor::visitArithmetic(AslParser::ArithmeticContext *ctx) {
  DEBUG_ENTER();
  visit(ctx->expr(0));
  visit(ctx->expr(1));
  TypesMgr::TypeId t1 = getTypeDecor(ctx->expr(0));
  TypesMgr::TypeId t2 = getTypeDecor(ctx->expr(1));
  TypesMgr::TypeId t = Types.createIntegerTy();
  // t1 & t2 must be integers in mod operation
  if (ctx->MOD()) {
    if ((!Types.isErrorTy(t1) && !Types.isIntegerTy(t1)) ||
        (!Types.isErrorTy(t2) && !Types.isIntegerTy(t2)))
      Errors.incompatibleOperator(ctx->op);
  }
  else {  // MUL, DIV
    // t1 & t2 must be numerical
    if ((!Types.isErrorTy(t1) && !Types.isNumericTy(t1)) ||
        (!Types.isErrorTy(t2) && !Types.isNumericTy(t2)))
      Errors.incompatibleOperator(ctx->op);
    // Type coercion int & float
    if (Types.isFloatTy(t1) || Types.isFloatTy(t2))
      t = Types.createFloatTy();
  }
  putTypeDecor(ctx, t);
  putIsLValueDecor(ctx, false);
  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any TypeCheckVisitor::visitRelational(AslParser::RelationalContext *ctx) {
  DEBUG_ENTER();
  visit(ctx->expr(0));
  visit(ctx->expr(1));
  TypesMgr::TypeId t1 = getTypeDecor(ctx->expr(0));
  TypesMgr::TypeId t2 = getTypeDecor(ctx->expr(1));
  std::string oper = ctx->op->getText();
  // Checks if t1 & t2 are comparable with the relational operator op
  if (!Types.isErrorTy(t1) && !Types.isErrorTy(t2) &&
      !Types.comparableTypes(t1, t2, oper))
    Errors.incompatibleOperator(ctx->op);
  TypesMgr::TypeId t = Types.createBooleanTy();
  putTypeDecor(ctx, t);
  putIsLValueDecor(ctx, false);
  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any TypeCheckVisitor::visitLogical(AslParser::LogicalContext *ctx) {
  DEBUG_ENTER();
  visit(ctx->expr(0));
  visit(ctx->expr(1));
  TypesMgr::TypeId t1 = getTypeDecor(ctx->expr(0));
  TypesMgr::TypeId t2 = getTypeDecor(ctx->expr(1));
  // Checks if t1 & t2 are boolean
  if (!Types.isErrorTy(t1) && !Types.isErrorTy(t2) &&
     (!Types.isBooleanTy(t1) || !Types.isBooleanTy(t2)))
    Errors.incompatibleOperator(ctx->op);
  TypesMgr::TypeId t = Types.createBooleanTy();
  putTypeDecor(ctx, t);
  putIsLValueDecor(ctx, false);
  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any TypeCheckVisitor::visitValue(AslParser::ValueContext *ctx) {
  DEBUG_ENTER();
  TypesMgr::TypeId t = Types.createErrorTy();
  if (ctx->INTVAL()) t = Types.createIntegerTy();
  if (ctx->BOOLVAL())  t = Types.createBooleanTy();
  if (ctx->FLOATVAL()) t = Types.createFloatTy();
  if (ctx->CHARVAL())  t = Types.createCharacterTy();
  putTypeDecor(ctx, t);
  putIsLValueDecor(ctx, false);
  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any TypeCheckVisitor::visitExprIdent(AslParser::ExprIdentContext *ctx) {
  DEBUG_ENTER();
  visit(ctx->ident());
  TypesMgr::TypeId t = getTypeDecor(ctx->ident());
  putTypeDecor(ctx, t);
  bool b = getIsLValueDecor(ctx->ident());
  putIsLValueDecor(ctx, b);
  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any TypeCheckVisitor::visitIdent(AslParser::IdentContext *ctx) {
  DEBUG_ENTER();
  std::string ident = ctx->getText();
  if (Symbols.findInStack(ident) == -1) {
    Errors.undeclaredIdent(ctx->ID());
    putTypeDecor(ctx, Types.createErrorTy());
    putIsLValueDecor(ctx, true);
  }
  else {
    putTypeDecor(ctx, Symbols.getType(ident));
    if (Symbols.isFunctionClass(ident))
      putIsLValueDecor(ctx, false);
    else
      putIsLValueDecor(ctx, true);
  }
  DEBUG_EXIT();
  return 0;
}

// Getters for the necessary tree node atributes:
//   Scope, Type ans IsLValue
SymTable::ScopeId TypeCheckVisitor::getScopeDecor(antlr4::ParserRuleContext *ctx) {
  return Decorations.getScope(ctx);
}
TypesMgr::TypeId TypeCheckVisitor::getTypeDecor(antlr4::ParserRuleContext *ctx) {
  return Decorations.getType(ctx);
}
bool TypeCheckVisitor::getIsLValueDecor(antlr4::ParserRuleContext *ctx) {
  return Decorations.getIsLValue(ctx);
}

// Setters for the necessary tree node attributes:
//   Scope, Type ans IsLValue
void TypeCheckVisitor::putScopeDecor(antlr4::ParserRuleContext *ctx, SymTable::ScopeId s) {
  Decorations.putScope(ctx, s);
}
void TypeCheckVisitor::putTypeDecor(antlr4::ParserRuleContext *ctx, TypesMgr::TypeId t) {
  Decorations.putType(ctx, t);
}
void TypeCheckVisitor::putIsLValueDecor(antlr4::ParserRuleContext *ctx, bool b) {
  Decorations.putIsLValue(ctx, b);
}
