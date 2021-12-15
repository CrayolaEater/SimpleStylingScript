%defines "Parser.h"

%{

#include<iostream>
#include<cstdio>
#include "Parser.h"
extern int yylex();
extern void yyerror(const char*);
%}

<<<<<<< HEAD
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
=======
%token ASSIGN TYPE ID ACCESS PROPERTY NR
%start progr
%left LMERGE RMERGE LSUBSTRACT RSUBSTRACT
%left LEFT RIGHT

%%

progr: line progr
	 | %empty
	 ;

line: instruction ';'
	;

instruction: declaration
		   | propertySetter
		   ;

propertySetter: ID ACCESS PROPERTY ASSIGN propertyValue
			  ;

propertyValue: NR
			 ;


declaration: TYPE ID 
		   | TYPE ID ASSIGN associativeExpression
		   ;

associativeExpression: associativeExpression LMERGE associativeExpression
					 | associativeExpression RMERGE associativeExpression
					 | associativeExpression LSUBSTRACT associativeExpression
					 | associativeExpression RSUBSTRACT associativeExpression
					 | LEFT associativeExpression RIGHT
					 | ID
					 ;
%%
>>>>>>> 2734eb27b0cdcb10434c85ec7dbfb017a94c81ae
