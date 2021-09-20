%{
#include <iostream>
#include "Parser.h"
using namespace std;
%}
%option noyywrap
%%
"=" { return ASSIGN; }
"class"|"ref"|"id" {return TYPE; }
[_a-zA-Z][_a-zA-Z0-9]* { return ID; }
"+" {return LMERGE;}
"++" {return RMERGE;}
"-" {return LSUBSTRACT;}
"--" {return RSUBSTRACT;}
"(" {return LEFT;}
")" {return RIGHT;}
[ \t] ;
\n {yylineno++;}
. {return yytext[0];}
