%defines "Parser.h"

%{

#include<iostream>
#include<cstdio>
#include "Parser.h"
extern int yylex();
extern void yyerror(const char*);
%}

%token NR ID PERIOD COMMA LEFT_BRACKET RIGHT_BRACKET FUNCTION RETURN BREAK
%token ASSIGN IF WHILE FOR LOOP OBJ PLUS MINUS MUL DIV LEFT RIGHT ARRLEFT ARRRIGHT
%token AND LESS LEQ EQL GREATER GREQ OR NOT NEQ SEMICOLON COLON TYPE VOID
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
block: statement
	 | block statement
	 ;
instructions: declaration
			| RETURN expression
			| BREAK
			;

declaration: declarationList COLON TYPE
		   | declarationList COLON TYPE ASSIGN expression
		   | declarationList COLON TYPE ARRLEFT ARRRIGHT
		   | declarationList COLON TYPE ARRLEFT ARRRIGHT ASSIGN ARRLEFT arrayValues ARRRIGHT
		   ;

arrayValues: expression
		   | expression COMMA arrayValues
		   ;

declarationList: ID 
			   | ID COMMA declarationList
			   ;

expression: ID
	     | NR
		 | ID ARRLEFT NR ARRRIGHT
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

statement: instructions SEMICOLON
		 | functionBlock
		 | IF LEFT expression RIGHT LEFT_BRACKET block RIGHT_BRACKET 
		 | WHILE LEFT expression RIGHT LEFT_BRACKET block RIGHT_BRACKET 
		 ;

functionBlock: FUNCTION ID LEFT functionDeclaration RIGHT COLON TYPE LEFT_BRACKET block RIGHT_BRACKET
			 | FUNCTION ID LEFT functionDeclaration RIGHT COLON TYPE LEFT_BRACKET RIGHT_BRACKET
			 | FUNCTION ID LEFT RIGHT COLON TYPE LEFT_BRACKET block RIGHT_BRACKET
			 | FUNCTION ID LEFT RIGHT COLON TYPE LEFT_BRACKET RIGHT_BRACKET
			 | FUNCTION ID LEFT functionDeclaration RIGHT COLON VOID LEFT_BRACKET block RIGHT_BRACKET
			 | FUNCTION ID LEFT functionDeclaration RIGHT COLON VOID LEFT_BRACKET RIGHT_BRACKET
			 | FUNCTION ID LEFT RIGHT COLON VOID LEFT_BRACKET block RIGHT_BRACKET
			 | FUNCTION ID LEFT RIGHT COLON VOID LEFT_BRACKET RIGHT_BRACKET
			 ;

functionDeclaration: ID COLON TYPE
				   | ID COLON TYPE ARRLEFT ARRRIGHT
				   | ID COLON TYPE COMMA functionDeclaration
				   | ID COLON TYPE ARRLEFT ARRRIGHT COMMA functionDeclaration
				   ;