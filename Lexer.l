%{
#include <iostream>
#include "Parser.h"
using namespace std;
%}
%option noyywrap
%%
"." {return PERIOD;}
"," {return COMMA;}
"+" {return PLUS;}
":" {return COLON;}
";" {return SEMICOLON;}
"string"|"int"|"boolean"|"char"|"float" {return TYPE;}
"-" {return MINUS;}
"*" {return MUL;}
"/" {return DIV;}
"(" {return LEFT;}
")" {return RIGHT;}
"[" {return ARRLEFT;}
"]" {return ARRRIGHT;}
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
"function" {return FUNCTION;}
"void" {return VOID;}
"return" {return RETURN;}
"break" {return BREAK;}
"interface" {return INTERFACE;}
"{" {return LEFT_BRACKET;}
"}" {return RIGHT_BRACKET;}
[_a-zA-Z][_a-zA-Z0-9]* {return ID;}
"=" {return ASSIGN;}
([0-9]*[.])?[0-9]+ {return NR;}
[ \t] ;
\n {yylineno++;}
. {return yytext[0];}
