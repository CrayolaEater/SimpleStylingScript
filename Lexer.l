%{
#include <iostream>
#include "Parser.h"
using namespace std;
%}
%option noyywrap
%%
<<<<<<< HEAD
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
=======
"=" { return ASSIGN; }
"class"|"ref"|"id" {return TYPE; }
[_a-zA-Z][_a-zA-Z0-9]* { return ID; }
[_a-zA-Z][-_a-zA-Z0-9]* { return PROPERTY; }
"+" {return LMERGE;}
"." {return ACCESS;}
([0-9]*[.])?[0-9]+ {return NR;}
"++" {return RMERGE;}
"-" {return LSUBSTRACT;}
"--" {return RSUBSTRACT;}
"(" {return LEFT;}
")" {return RIGHT;}
>>>>>>> 2734eb27b0cdcb10434c85ec7dbfb017a94c81ae
[ \t] ;
\n {yylineno++;}
. {return yytext[0];}
