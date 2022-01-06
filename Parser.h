/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 32 "Parser.y" /* yacc.c:1909  */

	#include "CurrentValue.h"

#line 48 "Parser.h" /* yacc.c:1909  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ID = 258,
    NR = 259,
    TYPE = 260,
    VOID = 261,
    PERIOD = 262,
    COMMA = 263,
    LEFT_BRACKET = 264,
    RIGHT_BRACKET = 265,
    FUNCTION = 266,
    RETURN = 267,
    BREAK = 268,
    INTERFACE = 269,
    ASSIGN = 270,
    IF = 271,
    WHILE = 272,
    FOR = 273,
    LOOP = 274,
    OBJ = 275,
    PLUS = 276,
    MINUS = 277,
    MUL = 278,
    DIV = 279,
    LEFT = 280,
    RIGHT = 281,
    ARRLEFT = 282,
    ARRRIGHT = 283,
    AND = 284,
    LESS = 285,
    LEQ = 286,
    EQL = 287,
    GREATER = 288,
    GREQ = 289,
    OR = 290,
    NOT = 291,
    NEQ = 292,
    SEMICOLON = 293,
    COLON = 294
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 37 "Parser.y" /* yacc.c:1909  */

	int number;
	char * string;
	currentValue current_value;

#line 106 "Parser.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */
