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
[_a-zA-Z][-_a-zA-Z0-9]* { return PROPERTY; }
"+" {return LMERGE;}
"." {return ACCESS;}
([0-9]*[.])?[0-9]+ {return NR;}
"++" {return RMERGE;}
"-" {return LSUBSTRACT;}
"--" {return RSUBSTRACT;}
"(" {return LEFT;}
")" {return RIGHT;}
[ \t] ;
\n {yylineno++;}
. {return yytext[0];}
