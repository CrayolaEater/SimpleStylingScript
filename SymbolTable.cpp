#include "SymbolTable.h"
void SymbolTable::AddVariable(VariableTable v)
{
	this->variables.push_back(v);
}

void SymbolTable::AddFunction(FunctionsTable f)
{
	this->functions.push_back(f);
}

std::string SymbolTable::toString()
{
	std::string s = "id\ttype\tvalue\n";
	for (auto& e : this->variables)
	{
		s += e.id + '\t';
		s += e.type + '\t';
		s += e.value + '\n';
	}
	return s;
}

std::string SymbolTable::toStringF()
{
	std::string s = "id\ttype\tsignature\n";
	for (auto& e : this->functions)
	{
		s += e.id + '\t';
		s += e.type + '\t';
		s += e.signature + '\n';
	}
	return s;
}

void SymbolTable::checkDeclarationVariable(char * id, int yylineno)
{
	std::string _id(id);
	for (auto& e : this->variables)
	{
		if (_id == e.id)
		{
			throwError("Variable '" + _id + "' already declared!", yylineno);
		}
	}
}
void SymbolTable::checkNotDeclarationVariable(char* id, int yylineno)
{
	std::string _id(id);
	for (auto& e : this->variables)
	{
		if (_id == e.id)
		{
			return;
		}
	}
	throwError("Variable '" + _id + "' was not declared!", yylineno);
}
void SymbolTable::checkFunctionDeclaration(char* id, char * type, std::string signature, int yylineno)
{
	std::string _id = std::string(id);
	std::string _type = std::string(type);
	for (auto& e : this->functions)
	{
		if (e.type == _type && e.id == _id && e.signature == signature)
		{
			throwError("Method '" + _id + "'(" + signature + "): " + _type +" already been declared!");
		}
	}
}
currentValue SymbolTable::getVariableValue(char* id)
{
	std::string _id(id);
	currentValue c;
	c.type = nullptr;
	c.value = nullptr;
	for (auto& e : this->variables)
	{
		if (_id == e.id)
		{
			c.type = (char * )e.type.c_str();
			c.value = (char *)e.value.c_str();
			break;
		}
	}
	return c;
}
void SymbolTable::throwError(const char* msj)
{
	std::cout << "[ERROR] " << msj << '\n';
	exit(0);
}

void SymbolTable::throwError(const char* msj, int yylineno)
{
	std::cout << "[ERROR l:" << yylineno << "] " << msj << '\n';
	exit(0);
}

void SymbolTable::throwError(std::string msj)
{
	std::cout << "[ERROR] " << msj << '\n';
	exit(0);
}

void SymbolTable::throwError(std::string msj, int yylineno)
{
	std::cout << "[ERROR l:" << yylineno << "] " << msj << '\n';
	exit(0);
}
