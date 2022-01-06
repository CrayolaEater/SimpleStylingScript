%defines "Parser.h"

%{

#include<iostream>
#include<string>
#include<cstdio>
#include "Parser.h"
#include "ScopeStack.h"
#include "Helpers.h"
#include "SymbolTable.h"
#include "CurrentValue.h"
extern int yylex();
extern void yyerror(const char*);
Helpers help;
SymbolTable currentTable;
extern int yylineno;

currentValue createValue(char * type, char * value)
{
	currentValue c;
	c.type = type;
	c.value = value;
	return c;
}

std::string value;

%}

%code requires
{
	#include "CurrentValue.h"
}

%union
{
	int number;
	char * string;
	currentValue current_value;
}

%token<string> ID NR TYPE VOID
%token PERIOD COMMA LEFT_BRACKET RIGHT_BRACKET FUNCTION RETURN BREAK INTERFACE
%token ASSIGN IF WHILE FOR LOOP OBJ PLUS MINUS MUL DIV LEFT RIGHT ARRLEFT ARRRIGHT
%token AND LESS LEQ EQL GREATER GREQ OR NOT NEQ SEMICOLON COLON
%left<string> AND OR
%left<string> LESS LEQ EQL GREATER GREQ NEQ
%left<string> PLUS MINUS
%left<string> MUL DIV
%right<string> NOT
%left LEFT RIGHT ARRLEFT ARRRIGHT
%start program

%destructor { delete $$ ; } <string>
%%

program: %empty
	   | block 
	   ;
block: statement
	 | block statement
	 ;
instructions: declaration
			| RETURN expression
			| BREAK
			;

declaration: declarationList COLON TYPE {currentTable.checkDeclarationVariable($<string>1, yylineno); currentTable.AddVariable(VariableTable($<string>1, "0", $<string>3));}
		   | declarationList COLON ID 
		   | declarationList COLON TYPE ASSIGN expression {currentTable.checkDeclarationVariable($<string>1, yylineno); currentTable.AddVariable(VariableTable($<string>1, $<current_value>5.value, $<string>3));}
		   | declarationList COLON ID ASSIGN expression
		   | declarationList COLON TYPE ARRLEFT ARRRIGHT
		   | declarationList COLON ID ARRLEFT ARRRIGHT
		   | declarationList COLON TYPE ARRLEFT ARRRIGHT ASSIGN ARRLEFT arrayValues ARRRIGHT
		   | declarationList COLON ID ARRLEFT ARRRIGHT ASSIGN ARRLEFT arrayValues ARRRIGHT
		   ;

arrayValues: expression
		   | expression COMMA arrayValues
		   ;

declarationList: ID {$<string>$ = $<string>1;}
			   | ID COMMA declarationList
			   ;

expression: ID {currentTable.checkNotDeclarationVariable($<string>1, yylineno); $<current_value>$ = currentTable.getVariableValue($<string>1);}
	     | NR {$<current_value>$ = createValue(help.isFloat($<string>1) ? (char *)"float" : (char *)"int", $<string>1);}
		 | ID ARRLEFT NR ARRRIGHT
		 | expression MINUS expression {help.checkTypes($<current_value>1, $<current_value>3, yylineno); $<current_value>$ = help.executeOperation($<current_value>1, $<current_value>3, $<string>2, yylineno);}
		 | expression PLUS expression {help.checkTypes($<current_value>1, $<current_value>3, yylineno); $<current_value>$ = help.executeOperation($<current_value>1, $<current_value>3, $<string>2, yylineno);}
		 | expression MUL expression {help.checkTypes($<current_value>1, $<current_value>3, yylineno); $<current_value>$ = help.executeOperation($<current_value>1, $<current_value>3, $<string>2, yylineno);}
		 | expression DIV expression {help.checkTypes($<current_value>1, $<current_value>3, yylineno); $<current_value>$ = help.executeOperation($<current_value>1, $<current_value>3, $<string>2, yylineno);}
		 | LEFT expression RIGHT {$<current_value>$ = $<current_value>2;}
		 | expression GREATER expression {help.checkTypes($<current_value>1, $<current_value>3, yylineno); $<current_value>$ = help.executeOperation($<current_value>1, $<current_value>3, $<string>2, yylineno);}
		 | expression LESS expression {help.checkTypes($<current_value>1, $<current_value>3, yylineno); $<current_value>$ = help.executeOperation($<current_value>1, $<current_value>3, $<string>2, yylineno);}
		 | expression EQL expression {help.checkTypes($<current_value>1, $<current_value>3, yylineno); $<current_value>$ = help.executeOperation($<current_value>1, $<current_value>3, $<string>2, yylineno);}
		 | expression LEQ expression {help.checkTypes($<current_value>1, $<current_value>3, yylineno); $<current_value>$ = help.executeOperation($<current_value>1, $<current_value>3, $<string>2, yylineno);}
		 | expression GREQ expression {help.checkTypes($<current_value>1, $<current_value>3, yylineno); $<current_value>$ = help.executeOperation($<current_value>1, $<current_value>3, $<string>2, yylineno);}
		 | expression NEQ expression {help.checkTypes($<current_value>1, $<current_value>3, yylineno); $<current_value>$ = help.executeOperation($<current_value>1, $<current_value>3, $<string>2, yylineno);}
		 | expression OR expression {help.checkTypes($<current_value>1, $<current_value>3, yylineno); $<current_value>$ = help.executeOperation($<current_value>1, $<current_value>3, $<string>2, yylineno);}
		 | expression AND expression {help.checkTypes($<current_value>1, $<current_value>3, yylineno); $<current_value>$ = help.executeOperation($<current_value>1, $<current_value>3, $<string>2, yylineno);}
		 | NOT expression { $<current_value>$ = help.executeOperation($<current_value>2, $<current_value>2, $<string>1, yylineno);}
		 ;	

