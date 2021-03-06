/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 3 "Parser.y" /* yacc.c:339  */


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


#line 94 "Parser.cpp" /* yacc.c:339  */

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "Parser.h".  */
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
#line 32 "Parser.y" /* yacc.c:355  */

	#include "CurrentValue.h"

#line 128 "Parser.cpp" /* yacc.c:355  */

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
#line 37 "Parser.y" /* yacc.c:355  */

	int number;
	char * string;
	currentValue current_value;

#line 186 "Parser.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 201 "Parser.cpp" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  28
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   275

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  18
/* YYNRULES -- Number of rules.  */
#define YYNRULES  69
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  160

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   294

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    58,    58,    59,    61,    62,    64,    65,    66,    69,
      70,    71,    72,    73,    74,    75,    76,    79,    80,    83,
      84,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   106,   107,
     108,   109,   110,   111,   114,   115,   116,   117,   120,   121,
     122,   125,   126,   129,   130,   133,   134,   137,   138,   139,
     140,   143,   146,   147,   150,   151,   152,   153,   154,   155
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "NR", "TYPE", "VOID", "PERIOD",
  "COMMA", "LEFT_BRACKET", "RIGHT_BRACKET", "FUNCTION", "RETURN", "BREAK",
  "INTERFACE", "ASSIGN", "IF", "WHILE", "FOR", "LOOP", "OBJ", "PLUS",
  "MINUS", "MUL", "DIV", "LEFT", "RIGHT", "ARRLEFT", "ARRRIGHT", "AND",
  "LESS", "LEQ", "EQL", "GREATER", "GREQ", "OR", "NOT", "NEQ", "SEMICOLON",
  "COLON", "$accept", "program", "block", "instructions", "declaration",
  "arrayValues", "declarationList", "expression", "statement",
  "functionBlock", "functionType", "functionDeclarationList",
  "functionCall", "functionCallParamList", "functionDeclaration",
  "interfaceBlock", "interfaceDeclarationList", "interfaceDeclaration", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294
};
# endif

