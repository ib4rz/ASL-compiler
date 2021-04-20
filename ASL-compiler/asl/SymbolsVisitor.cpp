//////////////////////////////////////////////////////////////////////
//
//    SymbolsVisitor - Walk the parser tree to register symbols
//                     for the Asl programming language
//
//////////////////////////////////////////////////////////////////////

#include "SymbolsVisitor.h"

#include "antlr4-runtime.h"

#include "../common/TypesMgr.h"
#include "../common/SymTable.h"
#include "../common/TreeDecoration.h"
#include "../common/SemErrors.h"

#include <iostream>
#include <string>
#include <vector>

#include <cstddef>    // std::size_t

// uncomment the following line to enable debugging messages with DEBUG*
// #define DEBUG_BUILD
#include "../common/debug.h"


// Constructor
SymbolsVisitor::SymbolsVisitor(TypesMgr       & Types,
			       SymTable       & Symbols,
			       TreeDecoration & Decorations,
			       SemErrors      & Errors) :
  Types{Types},
  Symbols{Symbols},
  Decorations{Decorations},
  Errors{Errors} {
}


antlrcpp::Any SymbolsVisitor::visitProgram(AslParser::ProgramContext *ctx) {
  DEBUG_ENTER();
  SymTable::ScopeId sc = Symbols.pushNewScope("$global$");
  putScopeDecor(ctx, sc);
  for (auto ctxFunc : ctx->function())
    visit(ctxFunc);
  // Symbols.print();
  Symbols.popScope();
  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any SymbolsVisitor::visitFunction(AslParser::FunctionContext *ctx) {
  DEBUG_ENTER();
  std::string funcName = ctx->ID()->getText();
  SymTable::ScopeId sc = Symbols.pushNewScope(funcName);
  putScopeDecor(ctx, sc);
  // Visits
  if (ctx->basic_type()) visit(ctx->basic_type());
  visit(ctx->parameters());
  visit(ctx->declarations());
  visit(ctx->statements());
  // Symbols.print();
  Symbols.popScope();
  std::string ident = ctx->ID()->getText();
  // Function already declared
  if (Symbols.findInCurrentScope(ident))
    Errors.declaredIdent(ctx->ID());
  else {
    // Return type
    TypesMgr::TypeId tRet;
    if (ctx->basic_type())
      tRet = getTypeDecor(ctx->basic_type());
    else tRet = Types.createVoidTy();
    // Parameters types
    std::vector<TypesMgr::TypeId> lParamsTy;
    for (auto ctxParamTy: ctx->parameters()->type())
      lParamsTy.push_back(getTypeDecor(ctxParamTy));
    // Create function
    TypesMgr::TypeId tFunc = Types.createFunctionTy(lParamsTy, tRet);
    Symbols.addFunction(ident, tFunc);
  }
  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any SymbolsVisitor::visitParameters(AslParser::ParametersContext *ctx) {
  DEBUG_ENTER();
  for (size_t i = 0; i < ctx->ID().size(); ++i) {
    visit(ctx->type(i));
    std::string id = ctx->ID(i)->getText();
    if (Symbols.findInCurrentScope(id)) Errors.declaredIdent(ctx->ID(i));
    else { 
    TypesMgr::TypeId t = getTypeDecor(ctx->type(i));
    Symbols.addParameter(id,t);
    }
  }
  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any SymbolsVisitor::visitDeclarations(AslParser::DeclarationsContext *ctx) {
  DEBUG_ENTER();
  visitChildren(ctx);
  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any SymbolsVisitor::visitVariable_decl(AslParser::Variable_declContext *ctx) {
  DEBUG_ENTER();
  visit(ctx->type());
  for (auto idCtx : ctx->ID()) {
    std::string ident = idCtx->getText();
    // Variable already declared
    if (Symbols.findInCurrentScope(ident))
      Errors.declaredIdent(idCtx);
    else // Add variable to symbol table
      Symbols.addLocalVar(ident, getTypeDecor(ctx->type()));
  }
  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any SymbolsVisitor::visitType(AslParser::TypeContext *ctx) {
  DEBUG_ENTER();
  // Basic types
  if (ctx->basic_type()) {
    visit(ctx->basic_type());
    putTypeDecor(ctx,getTypeDecor(ctx->basic_type()));
  }
  else {  // Array type
    visit(ctx->array_decl());
    putTypeDecor(ctx,getTypeDecor(ctx->array_decl()));
  }
  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any SymbolsVisitor::visitBasic_type(AslParser::Basic_typeContext *ctx) {
  DEBUG_ENTER();
  TypesMgr::TypeId t = Types.createErrorTy();
  if (ctx->INT()) t = Types.createIntegerTy();
  else if (ctx->BOOL()) t = Types.createBooleanTy();
  else if (ctx->FLOAT()) t = Types.createFloatTy();
  else if (ctx->CHAR()) t = Types.createCharacterTy();
  putTypeDecor(ctx,t);
  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any SymbolsVisitor::visitArray_decl(AslParser::Array_declContext *ctx) {
  DEBUG_ENTER();
  visit(ctx->basic_type());
  unsigned int size = std::stoi(ctx->INTVAL()->getText());   // size array
  TypesMgr::TypeId elemType = getTypeDecor(ctx->basic_type());
  TypesMgr::TypeId t = Types.createArrayTy(size,elemType);
  putTypeDecor(ctx,t);
  DEBUG_EXIT();
  return 0;
}

// Getters for the necessary tree node atributes:
//   Scope and Type
SymTable::ScopeId SymbolsVisitor::getScopeDecor(antlr4::ParserRuleContext *ctx) {
  return Decorations.getScope(ctx);
}
TypesMgr::TypeId SymbolsVisitor::getTypeDecor(antlr4::ParserRuleContext *ctx) {
  return Decorations.getType(ctx);
}

// Setters for the necessary tree node attributes:
//   Scope and Type
void SymbolsVisitor::putScopeDecor(antlr4::ParserRuleContext *ctx, SymTable::ScopeId s) {
  Decorations.putScope(ctx, s);
}
void SymbolsVisitor::putTypeDecor(antlr4::ParserRuleContext *ctx, TypesMgr::TypeId t) {
  Decorations.putType(ctx, t);
}
