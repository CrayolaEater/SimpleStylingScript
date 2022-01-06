%{
#include <iostream>
#include <stdio.h>
#include "Parser.h"
using namespace std;
%}
%option noyywrap
%%
"." {return PERIOD;}
"," {return COMMA;}
"+" {yylval.string = _strdup(yytext); return PLUS;}
":" {return COLON;}
";" {return SEMICOLON;}
"string"|"int"|"boolean"|"char"|"float" {yylval.string = _strdup(yytext); return TYPE;}
"-" {yylval.string = _strdup(yytext); return MINUS;}
"*" {yylval.string = _strdup(yytext); return MUL;}
"/" {yylval.string = _strdup(yytext); return DIV;}
"(" {return LEFT;}
")" {return RIGHT;}
"[" {return ARRLEFT;}
"]" {return ARRRIGHT;}
"&&" {yylval.string = _strdup(yytext); return AND;}
"<=" {yylval.string = _strdup(yytext); return LEQ;}
"<" {yylval.string = _strdup(yytext); return LESS;}
"==" {yylval.string = _strdup(yytext); return EQL;}
">" {yylval.string = _strdup(yytext); return GREATER;}
">=" {yylval.string = _strdup(yytext); return GREQ;}
"||" {yylval.string = _strdup(yytext); return OR;}
"!" {yylval.string = _strdup(yytext); return NOT;}
"!=" {yylval.string = _strdup(yytext); return NEQ;}
"if" {return IF;}
"for" {return FOR;}
"while" {return WHILE;}
"function" {return FUNCTION;}
"void" {yylval.string = strdup(yytext); return VOID;}
"return" {return RETURN;}
"break" {return BREAK;}
"interface" {return INTERFACE;}
"{" {return LEFT_BRACKET;}
"}" {return RIGHT_BRACKET;}
[_a-zA-Z][_a-zA-Z0-9]* {yylval.string = _strdup(yytext); ;return ID;}
"=" {return ASSIGN;}
([0-9]*[.])?[0-9]+ {yylval.string = _strdup(yytext); return NR;}
[ \t] ;
\n {yylineno++;}
. {return yytext[0];}
