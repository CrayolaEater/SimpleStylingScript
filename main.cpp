#include <iostream>
#include <stdio.h>
#include<stdlib.h>
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
	//string filename;
	//switch (argc)
	//{
	//case 1:
	//	cout << "you need to specify file path\n";
	//	break;
	//case 2:
	//	filename = string(strdup(argv[1]));
	//	break;
	//}

	//ifstream fin(filename);
	////ofstream fout(filename);

	//string fContent((istreambuf_iterator<char>(fin)),
	//	istreambuf_iterator<char>());

	//cout << fContent;

	//fin.close();

	return 0;
}
void yyerror(const char* msg)
{
	cout << "Error: " << msg << " on line " << yylineno << '\n';
}