#define YYPACT_NINF -133

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-133)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     258,    11,     7,    27,  -133,    25,   -11,     9,    56,   258,
       0,  -133,    61,  -133,  -133,  -133,  -133,   103,     1,    95,
      94,  -133,    27,    27,   137,   128,    27,    27,  -133,  -133,
    -133,    10,   131,  -133,   107,    46,   121,     3,   144,    81,
    -133,    27,    27,    27,    27,    27,    27,    27,    27,    27,
      27,    27,    27,   153,   101,   120,    38,    44,  -133,    27,
     124,   125,   126,   147,   155,   151,  -133,    50,    50,  -133,
    -133,   154,    68,    68,    68,    68,    68,   154,    68,   -17,
     170,   153,   172,   173,    27,   162,    27,   164,  -133,  -133,
      59,    55,   156,   180,  -133,     6,   114,  -133,  -133,   258,
     258,   137,   178,   137,   179,   177,   189,  -133,  -133,  -133,
     196,    55,  -133,   167,   181,   -20,    28,   186,   198,   190,
     191,   200,   201,   210,   221,    55,   192,   212,  -133,   213,
    -133,  -133,  -133,    27,    27,  -133,  -133,  -133,   222,   234,
     204,    55,   205,   214,   225,    64,   226,  -133,  -133,   246,
    -133,   217,  -133,  -133,  -133,    27,  -133,  -133,  -133,  -133
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,    19,     0,     0,     8,     0,     0,     0,     0,     3,
       0,     6,     0,     4,    39,    40,    41,     0,     0,     0,
      21,    22,     0,     0,     7,     0,     0,     0,     1,     5,
      38,     0,    19,    20,     0,    55,     0,     0,     0,     0,
      37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,     9,    53,     0,
       0,     0,     0,     0,    51,     0,    28,    25,    24,    26,
      27,    36,    30,    32,    31,    29,    33,    35,    34,     0,
       0,    62,     0,     0,     0,     0,     0,     0,    56,    54,
       0,     0,     0,     0,    23,     0,     0,    61,    63,     0,
       0,    12,    14,    11,    13,    58,    57,    48,    49,    50,
       0,     0,    52,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    65,     0,
      64,    42,    43,     0,     0,    60,    59,    47,     0,     0,
       0,     0,     0,     0,     0,    17,     0,    46,    45,     0,
      69,     0,    67,    66,    16,     0,    15,    44,    68,    18
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -133,  -133,   -88,  -133,  -133,  -132,   202,    -2,    -9,  -133,
    -108,    33,  -133,   206,  -133,  -133,   183,  -133
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,     9,    10,    11,   144,    12,   145,    13,    14,
     110,    63,    15,    36,    64,    16,    80,    81
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      29,    24,   146,   124,    20,    21,    61,   127,    95,    61,
      19,   117,   118,    56,    26,    57,    35,   140,   128,    17,
      39,    40,    96,   159,    54,    55,    22,    34,    25,    62,
      20,    21,   113,   151,    27,   138,    18,    23,    30,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,   149,    22,    84,    59,   129,    28,    35,   107,    86,
     108,   109,   105,    23,   106,    85,   130,    41,    42,    43,
      44,    87,   155,    43,    44,    45,    46,    47,    48,    49,
      50,    51,   101,    52,   103,    41,    42,    43,    44,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      31,    52,    41,    42,    43,    44,    32,    66,    29,    29,
      45,    46,    47,    48,    49,    50,    51,   115,    52,   116,
      37,    38,    41,    42,    43,    44,   112,    82,   114,    29,
      45,    46,    47,    48,    49,    50,    51,    53,    52,    17,
      29,    41,    42,    43,    44,    58,    83,    60,    65,    45,
      46,    47,    48,    49,    50,    51,    79,    52,    41,    42,
      43,    44,    89,    93,    90,    91,    45,    46,    47,    48,
      49,    50,    51,    92,    52,    41,    42,    43,    44,    94,
      97,    99,   100,    61,    46,    47,    48,    49,    50,     1,
     102,    52,   104,   119,   120,   111,   131,     2,     3,     4,
       5,     1,     6,     7,   121,   123,   125,   126,   132,     2,
       3,     4,     5,     1,     6,     7,   122,   133,   134,    33,
     137,     2,     3,     4,     5,     1,     6,     7,   135,   136,
     139,   141,   147,     2,     3,     4,     5,     1,     6,     7,
     142,   143,   150,   152,   148,     2,     3,     4,     5,     1,
       6,     7,   153,   154,   156,   158,   157,     2,     3,     4,
       5,     1,     6,     7,    98,    88,     0,     0,     0,     2,
       3,     4,     5,     0,     6,     7
};

