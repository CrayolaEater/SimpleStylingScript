#pragma once
#include<vector>
#include "Property.h";
class _baseObj
{
public:
	std::vector<Property> currentProperties;
	_baseObj * getChildren();
	_baseObj * getChild(uint32_t index);
private:
	std::vector<_baseObj*> children;
};

