//////////////////////////////////////////////////////////////////////
//
//    Asl - Another simple language (grammar)
//
//////////////////////////////////////////////////////////////////////

grammar Asl;

//////////////////////////////////////////////////
/// Parser Rules
//////////////////////////////////////////////////

// A program is a list of functions
program : function+ EOF
        ;

// A function has a name, a list of parameters and a list of statements
function
        : FUNC ID '(' parameters ')' (':' basic_type)? declarations statements ENDFUNC
        ;

parameters
        // (with NO parameters | with paramteres)
        : ( | ID ':' type (',' ID ':' type)*)
        ;
declarations
        : (variable_decl)*
        ;

array_decl
        : ARRAY '[' INTVAL ']' 'of' basic_type
        ;

variable_decl
        : VAR ID (',' ID)* ':' type
        ;

type    : basic_type | array_decl
        ;

basic_type
        : INT | BOOL | FLOAT | CHAR
        ;

statements
        : (statement)*
        ;

// The different types of instructions
statement
          // Assignment
        : left_expr ASSIGN expr ';'                     # assignStmt
          // if-then-else statement (else is optional)
        | IF expr THEN statements elseStat? ENDIF       # ifStmt
          // while-do-endwhile statement
        | WHILE expr DO statements ENDWHILE           # whileStmt
          // A function/procedure call has a list of arguments in parenthesis (possibly empty)
        | ident '(' (expr (',' expr)*)? ')' ';'         # procCall
          // Return statement   
        | RET expr? ';'                                 # retStmt
          // Read a variable
        | READ left_expr ';'                            # readStmt
          // Write an expression
        | WRITE expr ';'                                # writeExpr
          // Write a string
        | WRITE STRING ';'                              # writeString
        ;
// Grammar for left expressions (l-values in C++)
left_expr
        : ident ('[' expr ']')?
        ;

elseStat
        : ELSE statements
        ;

// Grammar for expressions with boolean, relational and aritmetic operators
expr    : '(' expr ')'                                  # parenthesis
        | ident '[' expr ']'                            # indexer
        | ident '(' (expr (',' expr)*)? ')'             # functional
        | op=(NOT|ADD|SUB) expr                         # unary
        | expr op=(MUL|DIV|MOD) expr                    # arithmetic
        | expr op=(ADD|SUB) expr                        # arithmetic
        | expr op=(SEQ|SNEQ|SGT|SGE|SLE|SLT) expr       # relational
        | expr op=AND expr                              # logical
        | expr op=OR expr                               # logical
        | (INTVAL|BOOLVAL|FLOATVAL|CHARVAL)             # value
        | ident                                         # exprIdent
        ;

ident   : ID
        ;

//////////////////////////////////////////////////
/// Lexer Rules
//////////////////////////////////////////////////

// Assign operator
ASSIGN    : '=' ;

// Arithmetic operators
ADD       : '+' ;
SUB       : '-' ;
MUL       : '*' ;
DIV       : '/' ;
MOD       : '%' ;

// Comparison/relational operators
SEQ       : '==' ;
SNEQ      : '!=' ;
SGT       : '>'  ;
SGE       : '>=' ;
SLE       : '<=' ;
SLT       : '<'  ;

// Logical operators
AND       : 'and' ;
NOT       : 'not' ;
OR        : 'or'  ;

// Types
VAR       : 'var' ;
INT       : 'int' ;
BOOL      : 'bool' ;
FLOAT     : 'float' ;
CHAR      : 'char' ;
ARRAY     : 'array' ;

// Constructions
IF        : 'if' ;
THEN      : 'then' ;
ELSE      : 'else' ;
ENDIF     : 'endif' ;
WHILE     : 'while' ;
DO        : 'do' ;
ENDWHILE  : 'endwhile' ;
FUNC      : 'func' ;
ENDFUNC   : 'endfunc' ;
RET       : 'return' ;
READ      : 'read' ;
WRITE     : 'write' ;

// Values
INTVAL    : ('0'..'9')+ ;
BOOLVAL   : 'true' | 'false' ;
FLOATVAL  : ('0'..'9')+ '.' ('0'..'9')+ ;
CHARVAL   : '\'' (~('\'' | '\\') | ESC_SEQ) '\'' ;

ID        : ('a'..'z'|'A'..'Z') ('a'..'z'|'A'..'Z'|'_'|'0'..'9')* ;

// Strings (in quotes) with escape sequences
STRING    : '"' ( ESC_SEQ | ~('\\'|'"') )* '"' ;

fragment
ESC_SEQ   : '\\' ('b'|'t'|'n'|'f'|'r'|'"'|'\''|'\\') ;

// Comments (inline C++-style)
COMMENT   : '//' ~('\n'|'\r')* '\r'? '\n' -> skip ;

// White spaces
WS        : (' '|'\t'|'\r'|'\n')+ -> skip ;
// Alternative description
// WS        : [ \t\r\n]+ -> skip ;
