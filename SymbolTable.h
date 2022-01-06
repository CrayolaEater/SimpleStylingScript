#pragma once
#include<vector>
#include<string>
#include<iostream>
#include "VariableTable.h"
#include "FunctionsTable.h"
#include "CurrentValue.h"
class SymbolTable
{
public:
	int scope;
	void AddVariable(VariableTable v);
	void AddFunction(FunctionsTable f);
	std::string toString();
	std::string toStringF();
	void checkDeclarationVariable(char * id, int yylineno);
	void checkNotDeclarationVariable(char * id, int yylineno);

	void checkFunctionDeclaration(char* id, char * type, std::string signature, int yylineno);
	currentValue getVariableValue(char* id);
private:
	std::vector<VariableTable> variables;
	std::vector<FunctionsTable> functions;
	void throwError(const char* msj);
	void throwError(const char* msj, int yylineno);
	void throwError(std::string msj);
	void throwError(std::string msj, int yylineno);
};

