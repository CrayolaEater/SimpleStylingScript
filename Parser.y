%defines "Parser.h"

%{

#include<iostream>
#include<cstdio>
#include "Parser.h"
extern int yylex();
extern void yyerror(const char*);
%}

%token NR ID PERIOD COMMA LEFT_BRACKET RIGHT_BRACKET FUNCTION RETURN BREAK INTERFACE
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
		   | declarationList COLON ID
		   | declarationList COLON TYPE ASSIGN expression
		   | declarationList COLON ID ASSIGN expression
		   | declarationList COLON TYPE ARRLEFT ARRRIGHT
		   | declarationList COLON ID ARRLEFT ARRRIGHT
		   | declarationList COLON TYPE ARRLEFT ARRRIGHT ASSIGN ARRLEFT arrayValues ARRRIGHT
		   | declarationList COLON ID ARRLEFT ARRRIGHT ASSIGN ARRLEFT arrayValues ARRRIGHT
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
		 | interfaceBlock
		 | IF LEFT expression RIGHT LEFT_BRACKET block RIGHT_BRACKET 
		 | WHILE LEFT expression RIGHT LEFT_BRACKET block RIGHT_BRACKET 
		 ;

functionBlock: FUNCTION ID LEFT functionDeclarationList RIGHT COLON functionType LEFT_BRACKET block RIGHT_BRACKET
			 | FUNCTION ID LEFT functionDeclarationList RIGHT COLON functionType LEFT_BRACKET RIGHT_BRACKET
			 | FUNCTION ID LEFT RIGHT COLON functionType LEFT_BRACKET block RIGHT_BRACKET
			 | FUNCTION ID LEFT RIGHT COLON functionType LEFT_BRACKET RIGHT_BRACKET
			 ;

functionType: ID
			| TYPE
			| VOID
			;

functionDeclarationList: functionDeclaration
					   | functionDeclaration COMMA functionDeclarationList
					   ;

functionDeclaration: ID COLON TYPE
				   | ID COLON ID
				   | ID COLON TYPE ARRLEFT ARRRIGHT
				   | ID COLON ID ARRLEFT ARRRIGHT
				   ;

interfaceBlock: INTERFACE ID LEFT_BRACKET interfaceDeclarationList RIGHT_BRACKET
			  ;

interfaceDeclarationList: interfaceDeclaration
						| interfaceDeclaration interfaceDeclarationList
						;

interfaceDeclaration: ID COLON TYPE SEMICOLON
					| ID COLON ID SEMICOLON
					| ID COLON TYPE ARRLEFT ARRRIGHT SEMICOLON
					| ID COLON ID ARRLEFT ARRRIGHT SEMICOLON
					| ID LEFT functionDeclarationList RIGHT COLON functionType SEMICOLON
					| ID LEFT RIGHT COLON functionType SEMICOLON
					;