#pragma once
#include <string>
class FunctionsTable
{
public:
	FunctionsTable(char* type, char* id, char* signature)
	{
		this->type = std::string(type);
		this->id = std::string(id);
		this->signature = std::string(signature);
	}
	FunctionsTable(char* type, char* id, std::string signature)
	{
		this->type = std::string(type);
		this->id = std::string(id);
		this->signature = signature;
	}
	std::string type;
	std::string id;
	std::string signature;
};

