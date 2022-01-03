%defines "Parser.h"

%{

#include<iostream>
#include<cstdio>
#include "Parser.h"
extern int yylex();
extern void yyerror(const char*);
%}

%token NR ID PERIOD COMMA
%token BGIN END ASSIGN IF WHILE FOR LOOP OBJ PLUS MINUS MUL DIV LEFT RIGHT ARRLEFT ARRRIGHT
%token AND LESS LEQ EQL GREATER GREQ OR NOT NEQ SEMICOLON COLON TYPE
%left AND OR
%left LESS LEQ EQL GREATER GREQ NEQ
%left PLUS MINUS
%left MUL DIV
%right NOT
%left LEFT RIGHT ARRLEFT ARRRIGHT
%start program
%%

program: %empty
	   | block 
	   ;
block: instructions SEMICOLON
	 | block
	 ;
instructions: declaration ;

declaration: declarationList COLON TYPE
		   | declarationList COLON TYPE ASSIGN expression
		   ;

declarationList: ID 
			   | ID COMMA declarationList
			   ;

expression: ID
	     | NR
		 | expression MINUS expression
		 | expression PLUS expression
		 | expression MUL expression
		 | expression DIV expression
		 | LEFT expression RIGHT
		 | expression GREATER expression
		 | expression LESS expression
		 | expression EQL expression
		 | expression LEQ expression
		 | expression GREQ expression
		 | expression NEQ expression
		 | expression OR expression
		 | expression AND expression
		 | NOT expression
		 ;	

%%