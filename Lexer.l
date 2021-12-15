%{
#include <iostream>
#include "Parser.h"
using namespace std;
%}
%option noyywrap
%%
"+" {return PLUS;}
"-" {return MINUS;}
"*" {return MUL;}
"/" {return DIV;}
"(" {return LEFT;}
")" {return RIGHT;}
"[" {return ARRLEFT;}
"]" {return ARRRIGHT;}
"Eval" {return EVAL;}
"&&" {return AND;}
"<=" {return LEQ;}
"<" {return LESS;}
"==" {return EQL;}
">" {return GREATER;}
">=" {return GREQ;}
"||" {return OR;}
"!" {return NOT;}
"!=" {return NEQ;}
"if" {return IF;}
"for" {return FOR;}
"while" {return WHILE;}
"loop" {return LOOP;}
"object" {return OBJ;}
[_a-zA-Z][_a-zA-Z0-9]* {return ID;}
"<-" {return ASSIGN;}
([0-9]*[.])?[0-9]+ {return NR;}
[ \t] ;
\n {yylineno++;}
. {return yytext[0];}
