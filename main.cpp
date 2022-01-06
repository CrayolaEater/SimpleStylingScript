#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Parser.h"
#include<fstream>
#include "SymbolTable.h"
using namespace std;
ofstream foutv("symbol_table.txt");
ofstream foutf("symbol_table_functions.txt");
extern int yyparse();
extern FILE* yyin;
extern int yylineno;
//extern int yylex();
extern char* yytext;
extern SymbolTable currentTable;
int main(int argc, char ** argv)
{
	yyin = fopen(argv[1], "r");

	if (yyparse() == 0)
	{
		cout << "Parsing succeeded.\n";
	}
	fclose(yyin);
	foutv << '\n' << currentTable.toString();
	foutf << '\n' << currentTable.toStringF();
	return 0;
}
void yyerror(const char* msg)
{
	cout << "Error: " << msg << " on line " << yylineno << '\n';
}