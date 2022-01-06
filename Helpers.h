#pragma once
#include <string.h>
#include <iostream>
#include <string>
#include "CurrentValue.h"
class Helpers
{
public:
	bool isFloat(char* value);
	void checkTypes(const currentValue& v1, const currentValue& type2, int yylineno);
	currentValue executeOperation(const currentValue& v1, const currentValue& v2, char * _operator, int yylineno);
	void throwError(const char* msj);
	void throwError(const char* msj, int yylineno);
	void throwError(std::string msj);
	void throwError(std::string msj, int yylineno);
	char * toChar(std::string s);
};

