/////////////////////////////////////////////////////////////////
//
//    Main program - Front-end for the Asl programming language.
//                   It performs the translation and
//                   writes the generated code
//
////////////////////////////////////////////////////////////////


#include "antlr4-runtime.h"
#include "AslLexer.h"
#include "AslParser.h"

#include "../common/TypesMgr.h"
#include "../common/SymTable.h"
#include "../common/TreeDecoration.h"
#include "../common/SemErrors.h"
#include "SymbolsVisitor.h"
#include "TypeCheckVisitor.h"
#include "../common/code.h"
#include "CodeGenVisitor.h"

#include <iostream>
#include <fstream>    // ifstream

#include <cstdio>     // fopen
#include <cstdlib>    // EXIT_FAILURE, EXIT_SUCCESS

// using namespace std;
// using namespace antlr4;


int main(int argc, const char* argv[]) {
  // check the correct use of the program
  if (argc > 2) {
    std::cout << "Usage: ./main [<file>]" << std::endl;
    return EXIT_FAILURE;
  }
  if (argc == 2 && !std::fopen(argv[1], "r")) {
    std::cout << "No such file: " << argv[1] << std::endl;
    return EXIT_FAILURE;
  }

  // open input file (or std::cin) and create a character stream
  antlr4::ANTLRInputStream input;
  if (argc == 2) {  // read from <file>
    std::ifstream stream;
    stream.open(argv[1]);
    input = antlr4::ANTLRInputStream(stream);
  }
  else {            // read fron std::cin
    input = antlr4::ANTLRInputStream(std::cin);
  }

  // create a lexer that consumes the character stream and produces a token stream
  AslLexer lexer(&input);
  antlr4::CommonTokenStream tokens(&lexer);

  // create a parser that consumes the token stream, and parses it.
  AslParser parser(&tokens);

  // call the parser and get the parse tree
  antlr4::tree::ParseTree *tree = parser.program();

  // check for lexical or syntactical errors
  if (lexer.getNumberOfSyntaxErrors() > 0 ||
      parser.getNumberOfSyntaxErrors() > 0) {
    std::cout << "Lexical and/or syntactical errors have been found." << std::endl;
    return EXIT_FAILURE;
  }

  // print the parse tree (for debugging purposes)
  // std::cout << tree->toStringTree(&parser) << std::endl;

  // auxililary classes we are going to need to store information while
  // traversing the tree. They are described below in this document
  TypesMgr       types;
  SymTable       symbols(types);
  TreeDecoration decorations;
  SemErrors      errors;

  // create a visitor that looks for variables and function declarations
  // in the tree and stores required information
  SymbolsVisitor symboldecl(types, symbols, decorations, errors);
  symboldecl.visit(tree);

  // create another visitor that will perform type checkings wherever
  // it is needed (on expressions, assignments, parameter passing, etc)
  TypeCheckVisitor typecheck(types, symbols, decorations, errors);
  typecheck.visit(tree);

  if (errors.getNumberOfSemanticErrors() > 0) {
    std::cout << "There are semantic errors: no code generated." << std::endl;
    return EXIT_FAILURE;
  }

  // create a third visitor that will return the generated code
  // for each part of the tree, and will store it in 'mycode'
  CodeGenVisitor codegenerator(types, symbols, decorations);
  code mycode = codegenerator.visit(tree);

  // print generated code as output
  std::cout << mycode.dump() << std::endl;

  return EXIT_SUCCESS;
}