statement: instructions SEMICOLON
		 | functionBlock
		 | functionCall
		 | interfaceBlock
		 | IF LEFT expression RIGHT LEFT_BRACKET block RIGHT_BRACKET
		 | WHILE LEFT expression RIGHT LEFT_BRACKET block RIGHT_BRACKET 
		 ;

functionBlock: FUNCTION ID LEFT functionDeclarationList RIGHT COLON functionType LEFT_BRACKET block RIGHT_BRACKET {currentTable.checkFunctionDeclaration($<string>2, $<string>7, value, yylineno); currentTable.AddFunction(FunctionsTable($<string>7, $<string>2, value)); value = ""; }
			 | FUNCTION ID LEFT functionDeclarationList RIGHT COLON functionType LEFT_BRACKET RIGHT_BRACKET {currentTable.checkFunctionDeclaration($<string>2, $<string>7, value, yylineno); currentTable.AddFunction(FunctionsTable($<string>7, $<string>2, value)); value = ""; }
			 | FUNCTION ID LEFT RIGHT COLON functionType LEFT_BRACKET block RIGHT_BRACKET
			 | FUNCTION ID LEFT RIGHT COLON functionType LEFT_BRACKET RIGHT_BRACKET
			 ;

functionType: ID
			| TYPE {$<string>$ = $<string>1;}
			| VOID {$<string>$ = $<string>1;}
			;

functionDeclarationList: functionDeclaration
					   | functionDeclaration COMMA functionDeclarationList
					   ;

functionCall: ID LEFT RIGHT SEMICOLON
			| ID LEFT functionCallParamList RIGHT SEMICOLON
			;

functionCallParamList: expression
					 | expression COMMA functionCallParamList
					 ;

functionDeclaration: ID COLON TYPE { value += value.size() > 0 ? "," + std::string($<string>3) : std::string($<string>3);}
				   | ID COLON ID 
				   | ID COLON TYPE ARRLEFT ARRRIGHT { value += value.size() > 0 ? "," + std::string($<string>3) + "[]" : std::string($<string>3) + "[]";}
				   | ID COLON ID ARRLEFT ARRRIGHT
				   ;

interfaceBlock: INTERFACE ID LEFT_BRACKET interfaceDeclarationList RIGHT_BRACKET
			  ;

interfaceDeclarationList: interfaceDeclaration
						| interfaceDeclaration interfaceDeclarationList
						;

interfaceDeclaration: ID COLON TYPE SEMICOLON
					| ID COLON ID SEMICOLON
					| ID COLON TYPE ARRLEFT ARRRIGHT SEMICOLON
					| ID COLON ID ARRLEFT ARRRIGHT SEMICOLON
					| ID LEFT functionDeclarationList RIGHT COLON functionType SEMICOLON
					| ID LEFT RIGHT COLON functionType SEMICOLON
					;