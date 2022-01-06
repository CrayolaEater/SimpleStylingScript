#pragma once
#include <vector>
#include "SymbolTable.h"
class ScopeStack
{
public:
	std::vector<SymbolTable*> stack;
	SymbolTable* getCurrentTable();
	~ScopeStack()
	{
		for (auto& e : stack)
		{
			delete e;
		}
		stack.clear();
	}
};