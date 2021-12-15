%defines "Parser.h"

%{

#include<iostream>
#include<cstdio>
#include "Parser.h"
extern int yylex();
extern void yyerror(const char*);
%}

%token NR ID TIP

%token BGIN END ASSIGN IF WHILE FOR LOOP OBJ PLUS MINUS MUL DIV LEFT RIGHT ARRLEFT ARRRIGHT EVAL
%token AND LESS LEQ EQL GREATER GREQ OR NOT NEQ
%left AND OR
%left LESS LEQ EQL GREATER GREQ NEQ
%left PLUS MINUS
%left MUL DIV
%right NOT
%left LEFT RIGHT ARRLEFT ARRRIGHT
%start progr
%%

progr: ASSIGN ;

%%