static const yytype_int16 yycheck[] =
{
       9,     3,   134,   111,     3,     4,     3,    27,    25,     3,
       3,    99,   100,     3,    25,     5,    18,   125,    38,     8,
      22,    23,    39,   155,    26,    27,    25,    26,     3,    26,
       3,     4,    26,   141,    25,   123,    25,    36,    38,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,   139,    25,    15,     8,    27,     0,    59,     3,    15,
       5,     6,     3,    36,     5,    27,    38,    21,    22,    23,
      24,    27,     8,    23,    24,    29,    30,    31,    32,    33,
      34,    35,    84,    37,    86,    21,    22,    23,    24,    21,
      22,    23,    24,    29,    30,    31,    32,    33,    34,    35,
      39,    37,    21,    22,    23,    24,     3,    26,   117,   118,
      29,    30,    31,    32,    33,    34,    35,     3,    37,     5,
      25,    27,    21,    22,    23,    24,    93,    26,    95,   138,
      29,    30,    31,    32,    33,    34,    35,     9,    37,     8,
     149,    21,    22,    23,    24,    38,    26,    26,     4,    29,
      30,    31,    32,    33,    34,    35,     3,    37,    21,    22,
      23,    24,    38,     8,    39,    39,    29,    30,    31,    32,
      33,    34,    35,    26,    37,    21,    22,    23,    24,    28,
      10,     9,     9,     3,    30,    31,    32,    33,    34,     3,
      28,    37,    28,    15,    15,    39,    10,    11,    12,    13,
      14,     3,    16,    17,    27,     9,    39,    26,    10,    11,
      12,    13,    14,     3,    16,    17,    27,    27,    27,    17,
      10,    11,    12,    13,    14,     3,    16,    17,    28,    28,
       9,    39,    10,    11,    12,    13,    14,     3,    16,    17,
      28,    28,    38,    38,    10,    11,    12,    13,    14,     3,
      16,    17,    38,    28,    28,    38,    10,    11,    12,    13,
      14,     3,    16,    17,    81,    59,    -1,    -1,    -1,    11,
      12,    13,    14,    -1,    16,    17
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    11,    12,    13,    14,    16,    17,    41,    42,
      43,    44,    46,    48,    49,    52,    55,     8,    25,     3,
       3,     4,    25,    36,    47,     3,    25,    25,     0,    48,
      38,    39,     3,    46,    26,    47,    53,    25,    27,    47,
      47,    21,    22,    23,    24,    29,    30,    31,    32,    33,
      34,    35,    37,     9,    47,    47,     3,     5,    38,     8,
      26,     3,    26,    51,    54,     4,    26,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    47,     3,
      56,    57,    26,    26,    15,    27,    15,    27,    53,    38,
      39,    39,    26,     8,    28,    25,    39,    10,    56,     9,
       9,    47,    28,    47,    28,     3,     5,     3,     5,     6,
      50,    39,    51,    26,    51,     3,     5,    42,    42,    15,
      15,    27,    27,     9,    50,    39,    26,    27,    38,    27,
      38,    10,    10,    27,    27,    28,    28,    10,    42,     9,
      50,    39,    28,    28,    45,    47,    45,    10,    10,    42,
      38,    50,    38,    38,    28,     8,    28,    10,    38,    45
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    40,    41,    41,    42,    42,    43,    43,    43,    44,
      44,    44,    44,    44,    44,    44,    44,    45,    45,    46,
      46,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    48,    48,
      48,    48,    48,    48,    49,    49,    49,    49,    50,    50,
      50,    51,    51,    52,    52,    53,    53,    54,    54,    54,
      54,    55,    56,    56,    57,    57,    57,    57,    57,    57
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     1,     2,     1,     2,     1,     3,
       3,     5,     5,     5,     5,     9,     9,     1,     3,     1,
       3,     1,     1,     4,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     1,
       1,     1,     7,     7,    10,     9,     9,     8,     1,     1,
       1,     1,     3,     4,     5,     1,     3,     3,     3,     5,
       5,     5,     1,     2,     4,     4,     6,     6,     7,     6
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
          case 3: /* ID  */
#line 55 "Parser.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).string) ; }
#line 1128 "Parser.cpp" /* yacc.c:1257  */
        break;

    case 4: /* NR  */
#line 55 "Parser.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).string) ; }
#line 1134 "Parser.cpp" /* yacc.c:1257  */
        break;

    case 5: /* TYPE  */
#line 55 "Parser.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).string) ; }
#line 1140 "Parser.cpp" /* yacc.c:1257  */
        break;

    case 6: /* VOID  */
#line 55 "Parser.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).string) ; }
#line 1146 "Parser.cpp" /* yacc.c:1257  */
        break;

    case 21: /* PLUS  */
#line 55 "Parser.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).string) ; }
#line 1152 "Parser.cpp" /* yacc.c:1257  */
        break;

    case 22: /* MINUS  */
#line 55 "Parser.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).string) ; }
#line 1158 "Parser.cpp" /* yacc.c:1257  */
        break;

    case 23: /* MUL  */
#line 55 "Parser.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).string) ; }
#line 1164 "Parser.cpp" /* yacc.c:1257  */
        break;

    case 24: /* DIV  */
#line 55 "Parser.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).string) ; }
#line 1170 "Parser.cpp" /* yacc.c:1257  */
        break;

    case 29: /* AND  */
#line 55 "Parser.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).string) ; }
#line 1176 "Parser.cpp" /* yacc.c:1257  */
        break;

    case 30: /* LESS  */
#line 55 "Parser.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).string) ; }
#line 1182 "Parser.cpp" /* yacc.c:1257  */
        break;

    case 31: /* LEQ  */
#line 55 "Parser.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).string) ; }
#line 1188 "Parser.cpp" /* yacc.c:1257  */
        break;

    case 32: /* EQL  */
#line 55 "Parser.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).string) ; }
#line 1194 "Parser.cpp" /* yacc.c:1257  */
        break;

    case 33: /* GREATER  */
#line 55 "Parser.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).string) ; }
#line 1200 "Parser.cpp" /* yacc.c:1257  */
        break;

    case 34: /* GREQ  */
#line 55 "Parser.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).string) ; }
#line 1206 "Parser.cpp" /* yacc.c:1257  */
        break;

    case 35: /* OR  */
#line 55 "Parser.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).string) ; }
#line 1212 "Parser.cpp" /* yacc.c:1257  */
        break;

    case 36: /* NOT  */
#line 55 "Parser.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).string) ; }
#line 1218 "Parser.cpp" /* yacc.c:1257  */
        break;

    case 37: /* NEQ  */
#line 55 "Parser.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).string) ; }
#line 1224 "Parser.cpp" /* yacc.c:1257  */
        break;


      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 9:
#line 69 "Parser.y" /* yacc.c:1646  */
    {currentTable.checkDeclarationVariable((yyvsp[-2].string), yylineno); currentTable.AddVariable(VariableTable((yyvsp[-2].string), "0", (yyvsp[0].string)));}
#line 1488 "Parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 71 "Parser.y" /* yacc.c:1646  */
    {currentTable.checkDeclarationVariable((yyvsp[-4].string), yylineno); currentTable.AddVariable(VariableTable((yyvsp[-4].string), (yyvsp[0].current_value).value, (yyvsp[-2].string)));}
#line 1494 "Parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 83 "Parser.y" /* yacc.c:1646  */
    {(yyval.string) = (yyvsp[0].string);}
#line 1500 "Parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 87 "Parser.y" /* yacc.c:1646  */
    {currentTable.checkNotDeclarationVariable((yyvsp[0].string), yylineno); (yyval.current_value) = currentTable.getVariableValue((yyvsp[0].string));}
#line 1506 "Parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 88 "Parser.y" /* yacc.c:1646  */
    {(yyval.current_value) = createValue(help.isFloat((yyvsp[0].string)) ? (char *)"float" : (char *)"int", (yyvsp[0].string));}
#line 1512 "Parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 90 "Parser.y" /* yacc.c:1646  */
    {help.checkTypes((yyvsp[-2].current_value), (yyvsp[0].current_value), yylineno); (yyval.current_value) = help.executeOperation((yyvsp[-2].current_value), (yyvsp[0].current_value), (yyvsp[-1].string), yylineno);}
#line 1518 "Parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 91 "Parser.y" /* yacc.c:1646  */
    {help.checkTypes((yyvsp[-2].current_value), (yyvsp[0].current_value), yylineno); (yyval.current_value) = help.executeOperation((yyvsp[-2].current_value), (yyvsp[0].current_value), (yyvsp[-1].string), yylineno);}
#line 1524 "Parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 92 "Parser.y" /* yacc.c:1646  */
    {help.checkTypes((yyvsp[-2].current_value), (yyvsp[0].current_value), yylineno); (yyval.current_value) = help.executeOperation((yyvsp[-2].current_value), (yyvsp[0].current_value), (yyvsp[-1].string), yylineno);}
#line 1530 "Parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 93 "Parser.y" /* yacc.c:1646  */
    {help.checkTypes((yyvsp[-2].current_value), (yyvsp[0].current_value), yylineno); (yyval.current_value) = help.executeOperation((yyvsp[-2].current_value), (yyvsp[0].current_value), (yyvsp[-1].string), yylineno);}
#line 1536 "Parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 94 "Parser.y" /* yacc.c:1646  */
    {(yyval.current_value) = (yyvsp[-1].current_value);}
#line 1542 "Parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 95 "Parser.y" /* yacc.c:1646  */
    {help.checkTypes((yyvsp[-2].current_value), (yyvsp[0].current_value), yylineno); (yyval.current_value) = help.executeOperation((yyvsp[-2].current_value), (yyvsp[0].current_value), (yyvsp[-1].string), yylineno);}
#line 1548 "Parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 96 "Parser.y" /* yacc.c:1646  */
    {help.checkTypes((yyvsp[-2].current_value), (yyvsp[0].current_value), yylineno); (yyval.current_value) = help.executeOperation((yyvsp[-2].current_value), (yyvsp[0].current_value), (yyvsp[-1].string), yylineno);}
#line 1554 "Parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 97 "Parser.y" /* yacc.c:1646  */
    {help.checkTypes((yyvsp[-2].current_value), (yyvsp[0].current_value), yylineno); (yyval.current_value) = help.executeOperation((yyvsp[-2].current_value), (yyvsp[0].current_value), (yyvsp[-1].string), yylineno);}
#line 1560 "Parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 98 "Parser.y" /* yacc.c:1646  */
    {help.checkTypes((yyvsp[-2].current_value), (yyvsp[0].current_value), yylineno); (yyval.current_value) = help.executeOperation((yyvsp[-2].current_value), (yyvsp[0].current_value), (yyvsp[-1].string), yylineno);}
#line 1566 "Parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 99 "Parser.y" /* yacc.c:1646  */
    {help.checkTypes((yyvsp[-2].current_value), (yyvsp[0].current_value), yylineno); (yyval.current_value) = help.executeOperation((yyvsp[-2].current_value), (yyvsp[0].current_value), (yyvsp[-1].string), yylineno);}
#line 1572 "Parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 100 "Parser.y" /* yacc.c:1646  */
    {help.checkTypes((yyvsp[-2].current_value), (yyvsp[0].current_value), yylineno); (yyval.current_value) = help.executeOperation((yyvsp[-2].current_value), (yyvsp[0].current_value), (yyvsp[-1].string), yylineno);}
#line 1578 "Parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 101 "Parser.y" /* yacc.c:1646  */
    {help.checkTypes((yyvsp[-2].current_value), (yyvsp[0].current_value), yylineno); (yyval.current_value) = help.executeOperation((yyvsp[-2].current_value), (yyvsp[0].current_value), (yyvsp[-1].string), yylineno);}
#line 1584 "Parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 102 "Parser.y" /* yacc.c:1646  */
    {help.checkTypes((yyvsp[-2].current_value), (yyvsp[0].current_value), yylineno); (yyval.current_value) = help.executeOperation((yyvsp[-2].current_value), (yyvsp[0].current_value), (yyvsp[-1].string), yylineno);}
#line 1590 "Parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 103 "Parser.y" /* yacc.c:1646  */
    { (yyval.current_value) = help.executeOperation((yyvsp[0].current_value), (yyvsp[0].current_value), (yyvsp[-1].string), yylineno);}
#line 1596 "Parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 114 "Parser.y" /* yacc.c:1646  */
    {currentTable.checkFunctionDeclaration((yyvsp[-8].string), (yyvsp[-3].string), value, yylineno); currentTable.AddFunction(FunctionsTable((yyvsp[-3].string), (yyvsp[-8].string), value)); value = ""; }
#line 1602 "Parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 115 "Parser.y" /* yacc.c:1646  */
    {currentTable.checkFunctionDeclaration((yyvsp[-7].string), (yyvsp[-2].string), value, yylineno); currentTable.AddFunction(FunctionsTable((yyvsp[-2].string), (yyvsp[-7].string), value)); value = ""; }
#line 1608 "Parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 121 "Parser.y" /* yacc.c:1646  */
    {(yyval.string) = (yyvsp[0].string);}
#line 1614 "Parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 122 "Parser.y" /* yacc.c:1646  */
    {(yyval.string) = (yyvsp[0].string);}
#line 1620 "Parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 137 "Parser.y" /* yacc.c:1646  */
    { value += value.size() > 0 ? "," + std::string((yyvsp[0].string)) : std::string((yyvsp[0].string));}
#line 1626 "Parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 139 "Parser.y" /* yacc.c:1646  */
    { value += value.size() > 0 ? "," + std::string((yyvsp[-2].string)) + "[]" : std::string((yyvsp[-2].string)) + "[]";}
#line 1632 "Parser.cpp" /* yacc.c:1646  */
    break;


#line 1636 "Parser.cpp" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
