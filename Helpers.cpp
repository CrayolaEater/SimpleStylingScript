#include "Helpers.h"
bool Helpers::isFloat(char* value)
{
    if (strchr(value, '.'))
    {
        return true;
    }
    return false;
}

void Helpers::checkTypes(const currentValue& v1, const currentValue& v2, int yylineno)
{
    std::string s1(v1.type);
    std::string s2(v2.type);
    if (s1 != s2)
    {
        throwError("Cannot convert '" + s1 + "' type to '" + s2 + "' !", yylineno);
        exit(0);
    }
}

currentValue Helpers::executeOperation(const currentValue& v1, const currentValue& v2, char* _operator, int yylineno)
{
    std::string sOperator(_operator);
    std::string types(v1.type);
    std::string value1(v1.value);
    std::string value2(v2.value);

    currentValue res;
    res.type = v1.type;
    if (sOperator == "-")
    {
        if (types == "string" || types == "char")
        {
            throwError("Type " + '\'' + types + '\'' + "  does not support " + '\'' + sOperator + '\'' + " operator!", yylineno);
        }
        else if (types == "int")
        {
            res.value = toChar(std::to_string(std::stoi(value1) - std::stoi(value2)));
        }
        else if (types == "float")
        {
            res.value = toChar(std::to_string(std::stof(value1) - std::stof(value2)).c_str());
        }
    }
    else if (sOperator == "+")
    {
        if ( types == "char")
        {
            throwError("Type " + '\'' + types + '\'' + "  does not support " + '\'' + sOperator + '\'' + " operator!", yylineno);
        }
        else if (types == "int")
        {
            res.value = toChar(std::to_string(std::stoi(value1) + std::stoi(value2)));
        }
        else if (types == "float")
        {
            res.value = toChar(std::to_string(std::stof(value1) + std::stof(value2)).c_str());
        }
        else if (types == "string")
        {
            res.value = toChar(value1 + value2);
        }
    }
    else if (sOperator == "*")
    {
        if ( types == "char" || types == "string")
        {
            throwError("Type " + '\'' + types + '\'' + "  does not support " + '\'' + sOperator + '\'' + " operator!", yylineno);
        }
        else if (types == "int")
        {
            res.value = toChar(std::to_string(std::stoi(value1) * std::stoi(value2)));
        }
        else if (types == "float")
        {
            res.value = toChar(std::to_string(std::stof(value1) * std::stof(value2)).c_str());
        }
    }
    else if (sOperator == "/")
    {
        if ( types == "char" || types == "string")
        {
            throwError("Type " + '\'' + types + '\'' + "  does not support " + '\'' + sOperator + '\'' + " operator!", yylineno);
        }
        else if (types == "int")
        {
            if (value2 == "0")
            {
                throwError(" Division by zero.", yylineno);
            }
            res.value = toChar(std::to_string(std::stoi(value1) * std::stoi(value2)));
        }
        else if (types == "float")
        {
            if ((int)std::stof(value2) == 0)
            {
                throwError(" Division by zero.", yylineno);
            }
            res.value = toChar(std::to_string(std::stof(value1) * std::stof(value2)));
        }
    }
    else if (sOperator == ">")
    {
        if (types == "char" || types == "string")
        {
            throwError("Type " + '\'' + types + '\'' + "  does not support " + '\'' + sOperator + '\'' + " operator!", yylineno);
        }
        else if (types == "int")
        {
            res.value = toChar(std::to_string(std::stoi(value1) > std::stoi(value2)));
        }
        else if (types == "float")
        {
            res.value = toChar(std::to_string(std::stof(value1) > std::stof(value2)));
        }
        else if (types == "boolean")
        {
            res.value = toChar(std::to_string(std::stoi(value1) > std::stoi(value2)));
        }
    }
    else if (sOperator == "<")
    {
        if (types == "char" || types == "string")
        {
            throwError("Type " + '\'' + types + '\'' + "  does not support " + '\'' + sOperator + '\'' + " operator!", yylineno);
        }
        else if (types == "int")
        {
            res.value = toChar(std::to_string(std::stoi(value1) < std::stoi(value2)));
        }
        else if (types == "float")
        {
            res.value = toChar(std::to_string(std::stof(value1) < std::stof(value2)));
        }
        else if (types == "boolean")
        {
            res.value = toChar(std::to_string(std::stoi(value1) < std::stoi(value2)));
        }
    }
    else if (sOperator == "==")
    {
        if (types == "char")
        {
            res.value = toChar(std::to_string(value1[0] == value2[0]));
        }
        else if (types == "string")
        {
            res.value = toChar(std::to_string(value1 == value2));
        }
        else if (types == "int")
        {
            res.value = toChar(std::to_string(std::stoi(value1) == std::stoi(value2)));
        }
        else if (types == "float")
        {
            res.value = toChar(std::to_string(std::stof(value1) == std::stof(value2)));
        }
        else if (types == "boolean")
        {
            res.value = toChar(std::to_string(std::stoi(value1) == std::stoi(value2)));
        }
    }
    else if (sOperator == "<=")
    {
        if (types == "char" || types == "string")
        {
            throwError("Type " + '\'' + types + '\'' + "  does not support " + '\'' + sOperator + '\'' + " operator!", yylineno);
        }
        else if (types == "int")
        {
            res.value = toChar(std::to_string(std::stoi(value1) <= std::stoi(value2)));
        }
        else if (types == "float")
        {
            res.value = toChar(std::to_string(std::stof(value1) <= std::stof(value2)));
        }
        else if (types == "boolean")
        {
            res.value = toChar(std::to_string(std::stoi(value1) <= std::stoi(value2)));
        }
    }
    else if (sOperator == ">=")
    {
        if (types == "char" || types == "string")
        {
            throwError("Type " + '\'' + types + '\'' + "  does not support " + '\'' + sOperator + '\'' + " operator!", yylineno);
        }
        else if (types == "int")
        {
            res.value = toChar(std::to_string(std::stoi(value1) >= std::stoi(value2)));
        }
        else if (types == "float")
        {
            res.value = toChar(std::to_string(std::stof(value1) >= std::stof(value2)));
        }
        else if (types == "boolean")
        {
            res.value = toChar(std::to_string(std::stoi(value1) >= std::stoi(value2)));
        }
    }
    else if (sOperator == "!=")
    {
        if (types == "char")
        {
            res.value = toChar(std::to_string(value1[0] != value2[0]));
        }
        else if (types == "string")
        {
            res.value = toChar(std::to_string(value1 != value2));
        }
        else if (types == "int")
        {
            res.value = toChar(std::to_string(std::stoi(value1) != std::stoi(value2)));
        }
        else if (types == "float")
        {
            res.value = toChar(std::to_string(std::stof(value1) != std::stof(value2)));
        }
        else if (types == "boolean")
        {
            res.value = toChar(std::to_string(std::stoi(value1) != std::stoi(value2)));
        }
    }
    else if (sOperator == "||")
    {
        if (types == "char" || types == "string")
        {
            throwError("Type " + '\'' + types + '\'' + "  does not support " + '\'' + sOperator + '\'' + " operator!", yylineno);
        }
        else if (types == "int")
        {
            res.value = toChar(std::to_string(std::stoi(value1) || std::stoi(value2)));
        }
        else if (types == "float")
        {
            res.value = toChar(std::to_string(std::stof(value1) || std::stof(value2)));
        }
        else if (types == "boolean")
        {
            res.value = toChar(std::to_string(std::stoi(value1) || std::stoi(value2)));
        }
    }
    else if (sOperator == "&&")
    {
        if (types == "char" || types == "string")
        {
            throwError("Type " + '\'' + types + '\'' + "  does not support " + '\'' + sOperator + '\'' + " operator!", yylineno);
        }
        else if (types == "int")
        {
            res.value = toChar(std::to_string(std::stoi(value1) && std::stoi(value2)));
        }
        else if (types == "float")
        {
            res.value = toChar(std::to_string(std::stof(value1) && std::stof(value2)));
        }
        else if (types == "boolean")
        {
            res.value = toChar(std::to_string(std::stoi(value1) && std::stoi(value2)));
        }
    }
    else if (sOperator == "!")
    {
        if (types == "char" || types == "string")
        {
            throwError("Type " + '\'' + types + '\'' + "  does not support " + '\'' + sOperator + '\'' + " operator!", yylineno);
        }
        else if (types == "int")
        {
            res.value = toChar(std::to_string(!(std::stoi(value1))));
        }
        else if (types == "float")
        {
            res.value = toChar(std::to_string(!(std::stof(value1))));
        }
        else if (types == "boolean")
        {
            res.value = toChar(std::to_string(!(std::stoi(value1))));
        }
    }
    return res;
}

void Helpers::throwError(const char* msj)
{
    std::cout << "[ERROR] " << msj << '\n';
    exit(0);
}

void Helpers::throwError(const char* msj, int yylineno)
{
    std::cout << "[ERROR l:" << yylineno << "] " << msj << '\n';
    exit(0);
}

void Helpers::throwError(std::string msj)
{
    std::cout << "[ERROR] " << msj << '\n';
    exit(0);
}

void Helpers::throwError(std::string msj, int yylineno)
{
    std::cout << "[ERROR l:" << yylineno << "] " << msj << '\n';
    exit(0);
}

char* Helpers::toChar(std::string s )
{
    char* n = new char[s.size() + 1];
    strcpy(n, s.c_str());
    return n;
}
