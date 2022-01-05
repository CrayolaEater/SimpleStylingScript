#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Parser.h"
using namespace std;
extern int yyparse();
extern FILE* yyin;
extern int yylineno;
extern int yylex();
extern char* yytext;


int main(int argc, char ** argv)
{
	yyin = fopen(argv[1], "r");

	if (yyparse() == 0)
	{
		cout << "Parsing succeeded.\n";
	}

	fclose(yyin);
	return 0;
}
void yyerror(const char* msg)
{
	cout << "Error: " << msg << " on line " << yylineno << '\n';
}