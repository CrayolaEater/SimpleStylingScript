#include "ScopeStack.h"

SymbolTable* ScopeStack::getCurrentTable()
{
	if (this->stack.size() > 0)
	{
		return this->stack[this->stack.size() - 1];
	}
	this->stack.push_back(new SymbolTable());
	return this->stack[this->stack.size() - 1];
}
