%defines "Parser.h"

%{

#include<iostream>
#include<cstdio>
#include "Parser.h"
extern int yylex();
extern void yyerror(const char*);
%}

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
