%defines "Parser.h"

%{

#include<iostream>
#include<cstdio>
#include "Parser.h"
extern int yylex();
extern void yyerror(const char*);
%}

%token ASSIGN TYPE ID
%start progr

%%

progr: line progr
	 | %empty
	 ;

line: declaration
	;

declaration: TYPE ID ';'
		   ;

%%
