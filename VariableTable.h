#pragma once
#include<string>
class VariableTable
{
public:
	VariableTable(char* id, char* value, char* type)
	{
		this->type = std::string(type);
		this->id = std::string(id);
		this->value = std::string(value);
	}
	std::string type;
	std::string value;
	std::string id;
};

