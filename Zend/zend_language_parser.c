/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse zendparse
#define yylex   zendlex
#define yyerror zenderror
#define yylval  zendlval
#define yychar  zendchar
#define yydebug zenddebug
#define yynerrs zendnerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     END = 0,
     T_REQUIRE_ONCE = 258,
     T_REQUIRE = 259,
     T_EVAL = 260,
     T_INCLUDE_ONCE = 261,
     T_INCLUDE = 262,
     T_LOGICAL_OR = 263,
     T_LOGICAL_XOR = 264,
     T_LOGICAL_AND = 265,
     T_PRINT = 266,
     T_SR_EQUAL = 267,
     T_SL_EQUAL = 268,
     T_XOR_EQUAL = 269,
     T_OR_EQUAL = 270,
     T_AND_EQUAL = 271,
     T_MOD_EQUAL = 272,
     T_CONCAT_EQUAL = 273,
     T_DIV_EQUAL = 274,
     T_MUL_EQUAL = 275,
     T_MINUS_EQUAL = 276,
     T_PLUS_EQUAL = 277,
     T_BOOLEAN_OR = 278,
     T_BOOLEAN_AND = 279,
     T_IS_NOT_IDENTICAL = 280,
     T_IS_IDENTICAL = 281,
     T_IS_NOT_EQUAL = 282,
     T_IS_EQUAL = 283,
     T_IS_GREATER_OR_EQUAL = 284,
     T_IS_SMALLER_OR_EQUAL = 285,
     T_SR = 286,
     T_SL = 287,
     T_INSTANCEOF = 288,
     T_UNSET_CAST = 289,
     T_BOOL_CAST = 290,
     T_OBJECT_CAST = 291,
     T_ARRAY_CAST = 292,
     T_STRING_CAST = 293,
     T_DOUBLE_CAST = 294,
     T_INT_CAST = 295,
     T_DEC = 296,
     T_INC = 297,
     T_CLONE = 298,
     T_NEW = 299,
     T_EXIT = 300,
     T_IF = 301,
     T_ELSEIF = 302,
     T_ELSE = 303,
     T_ENDIF = 304,
     T_LNUMBER = 305,
     T_DNUMBER = 306,
     T_STRING = 307,
     T_STRING_VARNAME = 308,
     T_VARIABLE = 309,
     T_NUM_STRING = 310,
     T_INLINE_HTML = 311,
     T_CHARACTER = 312,
     T_BAD_CHARACTER = 313,
     T_ENCAPSED_AND_WHITESPACE = 314,
     T_CONSTANT_ENCAPSED_STRING = 315,
     T_ECHO = 316,
     T_DO = 317,
     T_WHILE = 318,
     T_ENDWHILE = 319,
     T_FOR = 320,
     T_ENDFOR = 321,
     T_FOREACH = 322,
     T_ENDFOREACH = 323,
     T_DECLARE = 324,
     T_ENDDECLARE = 325,
     T_AS = 326,
     T_SWITCH = 327,
     T_ENDSWITCH = 328,
     T_CASE = 329,
     T_DEFAULT = 330,
     T_BREAK = 331,
     T_CONTINUE = 332,
     T_GOTO = 333,
     T_FUNCTION = 334,
     T_CONST = 335,
     T_RETURN = 336,
     T_TRY = 337,
     T_CATCH = 338,
     T_THROW = 339,
     T_USE = 340,
     T_INSTEADOF = 341,
     T_GLOBAL = 342,
     T_PUBLIC = 343,
     T_PROTECTED = 344,
     T_PRIVATE = 345,
     T_FINAL = 346,
     T_ABSTRACT = 347,
     T_STATIC = 348,
     T_VAR = 349,
     T_UNSET = 350,
     T_ISSET = 351,
     T_EMPTY = 352,
     T_HALT_COMPILER = 353,
     T_CLASS = 354,
     T_TRAIT = 355,
     T_INTERFACE = 356,
     T_EXTENDS = 357,
     T_IMPLEMENTS = 358,
     T_OBJECT_OPERATOR = 359,
     T_DOUBLE_ARROW = 360,
     T_LIST = 361,
     T_ARRAY = 362,
     T_CALLABLE = 363,
     T_CLASS_C = 364,
     T_TRAIT_C = 365,
     T_METHOD_C = 366,
     T_FUNC_C = 367,
     T_LINE = 368,
     T_FILE = 369,
     T_COMMENT = 370,
     T_DOC_COMMENT = 371,
     T_OPEN_TAG = 372,
     T_OPEN_TAG_WITH_ECHO = 373,
     T_CLOSE_TAG = 374,
     T_WHITESPACE = 375,
     T_START_HEREDOC = 376,
     T_END_HEREDOC = 377,
     T_DOLLAR_OPEN_CURLY_BRACES = 378,
     T_CURLY_OPEN = 379,
     T_PAAMAYIM_NEKUDOTAYIM = 380,
     T_NAMESPACE = 381,
     T_NS_C = 382,
     T_DIR = 383,
     T_NS_SEPARATOR = 384
   };
#endif
/* Tokens.  */
#define END 0
#define T_REQUIRE_ONCE 258
#define T_REQUIRE 259
#define T_EVAL 260
#define T_INCLUDE_ONCE 261
#define T_INCLUDE 262
#define T_LOGICAL_OR 263
#define T_LOGICAL_XOR 264
#define T_LOGICAL_AND 265
#define T_PRINT 266
#define T_SR_EQUAL 267
#define T_SL_EQUAL 268
#define T_XOR_EQUAL 269
#define T_OR_EQUAL 270
#define T_AND_EQUAL 271
#define T_MOD_EQUAL 272
#define T_CONCAT_EQUAL 273
#define T_DIV_EQUAL 274
#define T_MUL_EQUAL 275
#define T_MINUS_EQUAL 276
#define T_PLUS_EQUAL 277
#define T_BOOLEAN_OR 278
#define T_BOOLEAN_AND 279
#define T_IS_NOT_IDENTICAL 280
#define T_IS_IDENTICAL 281
#define T_IS_NOT_EQUAL 282
#define T_IS_EQUAL 283
#define T_IS_GREATER_OR_EQUAL 284
#define T_IS_SMALLER_OR_EQUAL 285
#define T_SR 286
#define T_SL 287
#define T_INSTANCEOF 288
#define T_UNSET_CAST 289
#define T_BOOL_CAST 290
#define T_OBJECT_CAST 291
#define T_ARRAY_CAST 292
#define T_STRING_CAST 293
#define T_DOUBLE_CAST 294
#define T_INT_CAST 295
#define T_DEC 296
#define T_INC 297
#define T_CLONE 298
#define T_NEW 299
#define T_EXIT 300
#define T_IF 301
#define T_ELSEIF 302
#define T_ELSE 303
#define T_ENDIF 304
#define T_LNUMBER 305
#define T_DNUMBER 306
#define T_STRING 307
#define T_STRING_VARNAME 308
#define T_VARIABLE 309
#define T_NUM_STRING 310
#define T_INLINE_HTML 311
#define T_CHARACTER 312
#define T_BAD_CHARACTER 313
#define T_ENCAPSED_AND_WHITESPACE 314
#define T_CONSTANT_ENCAPSED_STRING 315
#define T_ECHO 316
#define T_DO 317
#define T_WHILE 318
#define T_ENDWHILE 319
#define T_FOR 320
#define T_ENDFOR 321
#define T_FOREACH 322
#define T_ENDFOREACH 323
#define T_DECLARE 324
#define T_ENDDECLARE 325
#define T_AS 326
#define T_SWITCH 327
#define T_ENDSWITCH 328
#define T_CASE 329
#define T_DEFAULT 330
#define T_BREAK 331
#define T_CONTINUE 332
#define T_GOTO 333
#define T_FUNCTION 334
#define T_CONST 335
#define T_RETURN 336
#define T_TRY 337
#define T_CATCH 338
#define T_THROW 339
#define T_USE 340
#define T_INSTEADOF 341
#define T_GLOBAL 342
#define T_PUBLIC 343
#define T_PROTECTED 344
#define T_PRIVATE 345
#define T_FINAL 346
#define T_ABSTRACT 347
#define T_STATIC 348
#define T_VAR 349
#define T_UNSET 350
#define T_ISSET 351
#define T_EMPTY 352
#define T_HALT_COMPILER 353
#define T_CLASS 354
#define T_TRAIT 355
#define T_INTERFACE 356
#define T_EXTENDS 357
#define T_IMPLEMENTS 358
#define T_OBJECT_OPERATOR 359
#define T_DOUBLE_ARROW 360
#define T_LIST 361
#define T_ARRAY 362
#define T_CALLABLE 363
#define T_CLASS_C 364
#define T_TRAIT_C 365
#define T_METHOD_C 366
#define T_FUNC_C 367
#define T_LINE 368
#define T_FILE 369
#define T_COMMENT 370
#define T_DOC_COMMENT 371
#define T_OPEN_TAG 372
#define T_OPEN_TAG_WITH_ECHO 373
#define T_CLOSE_TAG 374
#define T_WHITESPACE 375
#define T_START_HEREDOC 376
#define T_END_HEREDOC 377
#define T_DOLLAR_OPEN_CURLY_BRACES 378
#define T_CURLY_OPEN 379
#define T_PAAMAYIM_NEKUDOTAYIM 380
#define T_NAMESPACE 381
#define T_NS_C 382
#define T_DIR 383
#define T_NS_SEPARATOR 384




/* Copy the first part of user declarations.  */


/*
   +----------------------------------------------------------------------+
   | Zend Engine                                                          |
   +----------------------------------------------------------------------+
   | Copyright (c) 1998-2011 Zend Technologies Ltd. (http://www.zend.com) |
   +----------------------------------------------------------------------+
   | This source file is subject to version 2.00 of the Zend license,     |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.zend.com/license/2_00.txt.                                |
   | If you did not receive a copy of the Zend license and are unable to  |
   | obtain it through the world-wide-web, please send a note to          |
   | license@zend.com so we can mail you a copy immediately.              |
   +----------------------------------------------------------------------+
   | Authors: Andi Gutmans <andi@zend.com>                                |
   |          Zeev Suraski <zeev@zend.com>                                |
   +----------------------------------------------------------------------+
*/

/* $Id: zend_language_parser.y 315018 2011-08-16 12:13:35Z felipe $ */

/*
 * LALR shift/reduce conflicts and how they are resolved:
 *
 * - 2 shift/reduce conflicts due to the dangling elseif/else ambiguity. Solved by shift.
 *
 */


#include "zend_compile.h"
#include "zend.h"
#include "zend_list.h"
#include "zend_globals.h"
#include "zend_API.h"
#include "zend_constants.h"

#define YYSIZE_T size_t
#define yytnamerr zend_yytnamerr
static YYSIZE_T zend_yytnamerr(char*, const char*);

#define YYERROR_VERBOSE
#define YYSTYPE znode
#ifdef ZTS
# define YYPARSE_PARAM tsrm_ls
# define YYLEX_PARAM tsrm_ls
#endif




/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */


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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5416

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  158
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  198
/* YYNRULES -- Number of rules.  */
#define YYNRULES  501
/* YYNRULES -- Number of states.  */
#define YYNSTATES  963

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   384

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,   157,     2,   154,    47,    31,     2,
     149,   150,    45,    42,     8,    43,    44,    46,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    26,   151,
      36,    13,    37,    25,    51,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,   155,    30,     2,   156,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   152,    29,   153,    50,     2,     2,     2,
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
       5,     6,     7,     9,    10,    11,    12,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    27,    28,
      32,    33,    34,    35,    38,    39,    40,    41,    49,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,    10,    11,    13,    17,    19,
      21,    23,    28,    32,    33,    40,    41,    47,    51,    54,
      58,    60,    62,    66,    69,    74,    80,    85,    86,    90,
      91,    93,    95,    97,   102,   104,   107,   111,   112,   113,
     123,   124,   125,   138,   139,   140,   148,   149,   150,   160,
     161,   162,   163,   176,   177,   184,   187,   191,   194,   198,
     201,   205,   209,   213,   217,   221,   223,   226,   232,   233,
     234,   245,   246,   247,   258,   259,   266,   268,   269,   270,
     271,   272,   273,   292,   296,   300,   302,   303,   305,   308,
     309,   310,   321,   323,   327,   329,   331,   333,   334,   336,
     337,   348,   349,   358,   359,   367,   369,   372,   374,   377,
     378,   381,   383,   384,   387,   388,   391,   393,   397,   398,
     401,   403,   406,   408,   413,   415,   420,   422,   427,   431,
     437,   441,   446,   451,   457,   458,   459,   466,   467,   473,
     475,   477,   479,   484,   485,   486,   494,   495,   496,   505,
     506,   509,   510,   514,   516,   517,   520,   524,   530,   535,
     540,   546,   554,   561,   562,   564,   566,   568,   570,   571,
     573,   575,   578,   582,   586,   591,   595,   597,   599,   602,
     607,   611,   617,   619,   623,   626,   627,   628,   633,   636,
     638,   639,   649,   653,   655,   659,   661,   665,   666,   668,
     670,   673,   676,   679,   683,   685,   689,   691,   693,   697,
     702,   706,   707,   709,   711,   715,   717,   719,   720,   722,
     724,   727,   729,   731,   733,   735,   737,   739,   743,   749,
     751,   755,   761,   766,   770,   772,   773,   775,   776,   781,
     783,   784,   792,   796,   801,   802,   810,   811,   816,   819,
     823,   827,   831,   835,   839,   843,   847,   851,   855,   859,
     863,   866,   869,   872,   875,   876,   881,   882,   887,   888,
     893,   894,   899,   903,   907,   911,   915,   919,   923,   927,
     931,   935,   939,   943,   947,   950,   953,   956,   959,   963,
     967,   971,   975,   979,   983,   987,   991,   995,   999,  1000,
    1001,  1009,  1010,  1016,  1018,  1021,  1024,  1027,  1030,  1033,
    1036,  1039,  1042,  1043,  1047,  1049,  1054,  1058,  1062,  1065,
    1066,  1077,  1078,  1090,  1092,  1093,  1098,  1102,  1107,  1109,
    1112,  1113,  1119,  1120,  1128,  1129,  1136,  1137,  1145,  1146,
    1154,  1155,  1163,  1164,  1172,  1173,  1179,  1181,  1183,  1187,
    1190,  1192,  1196,  1199,  1201,  1203,  1204,  1205,  1212,  1214,
    1217,  1218,  1221,  1222,  1225,  1229,  1230,  1232,  1234,  1235,
    1239,  1241,  1243,  1245,  1247,  1249,  1251,  1253,  1255,  1257,
    1259,  1261,  1265,  1268,  1270,  1272,  1276,  1279,  1282,  1285,
    1290,  1294,  1296,  1300,  1302,  1304,  1306,  1310,  1313,  1315,
    1319,  1323,  1324,  1327,  1328,  1330,  1336,  1340,  1344,  1346,
    1348,  1350,  1352,  1354,  1356,  1357,  1358,  1366,  1368,  1371,
    1372,  1373,  1378,  1383,  1388,  1389,  1394,  1396,  1398,  1399,
    1401,  1404,  1408,  1412,  1414,  1419,  1420,  1426,  1428,  1430,
    1432,  1434,  1437,  1439,  1444,  1449,  1451,  1453,  1458,  1459,
    1461,  1463,  1464,  1467,  1472,  1477,  1479,  1481,  1485,  1487,
    1490,  1494,  1496,  1498,  1499,  1505,  1506,  1507,  1510,  1516,
    1520,  1524,  1526,  1533,  1538,  1543,  1546,  1549,  1552,  1554,
    1557,  1559,  1560,  1566,  1570,  1574,  1581,  1585,  1587,  1589,
    1591,  1596,  1601,  1604,  1607,  1612,  1615,  1618,  1620,  1621,
    1626,  1630
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     159,     0,    -1,   160,    -1,    -1,   160,   161,   163,    -1,
      -1,    71,    -1,   162,   148,    71,    -1,   172,    -1,   203,
      -1,   204,    -1,   117,   149,   150,   151,    -1,   145,   162,
     151,    -1,    -1,   145,   162,   152,   164,   160,   153,    -1,
      -1,   145,   152,   165,   160,   153,    -1,   104,   166,   151,
      -1,   168,   151,    -1,   166,     8,   167,    -1,   167,    -1,
     162,    -1,   162,    90,    71,    -1,   148,   162,    -1,   148,
     162,    90,    71,    -1,   168,     8,    71,    13,   308,    -1,
      99,    71,    13,   308,    -1,    -1,   169,   170,   171,    -1,
      -1,   172,    -1,   203,    -1,   204,    -1,   117,   149,   150,
     151,    -1,   173,    -1,    71,    26,    -1,   152,   169,   153,
      -1,    -1,    -1,    65,   149,   314,   150,   174,   172,   175,
     229,   233,    -1,    -1,    -1,    65,   149,   314,   150,    26,
     176,   169,   177,   231,   234,    68,   151,    -1,    -1,    -1,
      82,   149,   178,   314,   150,   179,   228,    -1,    -1,    -1,
      81,   180,   172,    82,   149,   181,   314,   150,   151,    -1,
      -1,    -1,    -1,    84,   149,   267,   151,   182,   267,   151,
     183,   267,   150,   184,   219,    -1,    -1,    91,   149,   314,
     150,   185,   223,    -1,    95,   151,    -1,    95,   314,   151,
      -1,    96,   151,    -1,    96,   314,   151,    -1,   100,   151,
      -1,   100,   270,   151,    -1,   100,   318,   151,    -1,   106,
     240,   151,    -1,   112,   242,   151,    -1,    80,   266,   151,
      -1,    75,    -1,   314,   151,    -1,   114,   149,   201,   150,
     151,    -1,    -1,    -1,    86,   149,   318,    90,   186,   218,
     217,   150,   187,   220,    -1,    -1,    -1,    86,   149,   270,
      90,   188,   318,   217,   150,   189,   220,    -1,    -1,    88,
     190,   149,   222,   150,   221,    -1,   151,    -1,    -1,    -1,
      -1,    -1,    -1,   101,   191,   152,   169,   153,   102,   149,
     192,   297,   193,    73,   150,   194,   152,   169,   153,   195,
     196,    -1,   103,   314,   151,    -1,    97,    71,   151,    -1,
     197,    -1,    -1,   198,    -1,   197,   198,    -1,    -1,    -1,
     102,   149,   297,   199,    73,   150,   200,   152,   169,   153,
      -1,   202,    -1,   201,     8,   202,    -1,   318,    -1,   206,
      -1,   208,    -1,    -1,    31,    -1,    -1,   284,   205,    71,
     207,   149,   235,   150,   152,   169,   153,    -1,    -1,   211,
      71,   212,   209,   215,   152,   243,   153,    -1,    -1,   213,
      71,   210,   214,   152,   243,   153,    -1,   118,    -1,   111,
     118,    -1,   119,    -1,   110,   118,    -1,    -1,   121,   297,
      -1,   120,    -1,    -1,   121,   216,    -1,    -1,   122,   216,
      -1,   297,    -1,   216,     8,   297,    -1,    -1,   124,   218,
      -1,   318,    -1,    31,   318,    -1,   172,    -1,    26,   169,
      85,   151,    -1,   172,    -1,    26,   169,    87,   151,    -1,
     172,    -1,    26,   169,    89,   151,    -1,    71,    13,   308,
      -1,   222,     8,    71,    13,   308,    -1,   152,   224,   153,
      -1,   152,   151,   224,   153,    -1,    26,   224,    92,   151,
      -1,    26,   151,   224,    92,   151,    -1,    -1,    -1,   224,
      93,   314,   227,   225,   169,    -1,    -1,   224,    94,   227,
     226,   169,    -1,    26,    -1,   151,    -1,   172,    -1,    26,
     169,    83,   151,    -1,    -1,    -1,   229,    66,   149,   314,
     150,   230,   172,    -1,    -1,    -1,   231,    66,   149,   314,
     150,    26,   232,   169,    -1,    -1,    67,   172,    -1,    -1,
      67,    26,   169,    -1,   236,    -1,    -1,   237,    73,    -1,
     237,    31,    73,    -1,   237,    31,    73,    13,   308,    -1,
     237,    73,    13,   308,    -1,   236,     8,   237,    73,    -1,
     236,     8,   237,    31,    73,    -1,   236,     8,   237,    31,
      73,    13,   308,    -1,   236,     8,   237,    73,    13,   308,
      -1,    -1,   126,    -1,   127,    -1,   297,    -1,   239,    -1,
      -1,   270,    -1,   318,    -1,    31,   316,    -1,   239,     8,
     270,    -1,   239,     8,   318,    -1,   239,     8,    31,   316,
      -1,   240,     8,   241,    -1,   241,    -1,    73,    -1,   154,
     315,    -1,   154,   152,   314,   153,    -1,   242,     8,    73,
      -1,   242,     8,    73,    13,   308,    -1,    73,    -1,    73,
      13,   308,    -1,   243,   244,    -1,    -1,    -1,   260,   245,
     264,   151,    -1,   265,   151,    -1,   247,    -1,    -1,   261,
     284,   205,    71,   246,   149,   235,   150,   259,    -1,   104,
     248,   249,    -1,   297,    -1,   248,     8,   297,    -1,   151,
      -1,   152,   250,   153,    -1,    -1,   251,    -1,   252,    -1,
     251,   252,    -1,   253,   151,    -1,   257,   151,    -1,   256,
     105,   254,    -1,   297,    -1,   254,     8,   297,    -1,    71,
      -1,   256,    -1,   297,   144,    71,    -1,   255,    90,   258,
      71,    -1,   255,    90,   263,    -1,    -1,   263,    -1,   151,
      -1,   152,   169,   153,    -1,   262,    -1,   113,    -1,    -1,
     262,    -1,   263,    -1,   262,   263,    -1,   107,    -1,   108,
      -1,   109,    -1,   112,    -1,   111,    -1,   110,    -1,   264,
       8,    73,    -1,   264,     8,    73,    13,   308,    -1,    73,
      -1,    73,    13,   308,    -1,   265,     8,    71,    13,   308,
      -1,    99,    71,    13,   308,    -1,   266,     8,   314,    -1,
     314,    -1,    -1,   268,    -1,    -1,   268,     8,   269,   314,
      -1,   314,    -1,    -1,   125,   149,   271,   343,   150,    13,
     314,    -1,   318,    13,   314,    -1,   318,    13,    31,   318,
      -1,    -1,   318,    13,    31,    63,   298,   272,   306,    -1,
      -1,    63,   298,   273,   306,    -1,    62,   314,    -1,   318,
      24,   314,    -1,   318,    23,   314,    -1,   318,    22,   314,
      -1,   318,    21,   314,    -1,   318,    20,   314,    -1,   318,
      19,   314,    -1,   318,    18,   314,    -1,   318,    17,   314,
      -1,   318,    16,   314,    -1,   318,    15,   314,    -1,   318,
      14,   314,    -1,   317,    60,    -1,    60,   317,    -1,   317,
      59,    -1,    59,   317,    -1,    -1,   314,    27,   274,   314,
      -1,    -1,   314,    28,   275,   314,    -1,    -1,   314,     9,
     276,   314,    -1,    -1,   314,    11,   277,   314,    -1,   314,
      10,   314,    -1,   314,    29,   314,    -1,   314,    31,   314,
      -1,   314,    30,   314,    -1,   314,    44,   314,    -1,   314,
      42,   314,    -1,   314,    43,   314,    -1,   314,    45,   314,
      -1,   314,    46,   314,    -1,   314,    47,   314,    -1,   314,
      41,   314,    -1,   314,    40,   314,    -1,    42,   314,    -1,
      43,   314,    -1,    48,   314,    -1,    50,   314,    -1,   314,
      33,   314,    -1,   314,    32,   314,    -1,   314,    35,   314,
      -1,   314,    34,   314,    -1,   314,    36,   314,    -1,   314,
      39,   314,    -1,   314,    37,   314,    -1,   314,    38,   314,
      -1,   314,    49,   298,    -1,   149,   314,   150,    -1,    -1,
      -1,   314,    25,   278,   314,    26,   279,   314,    -1,    -1,
     314,    25,    26,   280,   314,    -1,   352,    -1,    58,   314,
      -1,    57,   314,    -1,    56,   314,    -1,    55,   314,    -1,
      54,   314,    -1,    53,   314,    -1,    52,   314,    -1,    64,
     304,    -1,    -1,    51,   281,   314,    -1,   310,    -1,   126,
     149,   346,   150,    -1,    61,   346,   155,    -1,   156,   305,
     156,    -1,    12,   314,    -1,    -1,   284,   205,   149,   282,
     235,   150,   285,   152,   169,   153,    -1,    -1,   112,   284,
     205,   149,   283,   235,   150,   285,   152,   169,   153,    -1,
      98,    -1,    -1,   104,   149,   286,   150,    -1,   286,     8,
      73,    -1,   286,     8,    31,    73,    -1,    73,    -1,    31,
      73,    -1,    -1,   162,   149,   288,   238,   150,    -1,    -1,
     145,   148,   162,   149,   289,   238,   150,    -1,    -1,   148,
     162,   149,   290,   238,   150,    -1,    -1,   296,   144,   341,
     149,   291,   238,   150,    -1,    -1,   296,   144,   328,   149,
     292,   238,   150,    -1,    -1,   330,   144,   341,   149,   293,
     238,   150,    -1,    -1,   330,   144,   328,   149,   294,   238,
     150,    -1,    -1,   328,   149,   295,   238,   150,    -1,   112,
      -1,   162,    -1,   145,   148,   162,    -1,   148,   162,    -1,
     162,    -1,   145,   148,   162,    -1,   148,   162,    -1,   296,
      -1,   299,    -1,    -1,    -1,   334,   123,   300,   338,   301,
     302,    -1,   334,    -1,   302,   303,    -1,    -1,   123,   338,
      -1,    -1,   149,   150,    -1,   149,   314,   150,    -1,    -1,
      78,    -1,   348,    -1,    -1,   149,   238,   150,    -1,    69,
      -1,    70,    -1,    79,    -1,   132,    -1,   133,    -1,   147,
      -1,   128,    -1,   129,    -1,   130,    -1,   131,    -1,   146,
      -1,   140,    78,   141,    -1,   140,   141,    -1,   307,    -1,
     162,    -1,   145,   148,   162,    -1,   148,   162,    -1,    42,
     308,    -1,    43,   308,    -1,   126,   149,   311,   150,    -1,
      61,   311,   155,    -1,   309,    -1,   296,   144,    71,    -1,
      72,    -1,   355,    -1,   162,    -1,   145,   148,   162,    -1,
     148,   162,    -1,   307,    -1,   157,   348,   157,    -1,   140,
     348,   141,    -1,    -1,   313,   312,    -1,    -1,     8,    -1,
     313,     8,   308,   124,   308,    -1,   313,     8,   308,    -1,
     308,   124,   308,    -1,   308,    -1,   315,    -1,   270,    -1,
     318,    -1,   318,    -1,   318,    -1,    -1,    -1,   333,   123,
     319,   338,   320,   327,   321,    -1,   333,    -1,   321,   322,
      -1,    -1,    -1,   123,   338,   323,   327,    -1,   324,    61,
     337,   155,    -1,   325,    61,   337,   155,    -1,    -1,   149,
     326,   238,   150,    -1,   325,    -1,   324,    -1,    -1,   335,
      -1,   342,   335,    -1,   296,   144,   328,    -1,   330,   144,
     328,    -1,   335,    -1,   331,    61,   337,   155,    -1,    -1,
     287,   332,    61,   337,   155,    -1,   334,    -1,   331,    -1,
     287,    -1,   335,    -1,   342,   335,    -1,   329,    -1,   335,
      61,   337,   155,    -1,   335,   152,   314,   153,    -1,   336,
      -1,    73,    -1,   154,   152,   314,   153,    -1,    -1,   314,
      -1,   340,    -1,    -1,   328,   339,    -1,   340,    61,   337,
     155,    -1,   340,   152,   314,   153,    -1,   341,    -1,    71,
      -1,   152,   314,   153,    -1,   154,    -1,   342,   154,    -1,
     343,     8,   344,    -1,   344,    -1,   318,    -1,    -1,   125,
     149,   345,   343,   150,    -1,    -1,    -1,   347,   312,    -1,
     347,     8,   314,   124,   314,    -1,   347,     8,   314,    -1,
     314,   124,   314,    -1,   314,    -1,   347,     8,   314,   124,
      31,   316,    -1,   347,     8,    31,   316,    -1,   314,   124,
      31,   316,    -1,    31,   316,    -1,   348,   349,    -1,   348,
      78,    -1,   349,    -1,    78,   349,    -1,    73,    -1,    -1,
      73,    61,   350,   351,   155,    -1,    73,   123,    71,    -1,
     142,   314,   153,    -1,   142,    72,    61,   314,   155,   153,
      -1,   143,   318,   153,    -1,    71,    -1,    74,    -1,    73,
      -1,   115,   149,   353,   150,    -1,   116,   149,   318,   150,
      -1,     7,   314,    -1,     6,   314,    -1,     5,   149,   314,
     150,    -1,     4,   314,    -1,     3,   314,    -1,   318,    -1,
      -1,   353,     8,   354,   318,    -1,   296,   144,    71,    -1,
     330,   144,    71,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   214,   214,   218,   218,   219,   223,   224,   228,   229,
     230,   231,   232,   233,   233,   235,   235,   237,   238,   242,
     243,   247,   248,   249,   250,   254,   255,   259,   259,   260,
     265,   266,   267,   268,   273,   274,   278,   279,   279,   279,
     280,   280,   280,   281,   281,   281,   282,   282,   282,   286,
     288,   290,   283,   292,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   307,   308,
     306,   311,   312,   310,   314,   314,   315,   316,   317,   318,
     319,   320,   316,   322,   323,   328,   329,   333,   334,   339,
     339,   339,   344,   345,   349,   353,   357,   362,   363,   368,
     368,   374,   373,   380,   379,   389,   390,   391,   392,   396,
     397,   401,   404,   406,   409,   411,   415,   416,   420,   421,
     426,   427,   431,   432,   437,   438,   443,   444,   449,   450,
     455,   456,   457,   458,   463,   464,   464,   465,   465,   470,
     471,   476,   477,   482,   484,   484,   488,   490,   490,   494,
     496,   500,   502,   507,   508,   513,   514,   515,   516,   517,
     518,   519,   520,   525,   526,   527,   528,   533,   534,   539,
     540,   541,   542,   543,   544,   548,   549,   554,   555,   556,
     561,   562,   563,   564,   570,   571,   576,   576,   577,   578,
     579,   579,   584,   588,   589,   593,   594,   597,   599,   603,
     604,   608,   609,   613,   617,   618,   622,   623,   627,   631,
     632,   636,   637,   641,   642,   646,   647,   651,   652,   656,
     657,   661,   662,   663,   664,   665,   666,   670,   671,   672,
     673,   677,   678,   682,   683,   688,   689,   693,   693,   694,
     698,   698,   699,   700,   701,   701,   702,   702,   703,   704,
     705,   706,   707,   708,   709,   710,   711,   712,   713,   714,
     715,   716,   717,   718,   719,   719,   720,   720,   721,   721,
     722,   722,   723,   724,   725,   726,   727,   728,   729,   730,
     731,   732,   733,   734,   735,   736,   737,   738,   739,   740,
     741,   742,   743,   744,   745,   746,   747,   748,   749,   750,
     749,   752,   752,   754,   755,   756,   757,   758,   759,   760,
     761,   762,   763,   763,   764,   765,   766,   767,   768,   769,
     769,   771,   771,   776,   779,   781,   785,   786,   787,   788,
     792,   792,   795,   795,   798,   798,   801,   801,   804,   804,
     807,   807,   810,   810,   813,   813,   819,   820,   821,   822,
     826,   827,   828,   834,   835,   840,   841,   840,   843,   848,
     849,   854,   858,   859,   860,   864,   865,   866,   871,   872,
     877,   878,   879,   880,   881,   882,   883,   884,   885,   886,
     887,   888,   889,   894,   895,   896,   897,   898,   899,   900,
     901,   902,   906,   910,   911,   912,   913,   914,   915,   916,
     917,   922,   923,   926,   928,   932,   933,   934,   935,   939,
     940,   945,   950,   955,   960,   961,   960,   963,   967,   968,
     973,   973,   977,   978,   982,   982,   988,   989,   990,   994,
     995,   999,  1000,  1005,  1009,  1010,  1010,  1015,  1016,  1017,
    1022,  1023,  1024,  1028,  1029,  1030,  1035,  1036,  1040,  1041,
    1046,  1047,  1047,  1051,  1052,  1053,  1057,  1058,  1062,  1063,
    1067,  1068,  1073,  1074,  1074,  1075,  1080,  1081,  1085,  1086,
    1087,  1088,  1089,  1090,  1091,  1092,  1096,  1097,  1098,  1099,
    1105,  1106,  1106,  1107,  1108,  1109,  1110,  1115,  1116,  1117,
    1122,  1123,  1124,  1125,  1126,  1127,  1128,  1132,  1133,  1133,
    1137,  1138
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "$undefined",
  "\"require_once (T_REQUIRE_ONCE)\"", "\"require (T_REQUIRE)\"",
  "\"eval (T_EVAL)\"", "\"include_once (T_INCLUDE_ONCE)\"",
  "\"include (T_INCLUDE)\"", "','", "\"or (T_LOGICAL_OR)\"",
  "\"xor (T_LOGICAL_XOR)\"", "\"and (T_LOGICAL_AND)\"",
  "\"print (T_PRINT)\"", "'='", "\">>= (T_SR_EQUAL)\"",
  "\"<<= (T_SL_EQUAL)\"", "\"^= (T_XOR_EQUAL)\"", "\"|= (T_OR_EQUAL)\"",
  "\"&= (T_AND_EQUAL)\"", "\"%= (T_MOD_EQUAL)\"",
  "\".= (T_CONCAT_EQUAL)\"", "\"/= (T_DIV_EQUAL)\"",
  "\"*= (T_MUL_EQUAL)\"", "\"-= (T_MINUS_EQUAL)\"",
  "\"+= (T_PLUS_EQUAL)\"", "'?'", "':'", "\"|| (T_BOOLEAN_OR)\"",
  "\"&& (T_BOOLEAN_AND)\"", "'|'", "'^'", "'&'",
  "\"!== (T_IS_NOT_IDENTICAL)\"", "\"=== (T_IS_IDENTICAL)\"",
  "\"!= (T_IS_NOT_EQUAL)\"", "\"== (T_IS_EQUAL)\"", "'<'", "'>'",
  "\">= (T_IS_GREATER_OR_EQUAL)\"", "\"<= (T_IS_SMALLER_OR_EQUAL)\"",
  "\">> (T_SR)\"", "\"<< (T_SL)\"", "'+'", "'-'", "'.'", "'*'", "'/'",
  "'%'", "'!'", "\"instanceof (T_INSTANCEOF)\"", "'~'", "'@'",
  "\"(unset) (T_UNSET_CAST)\"", "\"(bool) (T_BOOL_CAST)\"",
  "\"(object) (T_OBJECT_CAST)\"", "\"(array) (T_ARRAY_CAST)\"",
  "\"(string) (T_STRING_CAST)\"", "\"(double) (T_DOUBLE_CAST)\"",
  "\"(int) (T_INT_CAST)\"", "\"-- (T_DEC)\"", "\"++ (T_INC)\"", "'['",
  "\"clone (T_CLONE)\"", "\"new (T_NEW)\"", "\"exit (T_EXIT)\"",
  "\"if (T_IF)\"", "\"elseif (T_ELSEIF)\"", "\"else (T_ELSE)\"",
  "\"endif (T_ENDIF)\"", "\"integer number (T_LNUMBER)\"",
  "\"floating-point number (T_DNUMBER)\"", "\"identifier (T_STRING)\"",
  "\"variable name (T_STRING_VARNAME)\"", "\"variable (T_VARIABLE)\"",
  "\"number (T_NUM_STRING)\"", "T_INLINE_HTML", "T_CHARACTER",
  "T_BAD_CHARACTER",
  "\"quoted-string and whitespace (T_ENCAPSED_AND_WHITESPACE)\"",
  "\"quoted-string (T_CONSTANT_ENCAPSED_STRING)\"", "\"echo (T_ECHO)\"",
  "\"do (T_DO)\"", "\"while (T_WHILE)\"", "\"endwhile (T_ENDWHILE)\"",
  "\"for (T_FOR)\"", "\"endfor (T_ENDFOR)\"", "\"foreach (T_FOREACH)\"",
  "\"endforeach (T_ENDFOREACH)\"", "\"declare (T_DECLARE)\"",
  "\"enddeclare (T_ENDDECLARE)\"", "\"as (T_AS)\"",
  "\"switch (T_SWITCH)\"", "\"endswitch (T_ENDSWITCH)\"",
  "\"case (T_CASE)\"", "\"default (T_DEFAULT)\"", "\"break (T_BREAK)\"",
  "\"continue (T_CONTINUE)\"", "\"goto (T_GOTO)\"",
  "\"function (T_FUNCTION)\"", "\"const (T_CONST)\"",
  "\"return (T_RETURN)\"", "\"try (T_TRY)\"", "\"catch (T_CATCH)\"",
  "\"throw (T_THROW)\"", "\"use (T_USE)\"", "\"insteadof (T_INSTEADOF)\"",
  "\"global (T_GLOBAL)\"", "\"public (T_PUBLIC)\"",
  "\"protected (T_PROTECTED)\"", "\"private (T_PRIVATE)\"",
  "\"final (T_FINAL)\"", "\"abstract (T_ABSTRACT)\"",
  "\"static (T_STATIC)\"", "\"var (T_VAR)\"", "\"unset (T_UNSET)\"",
  "\"isset (T_ISSET)\"", "\"empty (T_EMPTY)\"",
  "\"__halt_compiler (T_HALT_COMPILER)\"", "\"class (T_CLASS)\"",
  "\"trait (T_TRAIT)\"", "\"interface (T_INTERFACE)\"",
  "\"extends (T_EXTENDS)\"", "\"implements (T_IMPLEMENTS)\"",
  "\"-> (T_OBJECT_OPERATOR)\"", "\"=> (T_DOUBLE_ARROW)\"",
  "\"list (T_LIST)\"", "\"array (T_ARRAY)\"", "\"callable (T_CALLABLE)\"",
  "\"__CLASS__ (T_CLASS_C)\"", "\"__TRAIT__ (T_TRAIT_C)\"",
  "\"__METHOD__ (T_METHOD_C)\"", "\"__FUNCTION__ (T_FUNC_C)\"",
  "\"__LINE__ (T_LINE)\"", "\"__FILE__ (T_FILE)\"",
  "\"comment (T_COMMENT)\"", "\"doc comment (T_DOC_COMMENT)\"",
  "\"open tag (T_OPEN_TAG)\"",
  "\"open tag with echo (T_OPEN_TAG_WITH_ECHO)\"",
  "\"close tag (T_CLOSE_TAG)\"", "\"whitespace (T_WHITESPACE)\"",
  "\"heredoc start (T_START_HEREDOC)\"", "\"heredoc end (T_END_HEREDOC)\"",
  "\"${ (T_DOLLAR_OPEN_CURLY_BRACES)\"", "\"{$ (T_CURLY_OPEN)\"",
  "\":: (T_PAAMAYIM_NEKUDOTAYIM)\"", "\"namespace (T_NAMESPACE)\"",
  "\"__NAMESPACE__ (T_NS_C)\"", "\"__DIR__ (T_DIR)\"",
  "\"\\\\ (T_NS_SEPARATOR)\"", "'('", "')'", "';'", "'{'", "'}'", "'$'",
  "']'", "'`'", "'\"'", "$accept", "start", "top_statement_list", "@1",
  "namespace_name", "top_statement", "@2", "@3", "use_declarations",
  "use_declaration", "constant_declaration", "inner_statement_list", "@4",
  "inner_statement", "statement", "unticked_statement", "@5", "@6", "@7",
  "@8", "@9", "@10", "@11", "@12", "@13", "@14", "@15", "@16", "@17",
  "@18", "@19", "@20", "@21", "@22", "@23", "@24", "@25", "@26",
  "additional_catches", "non_empty_additional_catches", "additional_catch",
  "@27", "@28", "unset_variables", "unset_variable",
  "function_declaration_statement", "class_declaration_statement",
  "is_reference", "unticked_function_declaration_statement", "@29",
  "unticked_class_declaration_statement", "@30", "@31", "class_entry_type",
  "extends_from", "interface_entry", "interface_extends_list",
  "implements_list", "interface_list", "foreach_optional_arg",
  "foreach_variable", "for_statement", "foreach_statement",
  "declare_statement", "declare_list", "switch_case_list", "case_list",
  "@32", "@33", "case_separator", "while_statement", "elseif_list", "@34",
  "new_elseif_list", "@35", "else_single", "new_else_single",
  "parameter_list", "non_empty_parameter_list", "optional_class_type",
  "function_call_parameter_list", "non_empty_function_call_parameter_list",
  "global_var_list", "global_var", "static_var_list",
  "class_statement_list", "class_statement", "@36", "@37",
  "trait_use_statement", "trait_list", "trait_adaptations",
  "trait_adaptation_list", "non_empty_trait_adaptation_list",
  "trait_adaptation_statement", "trait_precedence", "trait_reference_list",
  "trait_method_reference", "trait_method_reference_fully_qualified",
  "trait_alias", "trait_modifiers", "method_body", "variable_modifiers",
  "method_modifiers", "non_empty_member_modifiers", "member_modifier",
  "class_variable_declaration", "class_constant_declaration",
  "echo_expr_list", "for_expr", "non_empty_for_expr", "@38",
  "expr_without_variable", "@39", "@40", "@41", "@42", "@43", "@44", "@45",
  "@46", "@47", "@48", "@49", "@50", "@51", "function", "lexical_vars",
  "lexical_var_list", "function_call", "@52", "@53", "@54", "@55", "@56",
  "@57", "@58", "@59", "class_name", "fully_qualified_class_name",
  "class_name_reference", "dynamic_class_name_reference", "@60", "@61",
  "dynamic_class_name_variable_properties",
  "dynamic_class_name_variable_property", "exit_expr", "backticks_expr",
  "ctor_arguments", "common_scalar", "static_scalar",
  "static_class_constant", "scalar", "static_array_pair_list",
  "possible_comma", "non_empty_static_array_pair_list", "expr",
  "r_variable", "w_variable", "rw_variable", "variable", "@62", "@63",
  "variable_properties", "variable_property", "@64",
  "array_method_dereference", "method", "@65", "method_or_not",
  "variable_without_objects", "static_member", "variable_class_name",
  "array_function_dereference", "@66", "base_variable_with_function_calls",
  "base_variable", "reference_variable", "compound_variable", "dim_offset",
  "object_property", "@67", "object_dim_list", "variable_name",
  "simple_indirect_reference", "assignment_list",
  "assignment_list_element", "@68", "array_pair_list",
  "non_empty_array_pair_list", "encaps_list", "encaps_var", "@69",
  "encaps_var_offset", "internal_functions_in_yacc", "isset_variables",
  "@70", "class_constant", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,    44,   263,
     264,   265,   266,    61,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,    63,    58,   278,   279,   124,
      94,    38,   280,   281,   282,   283,    60,    62,   284,   285,
     286,   287,    43,    45,    46,    42,    47,    37,    33,   288,
     126,    64,   289,   290,   291,   292,   293,   294,   295,   296,
     297,    91,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,    40,
      41,    59,   123,   125,    36,    93,    96,    34
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   158,   159,   161,   160,   160,   162,   162,   163,   163,
     163,   163,   163,   164,   163,   165,   163,   163,   163,   166,
     166,   167,   167,   167,   167,   168,   168,   170,   169,   169,
     171,   171,   171,   171,   172,   172,   173,   174,   175,   173,
     176,   177,   173,   178,   179,   173,   180,   181,   173,   182,
     183,   184,   173,   185,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   186,   187,
     173,   188,   189,   173,   190,   173,   173,   191,   192,   193,
     194,   195,   173,   173,   173,   196,   196,   197,   197,   199,
     200,   198,   201,   201,   202,   203,   204,   205,   205,   207,
     206,   209,   208,   210,   208,   211,   211,   211,   211,   212,
     212,   213,   214,   214,   215,   215,   216,   216,   217,   217,
     218,   218,   219,   219,   220,   220,   221,   221,   222,   222,
     223,   223,   223,   223,   224,   225,   224,   226,   224,   227,
     227,   228,   228,   229,   230,   229,   231,   232,   231,   233,
     233,   234,   234,   235,   235,   236,   236,   236,   236,   236,
     236,   236,   236,   237,   237,   237,   237,   238,   238,   239,
     239,   239,   239,   239,   239,   240,   240,   241,   241,   241,
     242,   242,   242,   242,   243,   243,   245,   244,   244,   244,
     246,   244,   247,   248,   248,   249,   249,   250,   250,   251,
     251,   252,   252,   253,   254,   254,   255,   255,   256,   257,
     257,   258,   258,   259,   259,   260,   260,   261,   261,   262,
     262,   263,   263,   263,   263,   263,   263,   264,   264,   264,
     264,   265,   265,   266,   266,   267,   267,   269,   268,   268,
     271,   270,   270,   270,   272,   270,   273,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   274,   270,   275,   270,   276,   270,
     277,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   278,   279,
     270,   280,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   281,   270,   270,   270,   270,   270,   270,   282,
     270,   283,   270,   284,   285,   285,   286,   286,   286,   286,
     288,   287,   289,   287,   290,   287,   291,   287,   292,   287,
     293,   287,   294,   287,   295,   287,   296,   296,   296,   296,
     297,   297,   297,   298,   298,   300,   301,   299,   299,   302,
     302,   303,   304,   304,   304,   305,   305,   305,   306,   306,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   308,   308,   308,   308,   308,   308,   308,
     308,   308,   309,   310,   310,   310,   310,   310,   310,   310,
     310,   311,   311,   312,   312,   313,   313,   313,   313,   314,
     314,   315,   316,   317,   319,   320,   318,   318,   321,   321,
     323,   322,   324,   324,   326,   325,   327,   327,   327,   328,
     328,   329,   329,   330,   331,   332,   331,   333,   333,   333,
     334,   334,   334,   335,   335,   335,   336,   336,   337,   337,
     338,   339,   338,   340,   340,   340,   341,   341,   342,   342,
     343,   343,   344,   345,   344,   344,   346,   346,   347,   347,
     347,   347,   347,   347,   347,   347,   348,   348,   348,   348,
     349,   350,   349,   349,   349,   349,   349,   351,   351,   351,
     352,   352,   352,   352,   352,   352,   352,   353,   354,   353,
     355,   355
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     3,     0,     1,     3,     1,     1,
       1,     4,     3,     0,     6,     0,     5,     3,     2,     3,
       1,     1,     3,     2,     4,     5,     4,     0,     3,     0,
       1,     1,     1,     4,     1,     2,     3,     0,     0,     9,
       0,     0,    12,     0,     0,     7,     0,     0,     9,     0,
       0,     0,    12,     0,     6,     2,     3,     2,     3,     2,
       3,     3,     3,     3,     3,     1,     2,     5,     0,     0,
      10,     0,     0,    10,     0,     6,     1,     0,     0,     0,
       0,     0,    18,     3,     3,     1,     0,     1,     2,     0,
       0,    10,     1,     3,     1,     1,     1,     0,     1,     0,
      10,     0,     8,     0,     7,     1,     2,     1,     2,     0,
       2,     1,     0,     2,     0,     2,     1,     3,     0,     2,
       1,     2,     1,     4,     1,     4,     1,     4,     3,     5,
       3,     4,     4,     5,     0,     0,     6,     0,     5,     1,
       1,     1,     4,     0,     0,     7,     0,     0,     8,     0,
       2,     0,     3,     1,     0,     2,     3,     5,     4,     4,
       5,     7,     6,     0,     1,     1,     1,     1,     0,     1,
       1,     2,     3,     3,     4,     3,     1,     1,     2,     4,
       3,     5,     1,     3,     2,     0,     0,     4,     2,     1,
       0,     9,     3,     1,     3,     1,     3,     0,     1,     1,
       2,     2,     2,     3,     1,     3,     1,     1,     3,     4,
       3,     0,     1,     1,     3,     1,     1,     0,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     3,     5,     1,
       3,     5,     4,     3,     1,     0,     1,     0,     4,     1,
       0,     7,     3,     4,     0,     7,     0,     4,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     2,     0,     4,     0,     4,     0,     4,
       0,     4,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     0,     0,
       7,     0,     5,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     0,     3,     1,     4,     3,     3,     2,     0,
      10,     0,    11,     1,     0,     4,     3,     4,     1,     2,
       0,     5,     0,     7,     0,     6,     0,     7,     0,     7,
       0,     7,     0,     7,     0,     5,     1,     1,     3,     2,
       1,     3,     2,     1,     1,     0,     0,     6,     1,     2,
       0,     2,     0,     2,     3,     0,     1,     1,     0,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     1,     1,     3,     2,     2,     2,     4,
       3,     1,     3,     1,     1,     1,     3,     2,     1,     3,
       3,     0,     2,     0,     1,     5,     3,     3,     1,     1,
       1,     1,     1,     1,     0,     0,     7,     1,     2,     0,
       0,     4,     4,     4,     0,     4,     1,     1,     0,     1,
       2,     3,     3,     1,     4,     0,     5,     1,     1,     1,
       1,     2,     1,     4,     4,     1,     1,     4,     0,     1,
       1,     0,     2,     4,     4,     1,     1,     3,     1,     2,
       3,     1,     1,     0,     5,     0,     0,     2,     5,     3,
       3,     1,     6,     4,     4,     2,     2,     2,     1,     2,
       1,     0,     5,     3,     3,     6,     3,     1,     1,     1,
       4,     4,     2,     2,     4,     2,     2,     1,     0,     4,
       3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,     0,     3,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   312,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   466,     0,     0,   362,     0,
     370,   371,     6,   393,   446,    65,   372,     0,    46,     0,
       0,     0,    74,     0,     0,     0,     0,   323,     0,     0,
      77,     0,     0,     0,     0,     0,   346,     0,     0,     0,
       0,   105,   107,   111,     0,     0,   376,   377,   378,   379,
     373,   374,     0,     0,   380,   375,     0,     0,    76,    29,
     458,   365,     0,   395,     4,     0,     8,    34,     9,    10,
      95,    96,     0,     0,   410,    97,   439,     0,   398,   314,
       0,   409,     0,   411,     0,   442,     0,   438,   417,   437,
     440,   445,     0,   303,   394,     6,   346,     0,    97,   496,
     495,     0,   493,   492,   318,   284,   285,   286,   287,     0,
     310,   309,   308,   307,   306,   305,   304,   346,     0,     0,
     347,     0,   263,   413,     0,   261,     0,   471,     0,   403,
     248,     0,     0,   347,   353,   246,   354,     0,   358,   440,
       0,     0,   311,     0,    35,     0,   234,     0,    43,   235,
       0,     0,     0,    55,     0,    57,     0,     0,     0,    59,
     410,     0,   411,     0,     0,     0,    21,     0,    20,   177,
       0,     0,   176,   108,   106,   182,     0,    97,     0,     0,
       0,     0,   240,   466,   480,     0,   382,     0,     0,     0,
     478,     0,    15,     0,   397,     0,    27,     0,   366,     0,
     367,     0,     0,     0,   330,     0,    18,   109,   103,    98,
       0,     0,     0,   268,     0,   270,   298,   264,   266,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    66,
     262,   260,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   344,     0,   448,   414,   448,     0,
     459,   441,     0,     0,   313,     0,   349,     0,     0,   475,
     412,     0,   316,   404,   467,     0,   349,     0,   368,     0,
     355,   441,   363,     0,     0,     0,    64,     0,     0,     0,
     236,   239,   410,   411,     0,     0,    56,    58,    84,     0,
      60,    61,    29,    83,    23,     0,     0,    17,     0,   178,
     411,     0,    62,     0,     0,    63,     0,     0,    92,    94,
     497,     0,     0,     0,   465,     0,   481,     0,   381,   479,
     393,     0,     0,   477,   400,   476,   396,     5,    12,    13,
     334,   297,    36,     0,     0,   317,   399,     7,   168,     0,
       0,   101,   112,    99,   319,   448,   500,     0,   431,   429,
       0,     0,     0,   272,     0,   301,     0,     0,     0,   273,
     275,   274,   289,   288,   291,   290,   292,   294,   295,   293,
     283,   282,   277,   278,   276,   279,   280,   281,   296,     0,
     242,   259,   258,   257,   256,   255,   254,   253,   252,   251,
     250,   249,   168,   501,   432,     0,   449,     0,     0,     0,
       0,   494,   348,   456,     0,   470,     0,   469,   348,   431,
     168,   247,   432,     0,   364,    37,   233,     0,     0,    49,
     237,    71,    68,     0,     0,    53,     0,     0,   401,     0,
       0,     0,     0,   384,     0,   383,    26,   391,    27,     0,
      22,    19,     0,   175,   183,   180,   321,     0,     0,   498,
     490,   491,    11,     0,   462,     0,   461,   315,     0,   483,
       0,   484,   486,   332,     3,     5,   168,     0,    28,    30,
      31,    32,   447,     0,     0,   167,   410,   411,     0,     0,
       0,   350,   110,   114,     0,     0,     0,   163,     0,     0,
     338,   336,   430,   269,   271,     0,     0,   265,   267,     0,
     243,     0,   342,   340,   434,   451,   415,   450,   455,   443,
     444,   474,   473,     0,     0,   356,    40,     0,    47,    44,
     235,     0,     0,     0,     0,     0,     0,     0,   387,   388,
     408,     0,   403,   401,     0,     0,   386,     0,     0,    24,
     179,     0,   163,    93,    67,     0,   463,   465,     0,   487,
     489,   488,     0,     0,   168,    16,     3,     0,     0,   171,
     331,     0,    25,     0,   352,     0,     0,   113,   116,   185,
     163,   164,   165,     0,   153,     0,   166,   436,   457,   168,
     168,   302,   299,   244,   345,   168,   168,   452,   428,   448,
       0,     0,   468,   369,   360,    29,    38,     0,     0,     0,
     238,   118,     0,   118,   120,   128,     0,    29,   126,    75,
     134,   134,    54,     0,   390,   404,   402,     0,   385,   392,
       0,   181,     0,   499,   465,   460,     0,   482,     0,     0,
      14,   335,     0,     0,   410,   411,   351,   115,   185,     0,
     217,     0,   324,   163,     0,   155,     0,     0,     0,   368,
       0,     0,   424,   427,   426,   419,     0,     0,   472,   357,
      27,   143,     0,    29,   141,    45,    50,     0,     0,   121,
       0,     0,    27,   134,     0,   134,     0,   407,   406,   389,
      78,   324,     0,   241,   485,   333,    33,   174,   217,   117,
       0,     0,   221,   222,   223,   226,   225,   224,   216,   104,
     184,   189,   186,     0,   215,   219,     0,     0,     0,     0,
       0,   156,     0,   339,   337,   300,   245,   343,   341,   168,
     448,   448,   416,   453,   454,     0,   359,   146,   149,     0,
      27,   235,   119,    72,    69,   129,     0,     0,     0,     0,
       0,     0,   130,     0,     0,     0,   464,   102,     0,     0,
     193,     0,    97,   220,     0,   188,    29,     0,    29,     0,
     159,     0,   158,     0,     0,     0,     0,   418,   361,   151,
       0,     0,    39,    48,     0,     0,     0,     0,   127,     0,
     132,     0,   139,   140,   137,   131,   405,    79,    29,     0,
       0,   195,   197,   192,   229,     0,     0,     0,    27,     0,
     328,     0,    27,   160,     0,   157,   425,   422,   423,   420,
       0,     0,     0,     0,   150,   142,    51,    29,   124,    73,
      70,   133,   135,    29,     0,    27,   232,   194,     6,     0,
     198,   199,     0,     0,   207,     0,     0,     0,     0,   187,
     190,     0,   100,   329,     0,   325,   320,     0,   162,   428,
       0,    29,     0,     0,     0,    27,    29,    27,     0,   322,
     196,   200,   201,   211,     0,   202,     0,   230,   227,     0,
     231,     0,   326,   161,   421,     0,    27,    42,   144,    29,
     122,    52,     0,    27,    80,     0,   210,   203,   204,   208,
       0,   163,   327,     0,     0,    27,   125,     0,   209,     0,
     228,     0,   147,   145,     0,    29,   205,     0,    29,   123,
      27,   213,    29,   191,    27,    81,    27,    86,   214,     0,
      82,    85,    87,     0,    88,    89,     0,     0,    90,     0,
      29,    27,    91
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,    83,    84,   495,   357,   187,   188,
      85,   216,   363,   498,   848,    87,   547,   691,   625,   757,
     308,   628,   167,   627,   550,   761,   884,   557,   553,   807,
     552,   806,   171,   183,   774,   854,   927,   947,   950,   951,
     952,   956,   959,   337,   338,    88,    89,   230,    90,   516,
      91,   513,   372,    92,   371,    93,   515,   596,   597,   698,
     633,   911,   849,   639,   454,   642,   704,   886,   853,   814,
     695,   758,   924,   799,   938,   802,   842,   603,   604,   605,
     504,   505,   191,   192,   196,   670,   730,   781,   899,   731,
     779,   823,   859,   860,   861,   862,   917,   863,   864,   865,
     915,   943,   732,   733,   734,   735,   825,   736,   165,   309,
     310,   551,    94,   344,   679,   298,   387,   388,   382,   384,
     386,   678,   525,   129,   517,   572,   118,   739,   831,    96,
     368,   584,   496,   610,   609,   616,   615,   422,    97,   606,
     155,   156,   443,   624,   689,   756,   162,   219,   441,    98,
     560,   467,    99,   561,   294,   562,   181,   101,   289,   102,
     103,   428,   618,   752,   797,   879,   683,   684,   749,   685,
     104,   105,   106,   107,   231,   108,   109,   110,   111,   427,
     536,   617,   537,   538,   112,   485,   486,   654,   148,   149,
     209,   210,   488,   582,   113,   341,   575,   114
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -716
static const yytype_int16 yypact[] =
{
    -716,    65,    74,  -716,  1597,  3959,  3959,  -101,  3959,  3959,
    3959,  3959,  3959,  3959,  3959,  -716,  3959,  3959,  3959,  3959,
    3959,  3959,  3959,     0,     0,  2518,  3959,   208,   -62,   -51,
    -716,  -716,   104,  -716,  -716,  -716,  -716,  3959,  -716,    55,
      92,   100,  -716,   108,  2649,  2780,    62,  -716,   110,  2911,
    -716,  3959,    11,   -16,    45,   150,   -29,   122,   128,   131,
     133,  -716,  -716,  -716,   137,   139,  -716,  -716,  -716,  -716,
    -716,  -716,   310,   -34,  -716,  -716,   221,  3959,  -716,  -716,
     148,   212,   263,   -55,  -716,    13,  -716,  -716,  -716,  -716,
    -716,  -716,   234,   247,  -716,   292,   251,   182,  -716,  -716,
    4520,  -716,    48,   742,   183,  -716,   191,   277,   217,  -716,
     -27,  -716,   -11,  -716,  -716,  -716,   254,   210,   292,  5201,
    5201,  3959,  5201,  5201,  5301,  -716,  -716,   316,  -716,  3959,
    -716,  -716,  -716,  -716,  -716,  -716,  -716,  -716,   219,   221,
      61,   248,  -716,  -716,   253,  -716,     0,  5060,   255,   415,
    -716,   284,   221,   294,   303,  -716,  -716,   306,   336,   -18,
     -11,  3042,  -716,  3959,  -716,    14,  5201,  2387,  -716,  3959,
    3959,   315,  3959,  -716,  4561,  -716,  4604,   328,   458,  -716,
     332,  5201,   358,   340,  4645,   221,    23,    15,  -716,  -716,
     216,    17,  -716,  -716,  -716,   471,    18,   292,     0,     0,
       0,   338,  -716,  2518,    49,    54,  -716,  4090,     0,   320,
    -716,   221,  -716,   -72,   -52,  4686,   343,  3959,   151,   333,
     330,   151,    -1,   422,  -716,   429,  -716,   383,  -716,  -716,
       4,   449,    -5,  -716,  3959,  -716,   485,  -716,  -716,  3959,
    3959,  3959,  3959,  3959,  3959,  3959,  3959,  3959,  3959,  3959,
    3959,  3959,  3959,  3959,  3959,  3959,  3959,  3959,   208,  -716,
    -716,  -716,  3173,  3959,  3959,  3959,  3959,  3959,  3959,  3959,
    3959,  3959,  3959,  3959,  -716,    38,  3959,  -716,  3959,  3959,
     148,   -28,   364,  4729,  -716,   221,   241,   154,   154,  -716,
    -716,  3304,  -716,  3435,  -716,   221,   294,    -3,   365,    -3,
    -716,   -12,  -716,  4770,  4812,  3959,  -716,   433,  3959,   367,
     508,  5201,   438,  1184,   448,  4853,  -716,  -716,  -716,   981,
    -716,  -716,  -716,  -716,    25,   462,    11,  -716,  3959,  -716,
    -716,   -16,  -716,   981,   472,  -716,   395,    30,  -716,  -716,
    -716,    32,   397,   399,   179,   401,  -716,   475,  -716,  -716,
     494,  4223,   404,  -716,  -716,  -716,   -45,  -716,  -716,  -716,
    -716,  -716,  -716,  1728,  4264,  -716,  -716,  -716,  3566,   546,
     -13,  -716,   440,  -716,  -716,  3959,   416,  3959,   419,   -12,
     424,   -11,  3959,  5278,  3959,  -716,  3959,  3959,  3959,  2568,
    2699,  2828,  2959,  2959,  2959,  2959,   777,   777,   777,   777,
     492,   492,   268,   268,   268,   316,   316,   316,  -716,   -17,
    5301,  5301,  5301,  5301,  5301,  5301,  5301,  5301,  5301,  5301,
    5301,  5301,  3566,   416,   425,   427,  5201,   408,   154,   409,
    4305,  -716,   272,  -716,     0,  5201,     0,  5101,   294,  -716,
    3566,  -716,  -716,   154,  -716,   555,  5201,   437,  4894,  -716,
    -716,  -716,  -716,   569,    33,  -716,   981,   981,   981,   439,
     120,   441,   221,   -43,   450,  -716,  -716,  -716,   434,   525,
    -716,  -716,  4350,  -716,  -716,   584,  -716,     0,   455,  -716,
    -716,  -716,  -716,   459,  -716,    34,  -716,  -716,   228,  -716,
    3959,  -716,  -716,  -716,   454,  -716,  3566,   461,  -716,  -716,
    -716,  -716,  -716,     0,   463,   603,    37,   199,   981,   464,
     221,   294,  -716,   497,   -13,   480,   465,   298,   468,  4391,
    -716,  -716,   -12,  5241,  5301,  3959,  5160,  5346,  5367,   208,
    -716,   483,  -716,  -716,  -716,  -716,  -716,    -6,  -716,  -716,
    -716,  -716,  -716,  3697,   484,  -716,  -716,  2387,  -716,  -716,
    3959,  3959,     0,   171,   981,   564,  1860,    -2,  -716,  -716,
     512,   482,   630,   981,   498,   221,   112,   570,   540,  -716,
    -716,   981,   298,  -716,  -716,     0,  -716,   179,   632,  -716,
    -716,  -716,   488,  1138,  3566,  -716,   495,   499,   503,  -716,
    -716,  3828,  -716,   221,   294,   -13,   502,   648,  -716,  -716,
     298,  -716,  -716,   509,   650,   172,  -716,  -716,  -716,  3566,
    3566,  5324,  -716,  -716,  -716,  3566,  3566,  -716,   511,  3959,
    3959,     0,  5201,  -716,  -716,  -716,  -716,  3959,  1992,   513,
    5201,   538,     0,   538,  -716,  -716,   652,  -716,  -716,  -716,
     516,   520,  -716,   981,  -716,   981,  -716,   518,   121,  -716,
     524,  -716,   536,  -716,   179,  -716,  3959,  -716,   510,   545,
    -716,  -716,   548,     0,    39,   843,   294,   648,  -716,   -13,
     517,   550,   597,   203,   629,   691,   556,   557,  3959,   365,
     559,   560,  -716,   644,   651,  -716,   562,  4432,  -716,   588,
     276,  -716,  4936,  -716,  -716,  -716,  -716,   171,   571,  -716,
     573,   981,   625,  -716,   307,  -716,   -33,  -716,   596,  -716,
    -716,   597,    43,  5301,  -716,  -716,  -716,  -716,   631,  -716,
     653,   -13,  -716,  -716,  -716,  -716,  -716,  -716,  -716,  -716,
    -716,  -716,  -716,   254,   414,  -716,    19,   574,   576,   575,
     197,   715,   981,  -716,  -716,  5324,  -716,  -716,  -716,  3566,
    3959,  3959,   606,  -716,  -716,   154,  -716,  -716,   360,   581,
     662,  3959,  -716,  -716,  -716,  -716,   582,   337,   595,  3959,
       6,    -9,  -716,   981,   -13,   600,  -716,  -716,   734,     9,
    -716,   676,   292,  -716,   682,  -716,  -716,   222,  -716,   694,
     756,   981,  -716,   620,   616,   618,   154,  -716,  -716,   378,
     627,  2387,  -716,  -716,   623,   633,  2124,  2124,  -716,   626,
    -716,  4479,  -716,  -716,  -716,  -716,  -716,  -716,  -716,   981,
     -13,  -716,    84,  -716,   767,    28,   710,   773,   634,   716,
    -716,    44,   635,   778,   981,  -716,  -716,  -716,  -716,  -716,
     641,   768,   725,  3959,  -716,  -716,  -716,  -716,  -716,  -716,
    -716,  -716,  -716,  -716,   722,   645,  -716,  -716,   714,   654,
      84,  -716,   655,   718,   700,   658,   666,   981,   739,  -716,
    -716,   981,  -716,  -716,   224,  -716,  -716,   981,  -716,   511,
    3959,  -716,   677,  4977,  2256,   740,  -716,   302,   679,  -716,
    -716,  -716,  -716,   493,   -13,  -716,   759,  -716,   822,   687,
    -716,   766,  -716,  -716,  -716,  5018,   774,  -716,  -716,  -716,
    -716,  -716,   690,   322,  -716,   779,   781,   837,  -716,  -716,
     981,   298,  -716,   823,  2387,   770,  -716,   701,  -716,   -13,
    -716,   719,  -716,  -716,   717,  -716,  -716,   305,  -716,  -716,
     720,  -716,  -716,  -716,   370,  -716,   723,   775,  -716,   721,
    -716,   775,  -716,   -13,  -716,  -716,   799,   730,  -716,   729,
    -716,   731,  -716
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -716,  -716,  -337,  -716,   -23,  -716,  -716,  -716,  -716,   549,
    -716,  -291,  -716,  -716,    24,  -716,  -716,  -716,  -716,  -716,
    -716,  -716,  -716,  -716,  -716,  -716,  -716,  -716,  -716,  -716,
    -716,  -716,  -716,  -716,  -716,  -716,  -716,  -716,  -716,  -716,
     -69,  -716,  -716,  -716,   410,   522,   523,  -116,  -716,  -716,
    -716,  -716,  -716,  -716,  -716,  -716,  -716,  -716,   295,   258,
     195,  -716,    86,  -716,  -716,  -716,  -394,  -716,  -716,    83,
    -716,  -716,  -716,  -716,  -716,  -716,  -716,  -561,  -716,   223,
    -410,  -716,  -716,   568,  -716,   227,  -716,  -716,  -716,  -716,
    -716,  -716,  -716,  -716,    47,  -716,  -716,  -716,  -716,  -716,
    -716,  -716,  -716,  -716,  -716,  -715,  -716,  -716,  -716,  -535,
    -716,  -716,   -31,  -716,  -716,  -716,  -716,  -716,  -716,  -716,
    -716,  -716,  -716,  -716,  -716,  -716,     3,   189,  -716,  -716,
    -716,  -716,  -716,  -716,  -716,  -716,  -716,  -716,   755,  -362,
    -245,  -716,  -716,  -716,  -716,  -716,  -716,  -716,   225,    12,
     514,  -716,  -716,   346,   369,  -716,   671,   761,  -420,   443,
     933,  -716,  -716,  -716,  -716,  -716,  -716,  -716,  -716,    50,
    -197,  -716,    40,  -716,  -716,  -716,   -22,   -24,  -716,  -269,
    -433,  -716,  -716,   153,   -21,   304,   375,  -716,   743,  -716,
     396,   281,  -716,  -716,  -716,  -716,  -716,  -716
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -457
static const yytype_int16 yytable[] =
{
     140,   140,   282,   159,   153,   158,   160,    95,   512,   429,
     545,   652,   531,   408,   541,   629,   542,   820,   180,   783,
     494,   225,   305,   326,   640,   331,   334,   784,    86,   186,
     544,   468,   812,   278,   278,   378,   868,   115,   477,   671,
     479,   555,   577,   278,   195,  -169,   529,  -172,   121,   278,
     213,   577,   874,   214,   115,   619,    34,   189,   115,   197,
     769,   770,    34,   144,   144,     3,   376,   157,    34,    47,
      34,   115,   204,    34,    -2,   373,   223,   353,   424,   358,
     359,   336,   115,   589,   769,   770,   587,   161,   281,  -347,
     378,   424,  -349,   223,   224,   137,   223,   360,   163,  -348,
     439,  -347,   442,   223,   493,   223,   518,   260,   261,   423,
     346,    34,   137,   325,   211,   469,   286,  -433,   212,   197,
     772,  -430,  -429,   140,   279,   279,  -433,   204,   138,   296,
     164,   139,   509,   177,   279,   510,   301,    80,   190,   312,
     279,   207,   208,   280,   815,   138,   620,   377,   139,    80,
     641,    80,   598,   374,    80,   858,   366,   813,   586,   185,
     821,   822,   324,   193,   226,   306,   327,   140,   332,   335,
     785,   223,   347,   223,   659,   140,   140,   140,   916,   869,
     478,   178,   480,   556,   578,   140,   144,  -169,   356,  -172,
     377,   307,    80,   776,   875,   348,   207,   208,   564,   676,
     677,   688,   632,   674,   168,   680,   681,  -170,   379,   223,
     224,   381,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   204,   433,   805,    34,   789,   509,
     144,   535,   510,   598,   159,   153,   158,   160,   144,   144,
     144,   169,   115,   717,    34,   675,   535,   706,   144,   170,
     115,   379,    34,   829,   381,   901,  -349,   172,  -413,  -413,
     223,   206,   432,   379,   379,  -348,   381,   381,   194,   223,
     790,   198,   438,   379,   115,   379,   381,   199,   381,   115,
     200,    34,   201,   137,   613,   204,   202,   115,   203,    34,
     218,   137,   115,   207,   208,   830,   463,   902,   157,   579,
     217,   580,   581,   186,   483,   227,   377,   719,    80,   767,
     463,   771,  -435,   255,   256,   257,   138,   258,   228,   139,
     137,   140,   798,   229,   138,    80,   232,   139,   137,   601,
     602,   465,   274,    80,   690,   275,   204,   506,   276,   793,
     277,   221,   -41,   -41,   -41,   465,   702,   511,   509,  -170,
     686,   510,    47,   151,   207,   208,   152,   522,   211,   780,
     931,   138,    80,   839,   139,   258,    95,   285,   328,   115,
      80,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   204,   144,   380,   140,   499,   205,   223,
     360,   506,   287,   204,  -138,  -138,  -138,   288,   353,   768,
     769,   770,   760,   204,   379,   207,   208,   381,   353,   506,
     292,   140,   817,   140,  -136,  -136,  -136,  -413,  -413,   379,
     223,   493,   381,   293,   601,   602,   800,   801,   425,   809,
     769,   770,   295,   463,   463,   463,  -148,  -148,  -148,   566,
     380,   425,   223,   509,   840,   841,   510,   297,  -154,   144,
     299,   206,   207,   208,   140,  -138,   941,   942,   857,   300,
     866,   354,   207,   208,   314,   506,   142,   145,   465,   465,
     465,   319,   207,   208,   144,  -136,   144,   220,   222,   318,
     140,   794,   795,   320,   333,   463,   349,   594,   343,   365,
     355,   511,   322,   367,   511,   828,   362,   832,   866,   349,
     369,   355,   349,   355,   370,   159,   153,   158,   160,   321,
     375,   385,  -218,   374,   440,   447,   450,   144,   449,   453,
     465,   722,   723,   724,   725,   726,   727,   855,   451,   140,
     140,   463,   918,   470,   252,   253,   254,   255,   256,   257,
     463,   258,   648,   144,   476,   475,   489,   481,   463,   511,
     482,   487,   140,   506,   140,   490,   885,   492,   535,   508,
     664,   514,   887,   534,   539,  -456,   465,   936,   520,   157,
     666,   626,   511,   521,   532,   465,   533,   511,   506,   506,
     638,   546,   554,   465,   506,   506,   548,   568,   563,   565,
     906,   955,   144,   144,   567,   913,   569,   571,   140,   535,
     722,   723,   724,   725,   726,   727,   574,   585,   576,   140,
     588,   591,   593,   590,   600,   144,   720,   144,   925,   595,
     463,   721,   463,   607,   722,   723,   724,   725,   726,   727,
     728,   140,   599,   614,   623,   636,   643,   644,   645,   348,
     140,   649,   650,   657,   940,   656,   511,   944,   660,   661,
     511,   946,   694,   662,   668,   465,   669,   465,   673,   672,
     682,   144,   697,   714,   696,   701,   826,   703,   709,   961,
     729,   705,   144,   710,   140,   100,   119,   120,   463,   122,
     123,   124,   125,   126,   127,   128,   711,   130,   131,   132,
     133,   134,   135,   136,   144,   715,   147,   150,   511,   716,
     737,   738,   741,   144,   742,   750,   743,   744,   166,   747,
     748,   755,   751,   465,   766,   174,   176,   753,   506,   463,
     773,   763,   184,   764,   778,   787,   786,   788,   791,   796,
     720,   379,   803,   808,   381,   721,   782,   144,   722,   723,
     724,   725,   726,   727,   728,   804,   810,   819,   215,   824,
     463,   511,   818,   827,   465,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   833,   463,   834,
     836,   837,   379,   838,   845,   381,   843,   851,   141,   141,
     867,   870,   154,   846,   777,   465,   871,   872,   876,   873,
     880,   877,   283,   882,   881,   888,   463,   511,   889,   511,
     284,  -413,  -413,   465,  -206,   894,   892,   890,   893,   895,
     896,   463,   898,  -457,  -457,  -457,  -457,   250,   251,   252,
     253,   254,   255,   256,   257,   844,   258,   912,   907,   914,
     919,   465,   303,   466,   304,   920,   921,   511,   100,   922,
     311,   926,  -152,   315,   463,   929,   465,   474,   463,   932,
     928,  -173,  -212,   935,   463,   934,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   939,   937,
     953,   511,   957,   945,   147,   471,   948,   949,   351,   465,
     958,   960,   954,   465,   962,   500,   501,   573,   364,   465,
     667,   700,   762,   850,   852,   718,   740,   463,   511,   473,
     775,   141,  -413,  -413,   746,   383,   511,   891,   910,   647,
     389,   390,   391,   392,   393,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   904,
     511,   646,   465,   410,   411,   412,   413,   414,   415,   416,
     417,   418,   419,   420,   421,   141,   345,   426,   933,   426,
     430,   329,   655,   141,   141,   141,   143,   143,   712,     0,
       0,     0,   435,   141,   437,     0,     0,     0,     0,     0,
     558,   559,     0,     0,     0,     0,   446,     0,     0,   448,
       0,     0,   182,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -173,     0,     0,     0,     0,     0,   472,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   154,     0,     0,     0,     0,     0,     0,
       0,     0,   592,   456,   457,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,     0,   458,     0,     0,     0,   426,     0,   519,     0,
      30,    31,   115,   523,     0,   524,     0,   526,   527,   528,
      36,     0,     0,     0,     0,     0,     0,     0,   635,     0,
       0,     0,     0,     0,   464,     0,     0,     0,     0,   290,
       0,     0,     0,     0,     0,   651,     0,     0,   464,     0,
       0,     0,     0,   137,     0,     0,     0,     0,     0,   141,
       0,     0,     0,   313,     0,     0,     0,   459,     0,    66,
      67,    68,    69,    70,    71,     0,     0,     0,     0,     0,
       0,   460,     0,   330,     0,     0,   461,    74,    75,   462,
       0,   339,   340,   342,     0,     0,     0,     0,     0,     0,
       0,   352,     0,     0,     0,     0,     0,   233,   234,   235,
       0,     0,     0,     0,     0,     0,     0,   707,     0,   708,
       0,   583,     0,   236,   141,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,     0,   258,     0,   141,
       0,   141,     0,     0,     0,     0,   611,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,     0,
       0,   464,   464,   464,   622,   765,     0,     0,   100,     0,
       0,   311,   630,     0,     0,     0,     0,   100,     0,     0,
       0,     0,   141,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -413,  -413,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   792,     0,   141,     0,
       0,     0,     0,   464,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   452,     0,     0,   484,     0,     0,
       0,     0,     0,     0,   154,     0,     0,   816,     0,     0,
     426,   687,     0,   658,     0,     0,     0,     0,   692,   100,
       0,   507,     0,     0,     0,   835,     0,   141,   141,   464,
       0,     0,     0,     0,     0,     0,     0,     0,   464,     0,
       0,     0,     0,     0,     0,     0,   464,   713,     0,     0,
     141,     0,   141,   856,     0,     0,     0,     0,     0,     0,
       0,     0,   530,     0,     0,     0,     0,     0,   878,   745,
       0,     0,     0,     0,     0,   507,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   290,     0,   290,
       0,     0,     0,   507,     0,     0,   141,     0,     0,     0,
       0,   897,     0,     0,     0,   900,     0,   141,     0,     0,
       0,   903,     0,     0,     0,     0,     0,     0,   464,     0,
     464,     0,     0,     0,     0,     0,     0,     0,     0,   141,
     339,     0,     0,     0,     0,     0,     0,     0,   141,     0,
       0,   426,   426,     0,     0,     0,     0,     0,     0,   507,
       0,     0,   311,     0,   930,     0,   290,     0,     0,     0,
     811,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   141,     0,     0,     0,   464,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,     0,     0,     0,     0,   100,   100,     0,
       0,     0,     0,     0,     0,   631,   634,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   464,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   653,     0,
     484,     0,     0,     0,   883,     0,     0,   507,     0,     0,
       0,     0,     0,     0,   665,     0,     0,     0,   464,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   507,   507,     0,     0,   464,     0,   507,   507,
       0,   905,     0,     0,   290,   100,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   699,     0,     0,     0,     0,
       0,     0,     0,     0,   464,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   484,     0,   464,
       0,     0,     0,     0,     0,   100,   290,     0,     0,     0,
       5,     6,     7,     8,     9,     0,     0,     0,     0,    10,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   464,     0,     0,     0,   464,     0,     0,     0,
     634,     0,   464,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     0,     0,     0,    30,    31,    32,    33,
      34,     0,    35,     0,     0,   464,    36,    37,    38,    39,
       0,    40,   507,    41,     0,    42,     0,     0,    43,     0,
       0,     0,    44,    45,    46,    47,    48,    49,    50,     0,
      51,    52,     0,    53,     0,     0,     0,    54,    55,    56,
       0,    57,    58,    59,    60,    61,    62,    63,     0,     0,
       0,     0,    64,    65,     0,    66,    67,    68,    69,    70,
      71,     5,     6,     7,     8,     9,     0,    72,     0,     0,
      10,     0,    73,    74,    75,    76,    77,     0,    78,    79,
       0,    80,     0,    81,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,     0,     0,     0,    30,    31,    32,
      33,    34,     0,    35,     0,     0,     0,    36,    37,    38,
      39,     0,    40,     0,    41,     0,    42,     0,     0,    43,
       0,     0,     0,    44,    45,    46,    47,     0,    49,    50,
       0,    51,     0,     0,    53,     0,     0,     0,    54,    55,
      56,     0,    57,    58,    59,   497,    61,    62,    63,     0,
       0,     0,     0,    64,    65,     0,    66,    67,    68,    69,
      70,    71,     0,     5,     6,     7,     8,     9,    72,     0,
       0,     0,    10,   117,    74,    75,    76,    77,     0,    78,
      79,     0,    80,     0,    81,    82,   637,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,     0,     0,     0,    30,
      31,    32,    33,    34,     0,    35,     0,     0,     0,    36,
      37,    38,    39,     0,    40,     0,    41,     0,    42,     0,
       0,    43,     0,     0,     0,    44,    45,    46,    47,     0,
      49,    50,     0,    51,     0,     0,    53,     0,     0,     0,
       0,     0,    56,     0,    57,    58,    59,     0,     0,     0,
       0,     0,     0,     0,     0,    64,    65,     0,    66,    67,
      68,    69,    70,    71,     0,     5,     6,     7,     8,     9,
      72,     0,     0,     0,    10,   117,    74,    75,    76,    77,
       0,    78,    79,     0,    80,     0,    81,    82,   693,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,     0,     0,
       0,    30,    31,    32,    33,    34,     0,    35,     0,     0,
       0,    36,    37,    38,    39,     0,    40,     0,    41,     0,
      42,     0,     0,    43,     0,     0,     0,    44,    45,    46,
      47,     0,    49,    50,     0,    51,     0,     0,    53,     0,
       0,     0,     0,     0,    56,     0,    57,    58,    59,     0,
       0,     0,     0,     0,     0,     0,     0,    64,    65,     0,
      66,    67,    68,    69,    70,    71,     0,     5,     6,     7,
       8,     9,    72,     0,     0,     0,    10,   117,    74,    75,
      76,    77,     0,    78,    79,     0,    80,     0,    81,    82,
     847,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
       0,     0,     0,    30,    31,    32,    33,    34,     0,    35,
       0,     0,     0,    36,    37,    38,    39,     0,    40,     0,
      41,     0,    42,     0,     0,    43,     0,     0,     0,    44,
      45,    46,    47,     0,    49,    50,     0,    51,     0,     0,
      53,     0,     0,     0,     0,     0,    56,     0,    57,    58,
      59,     0,     0,     0,     0,     0,     0,     0,     0,    64,
      65,     0,    66,    67,    68,    69,    70,    71,     0,     5,
       6,     7,     8,     9,    72,     0,     0,     0,    10,   117,
      74,    75,    76,    77,     0,    78,    79,     0,    80,     0,
      81,    82,   909,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,     0,     0,     0,    30,    31,    32,    33,    34,
       0,    35,     0,     0,     0,    36,    37,    38,    39,     0,
      40,     0,    41,     0,    42,     0,     0,    43,     0,     0,
       0,    44,    45,    46,    47,     0,    49,    50,     0,    51,
       0,     0,    53,     0,     0,     0,     0,     0,    56,     0,
      57,    58,    59,     0,     0,     0,     0,     0,     0,     0,
       0,    64,    65,     0,    66,    67,    68,    69,    70,    71,
       5,     6,     7,     8,     9,     0,    72,     0,     0,    10,
       0,   117,    74,    75,    76,    77,     0,    78,    79,     0,
      80,     0,    81,    82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     0,     0,     0,    30,    31,    32,    33,
      34,     0,    35,     0,     0,     0,    36,    37,    38,    39,
       0,    40,     0,    41,     0,    42,     0,     0,    43,     0,
       0,     0,    44,    45,    46,    47,     0,    49,    50,     0,
      51,     0,     0,    53,     0,     0,     0,     0,     0,    56,
       0,    57,    58,    59,     0,     0,     0,     0,     0,     0,
       0,     0,    64,    65,     0,    66,    67,    68,    69,    70,
      71,     5,     6,     7,     8,     9,     0,    72,     0,     0,
      10,     0,   117,    74,    75,    76,    77,     0,    78,    79,
       0,    80,     0,    81,    82,     0,     0,     0,     0,   146,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,     0,     0,     0,     0,    30,    31,   115,
      33,    34,     0,     0,     0,     0,     0,    36,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,    47,   258,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     116,     0,     0,    58,    59,     0,     0,     0,     0,     0,
       0,     0,     0,    64,    65,     0,    66,    67,    68,    69,
      70,    71,     5,     6,     7,     8,     9,     0,    72,     0,
       0,    10,     0,   117,    74,    75,    76,    77,     0,     0,
       0,     0,    80,     0,    81,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,     0,     0,     0,     0,    30,    31,
     115,    33,    34,     0,     0,     0,     0,     0,    36,     0,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,    47,   258,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   116,     0,     0,    58,    59,     0,     0,     0,     0,
       0,     0,     0,     0,    64,    65,     0,    66,    67,    68,
      69,    70,    71,     5,     6,     7,     8,     9,     0,    72,
       0,     0,    10,     0,   117,    74,    75,    76,    77,     0,
     173,     0,     0,    80,     0,    81,    82,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,     0,     0,     0,     0,    30,
      31,   115,    33,    34,     0,     0,     0,     0,     0,    36,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,     0,   258,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   116,     0,     0,    58,    59,     0,     0,     0,
       0,     0,     0,     0,     0,    64,    65,     0,    66,    67,
      68,    69,    70,    71,     5,     6,     7,     8,     9,     0,
      72,     0,     0,    10,     0,   117,    74,    75,    76,    77,
       0,   175,     0,     0,    80,     0,    81,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,     0,     0,     0,     0,
      30,    31,   115,    33,    34,     0,     0,     0,     0,     0,
      36,  -457,  -457,  -457,  -457,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,     0,   258,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   116,     0,     0,    58,    59,     0,     0,
       0,     0,     0,     0,     0,     0,    64,    65,     0,    66,
      67,    68,    69,    70,    71,     5,     6,     7,     8,     9,
       0,    72,     0,     0,    10,     0,   117,    74,    75,    76,
      77,     0,   179,     0,     0,    80,     0,    81,    82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,     0,     0,     0,
       0,    30,    31,   115,    33,    34,     0,     0,     0,     0,
       0,    36,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   116,     0,     0,    58,    59,     0,
       0,     0,     0,     0,     0,     0,     0,    64,    65,     0,
      66,    67,    68,    69,    70,    71,     5,     6,     7,     8,
       9,     0,    72,     0,     0,    10,     0,   117,    74,    75,
      76,    77,   302,     0,     0,     0,    80,     0,    81,    82,
       0,     0,     0,     0,   409,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,     0,     0,
       0,     0,    30,    31,   115,    33,    34,     0,     0,     0,
       0,     0,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   116,     0,     0,    58,    59,
       0,     0,     0,     0,     0,     0,     0,     0,    64,    65,
       0,    66,    67,    68,    69,    70,    71,     5,     6,     7,
       8,     9,     0,    72,     0,     0,    10,     0,   117,    74,
      75,    76,    77,     0,     0,     0,     0,    80,     0,    81,
      82,     0,     0,     0,     0,   434,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     0,
       0,     0,     0,    30,    31,   115,    33,    34,     0,     0,
       0,     0,     0,    36,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   116,     0,     0,    58,
      59,     0,     0,     0,     0,     0,     0,     0,     0,    64,
      65,     0,    66,    67,    68,    69,    70,    71,     5,     6,
       7,     8,     9,     0,    72,     0,     0,    10,     0,   117,
      74,    75,    76,    77,     0,     0,     0,     0,    80,     0,
      81,    82,     0,     0,     0,     0,   436,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
       0,     0,     0,     0,    30,    31,   115,    33,    34,     0,
       0,     0,     0,     0,    36,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   116,     0,     0,
      58,    59,     0,     0,     0,     0,     0,     0,     0,     0,
      64,    65,     0,    66,    67,    68,    69,    70,    71,     5,
       6,     7,     8,     9,     0,    72,     0,     0,    10,     0,
     117,    74,    75,    76,    77,     0,     0,     0,     0,    80,
       0,    81,    82,     0,     0,     0,     0,   503,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,     0,     0,     0,     0,    30,    31,   115,    33,    34,
       0,     0,     0,     0,     0,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   116,     0,
       0,    58,    59,     0,     0,     0,     0,     0,     0,     0,
       0,    64,    65,     0,    66,    67,    68,    69,    70,    71,
       5,     6,     7,     8,     9,     0,    72,     0,     0,    10,
       0,   117,    74,    75,    76,    77,     0,     0,     0,     0,
      80,     0,    81,    82,     0,     0,     0,     0,   621,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,     0,     0,     0,     0,    30,    31,   115,    33,
      34,     0,     0,     0,     0,     0,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   116,
       0,     0,    58,    59,     0,     0,     0,     0,     0,     0,
       0,     0,    64,    65,     0,    66,    67,    68,    69,    70,
      71,     5,     6,     7,     8,     9,     0,    72,     0,     0,
      10,     0,   117,    74,    75,    76,    77,     0,     0,     0,
       0,    80,     0,    81,    82,     0,     0,     0,     0,   663,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,     0,     0,     0,     0,    30,    31,   115,
      33,    34,     0,     0,     0,     0,     0,    36,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     116,     0,     0,    58,    59,     0,     0,     0,     0,     0,
       0,     0,     0,    64,    65,     0,    66,    67,    68,    69,
      70,    71,     5,     6,     7,     8,     9,     0,    72,     0,
       0,    10,     0,   117,    74,    75,    76,    77,     0,     0,
       0,     0,    80,     0,    81,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,     0,     0,     0,     0,    30,    31,
     115,    33,    34,     0,     0,     0,     0,     0,    36,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   116,     0,     0,    58,    59,     0,     0,     0,     0,
       0,     0,     0,     0,    64,    65,     0,    66,    67,    68,
      69,    70,    71,     5,     6,     7,     8,     9,     0,    72,
       0,     0,    10,     0,   117,    74,    75,    76,    77,     0,
       0,     0,     0,    80,     0,    81,    82,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,     0,     0,     0,     0,    30,
      31,   115,   350,    34,     0,     0,     0,     0,     0,    36,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   116,     0,     0,    58,    59,     0,     0,     0,
       0,     0,     0,     0,     0,    64,    65,     0,    66,    67,
      68,    69,    70,    71,     0,     0,     0,     0,     0,     0,
      72,     0,   233,   234,   235,   117,    74,    75,    76,    77,
       0,     0,     0,     0,    80,     0,    81,    82,   236,     0,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,     0,   258,   233,   234,   235,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   236,
       0,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,     0,   258,   233,   234,   235,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     236,     0,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,     0,   258,     0,     0,     0,     0,   233,
     234,   235,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   236,   491,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,     0,   258,
     233,   234,   235,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   236,   502,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,     0,
     258,   233,   234,   235,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   236,   540,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
       0,   258,     0,     0,     0,     0,     0,     0,   233,   234,
     235,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   570,   236,   812,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,     0,   258,   233,
     234,   235,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   608,   236,     0,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,     0,   258,
     233,   234,   235,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   754,   236,     0,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,     0,
     258,     0,     0,   233,   234,   235,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   236,
     813,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,     0,   258,   233,   234,   235,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     236,   259,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,     0,   258,   233,   234,   235,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   236,   316,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,     0,   258,     0,     0,   233,   234,
     235,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   236,   317,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,     0,   258,   233,
     234,   235,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   236,   323,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,     0,   258,
       0,   233,   234,   235,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   361,   236,     0,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
       0,   258,   233,   234,   235,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   236,   431,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,     0,   258,   233,   234,   235,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   236,
     444,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,     0,   258,     0,   233,   234,   235,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   236,   445,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,     0,   258,   233,   234,   235,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   236,   455,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,     0,   258,   233,   234,   235,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   236,   549,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,     0,   258,     0,   233,
     234,   235,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   236,   759,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,     0,   258,
     233,   234,   235,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   236,   908,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,     0,
     258,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   923,   233,
     234,   235,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   291,   236,   612,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,     0,   258,
     233,   234,   235,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   543,   236,     0,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,     0,
     258,   234,   235,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   236,     0,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   235,
     258,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   236,     0,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   236,   258,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,     0,
     258,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,     0,   258,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,     0,   258,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,     0,   258
};

static const yytype_int16 yycheck[] =
{
      23,    24,   118,    27,    27,    27,    27,     4,   370,   278,
     443,   572,   422,   258,   434,   550,   436,     8,    49,   734,
     357,     8,     8,     8,    26,     8,     8,     8,     4,    52,
     440,   322,    26,    61,    61,   232,     8,    71,     8,   600,
       8,     8,     8,    61,    73,     8,    63,     8,   149,    61,
      73,     8,     8,    76,    71,    61,    73,    73,    71,    56,
      93,    94,    73,    23,    24,     0,    71,    27,    73,    98,
      73,    71,    73,    73,     0,    71,   148,    78,   275,   151,
     152,   197,    71,   503,    93,    94,   496,   149,   112,   144,
     287,   288,   144,   148,   149,   112,   148,   149,   149,   144,
     297,   144,   299,   148,   149,   148,   375,    59,    60,    71,
      61,    73,   112,    90,   148,    90,   139,   144,   152,   116,
     153,   149,   149,   146,   152,   152,   144,    73,   145,   152,
      26,   148,   145,    71,   152,   148,   160,   154,   154,   170,
     152,   142,   143,   154,   153,   145,   152,   152,   148,   154,
     152,   154,   514,   149,   154,    71,   157,   151,   495,   148,
     151,   152,   185,   118,   151,   151,   151,   190,   151,   151,
     151,   148,   123,   148,   584,   198,   199,   200,   893,   151,
     150,    71,   150,   150,   150,   208,   146,   150,   211,   150,
     152,   167,   154,   150,   150,   141,   142,   143,    78,   609,
     610,   621,    31,    31,   149,   615,   616,     8,   232,   148,
     149,   232,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    73,    71,   761,    73,    31,   145,
     190,   428,   148,   595,   258,   258,   258,   258,   198,   199,
     200,   149,    71,   663,    73,    73,   443,   641,   208,   149,
      71,   275,    73,    31,   275,    31,   144,   149,    59,    60,
     148,   141,   285,   287,   288,   144,   287,   288,   118,   148,
      73,   149,   295,   297,    71,   299,   297,   149,   299,    71,
     149,    73,   149,   112,   529,    73,   149,    71,   149,    73,
      78,   112,    71,   142,   143,    73,   319,    73,   258,    71,
     152,    73,    74,   326,   125,    71,   152,   669,   154,   703,
     333,   705,    61,    45,    46,    47,   145,    49,    71,   148,
     112,   344,   755,    31,   145,   154,   144,   148,   112,   126,
     127,   319,   149,   154,   625,   144,    73,   368,    61,   749,
     123,    78,    66,    67,    68,   333,   637,   370,   145,   150,
     619,   148,    98,   145,   142,   143,   148,   381,   148,   721,
     921,   145,   154,   796,   148,    49,   363,   148,   152,    71,
     154,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    73,   344,   232,   409,   363,    78,   148,
     149,   422,   144,    73,    92,    93,    94,   144,    78,    92,
      93,    94,   693,    73,   428,   142,   143,   428,    78,   440,
     155,   434,   774,   436,    92,    93,    94,    59,    60,   443,
     148,   149,   443,     8,   126,   127,    66,    67,   275,    92,
      93,    94,   148,   456,   457,   458,    66,    67,    68,   462,
     287,   288,   148,   145,    66,    67,   148,   144,   150,   409,
     144,   141,   142,   143,   477,   153,   151,   152,   820,   123,
     822,   141,   142,   143,   149,   496,    23,    24,   456,   457,
     458,    13,   142,   143,   434,   153,   436,    81,    82,   151,
     503,   750,   751,   151,    13,   508,   205,   510,   150,   156,
     209,   514,   152,    71,   517,   786,   153,   788,   860,   218,
      71,   220,   221,   222,   121,   529,   529,   529,   529,   151,
      61,    26,    98,   149,   149,    82,     8,   477,   151,    71,
     508,   107,   108,   109,   110,   111,   112,   818,    90,   552,
     553,   554,   894,    71,    42,    43,    44,    45,    46,    47,
     563,    49,   565,   503,   149,    73,    71,   150,   571,   572,
     151,   150,   575,   584,   577,    61,   847,   153,   755,    13,
     591,   121,   853,   155,   155,   149,   554,   929,   149,   529,
     593,   547,   595,   149,   149,   563,   149,   600,   609,   610,
     556,    26,    13,   571,   615,   616,   149,   153,   149,   148,
     881,   953,   552,   553,   144,   886,    71,    13,   621,   796,
     107,   108,   109,   110,   111,   112,   151,   153,   149,   632,
     149,     8,   148,   150,   149,   575,    99,   577,   909,   122,
     643,   104,   645,   155,   107,   108,   109,   110,   111,   112,
     113,   654,   152,   150,   150,    71,   124,   155,     8,   141,
     663,    71,   102,   155,   935,    13,   669,   938,   153,   150,
     673,   942,   628,   150,   152,   643,     8,   645,     8,   150,
     149,   621,   124,   153,   151,    13,   782,   151,   150,   960,
     153,   151,   632,   149,   697,     4,     5,     6,   701,     8,
       9,    10,    11,    12,    13,    14,   150,    16,    17,    18,
      19,    20,    21,    22,   654,   150,    25,    26,   721,   151,
     150,   104,    73,   663,    13,    61,   150,   150,    37,   150,
     150,   123,    61,   701,    89,    44,    45,   155,   749,   742,
     124,   150,    51,   150,    71,   149,   152,   152,    13,   123,
      99,   755,   151,   151,   755,   104,   733,   697,   107,   108,
     109,   110,   111,   112,   113,    83,   151,    13,    77,    73,
     773,   774,   152,    71,   742,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    73,   791,    13,
     150,   155,   796,   155,   151,   796,   149,   151,    23,    24,
      13,    71,    27,   150,   153,   773,    13,   153,   153,    73,
     149,    13,   121,    68,    26,    73,   819,   820,   153,   822,
     129,    59,    60,   791,    90,   105,   151,   153,    90,   151,
     144,   834,    73,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,   801,    49,    87,   151,   150,
      71,   819,   161,   319,   163,    13,   149,   860,   167,    73,
     169,   151,    68,   172,   867,     8,   834,   333,   871,    26,
      71,     8,    71,   152,   877,    85,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,   151,   150,
     149,   894,    73,   153,   203,   326,   153,   102,   207,   867,
     150,   152,   951,   871,   153,   363,   363,   477,   217,   877,
     595,   633,   697,   807,   811,   668,   673,   920,   921,   331,
     711,   146,    59,    60,   679,   234,   929,   860,   884,   563,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   879,
     953,   562,   920,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   190,   203,   276,   924,   278,
     279,   190,   577,   198,   199,   200,    23,    24,   654,    -1,
      -1,    -1,   291,   208,   293,    -1,    -1,    -1,    -1,    -1,
     456,   457,    -1,    -1,    -1,    -1,   305,    -1,    -1,   308,
      -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,   328,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   258,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   508,    42,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   363,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    -1,    -1,    -1,   375,    -1,   377,    -1,
      69,    70,    71,   382,    -1,   384,    -1,   386,   387,   388,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   554,    -1,
      -1,    -1,    -1,    -1,   319,    -1,    -1,    -1,    -1,   146,
      -1,    -1,    -1,    -1,    -1,   571,    -1,    -1,   333,    -1,
      -1,    -1,    -1,   112,    -1,    -1,    -1,    -1,    -1,   344,
      -1,    -1,    -1,   170,    -1,    -1,    -1,   126,    -1,   128,
     129,   130,   131,   132,   133,    -1,    -1,    -1,    -1,    -1,
      -1,   140,    -1,   190,    -1,    -1,   145,   146,   147,   148,
      -1,   198,   199,   200,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   208,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   643,    -1,   645,
      -1,   490,    -1,    25,   409,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,   434,
      -1,   436,    -1,    -1,    -1,    -1,   525,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,   456,   457,   458,   543,   701,    -1,    -1,   547,    -1,
      -1,   550,   551,    -1,    -1,    -1,    -1,   556,    -1,    -1,
      -1,    -1,   477,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   742,    -1,   503,    -1,
      -1,    -1,    -1,   508,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    -1,    -1,   344,    -1,    -1,
      -1,    -1,    -1,    -1,   529,    -1,    -1,   773,    -1,    -1,
     619,   620,    -1,   155,    -1,    -1,    -1,    -1,   627,   628,
      -1,   368,    -1,    -1,    -1,   791,    -1,   552,   553,   554,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   563,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   571,   656,    -1,    -1,
     575,    -1,   577,   819,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   409,    -1,    -1,    -1,    -1,    -1,   834,   678,
      -1,    -1,    -1,    -1,    -1,   422,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   434,    -1,   436,
      -1,    -1,    -1,   440,    -1,    -1,   621,    -1,    -1,    -1,
      -1,   867,    -1,    -1,    -1,   871,    -1,   632,    -1,    -1,
      -1,   877,    -1,    -1,    -1,    -1,    -1,    -1,   643,    -1,
     645,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   654,
     477,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   663,    -1,
      -1,   750,   751,    -1,    -1,    -1,    -1,    -1,    -1,   496,
      -1,    -1,   761,    -1,   920,    -1,   503,    -1,    -1,    -1,
     769,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   697,    -1,    -1,    -1,   701,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   801,    -1,    -1,    -1,    -1,   806,   807,    -1,
      -1,    -1,    -1,    -1,    -1,   552,   553,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   742,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   575,    -1,
     577,    -1,    -1,    -1,   843,    -1,    -1,   584,    -1,    -1,
      -1,    -1,    -1,    -1,   591,    -1,    -1,    -1,   773,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   609,   610,    -1,    -1,   791,    -1,   615,   616,
      -1,   880,    -1,    -1,   621,   884,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   632,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   819,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   654,    -1,   834,
      -1,    -1,    -1,    -1,    -1,   924,   663,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   867,    -1,    -1,    -1,   871,    -1,    -1,    -1,
     697,    -1,   877,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    -1,    75,    -1,    -1,   920,    79,    80,    81,    82,
      -1,    84,   749,    86,    -1,    88,    -1,    -1,    91,    -1,
      -1,    -1,    95,    96,    97,    98,    99,   100,   101,    -1,
     103,   104,    -1,   106,    -1,    -1,    -1,   110,   111,   112,
      -1,   114,   115,   116,   117,   118,   119,   120,    -1,    -1,
      -1,    -1,   125,   126,    -1,   128,   129,   130,   131,   132,
     133,     3,     4,     5,     6,     7,    -1,   140,    -1,    -1,
      12,    -1,   145,   146,   147,   148,   149,    -1,   151,   152,
      -1,   154,    -1,   156,   157,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    -1,    75,    -1,    -1,    -1,    79,    80,    81,
      82,    -1,    84,    -1,    86,    -1,    88,    -1,    -1,    91,
      -1,    -1,    -1,    95,    96,    97,    98,    -1,   100,   101,
      -1,   103,    -1,    -1,   106,    -1,    -1,    -1,   110,   111,
     112,    -1,   114,   115,   116,   117,   118,   119,   120,    -1,
      -1,    -1,    -1,   125,   126,    -1,   128,   129,   130,   131,
     132,   133,    -1,     3,     4,     5,     6,     7,   140,    -1,
      -1,    -1,    12,   145,   146,   147,   148,   149,    -1,   151,
     152,    -1,   154,    -1,   156,   157,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    -1,    75,    -1,    -1,    -1,    79,
      80,    81,    82,    -1,    84,    -1,    86,    -1,    88,    -1,
      -1,    91,    -1,    -1,    -1,    95,    96,    97,    98,    -1,
     100,   101,    -1,   103,    -1,    -1,   106,    -1,    -1,    -1,
      -1,    -1,   112,    -1,   114,   115,   116,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   125,   126,    -1,   128,   129,
     130,   131,   132,   133,    -1,     3,     4,     5,     6,     7,
     140,    -1,    -1,    -1,    12,   145,   146,   147,   148,   149,
      -1,   151,   152,    -1,   154,    -1,   156,   157,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    -1,    75,    -1,    -1,
      -1,    79,    80,    81,    82,    -1,    84,    -1,    86,    -1,
      88,    -1,    -1,    91,    -1,    -1,    -1,    95,    96,    97,
      98,    -1,   100,   101,    -1,   103,    -1,    -1,   106,    -1,
      -1,    -1,    -1,    -1,   112,    -1,   114,   115,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,   126,    -1,
     128,   129,   130,   131,   132,   133,    -1,     3,     4,     5,
       6,     7,   140,    -1,    -1,    -1,    12,   145,   146,   147,
     148,   149,    -1,   151,   152,    -1,   154,    -1,   156,   157,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,    75,
      -1,    -1,    -1,    79,    80,    81,    82,    -1,    84,    -1,
      86,    -1,    88,    -1,    -1,    91,    -1,    -1,    -1,    95,
      96,    97,    98,    -1,   100,   101,    -1,   103,    -1,    -1,
     106,    -1,    -1,    -1,    -1,    -1,   112,    -1,   114,   115,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,
     126,    -1,   128,   129,   130,   131,   132,   133,    -1,     3,
       4,     5,     6,     7,   140,    -1,    -1,    -1,    12,   145,
     146,   147,   148,   149,    -1,   151,   152,    -1,   154,    -1,
     156,   157,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      -1,    75,    -1,    -1,    -1,    79,    80,    81,    82,    -1,
      84,    -1,    86,    -1,    88,    -1,    -1,    91,    -1,    -1,
      -1,    95,    96,    97,    98,    -1,   100,   101,    -1,   103,
      -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,   112,    -1,
     114,   115,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   125,   126,    -1,   128,   129,   130,   131,   132,   133,
       3,     4,     5,     6,     7,    -1,   140,    -1,    -1,    12,
      -1,   145,   146,   147,   148,   149,    -1,   151,   152,    -1,
     154,    -1,   156,   157,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    -1,    75,    -1,    -1,    -1,    79,    80,    81,    82,
      -1,    84,    -1,    86,    -1,    88,    -1,    -1,    91,    -1,
      -1,    -1,    95,    96,    97,    98,    -1,   100,   101,    -1,
     103,    -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,   112,
      -1,   114,   115,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   125,   126,    -1,   128,   129,   130,   131,   132,
     133,     3,     4,     5,     6,     7,    -1,   140,    -1,    -1,
      12,    -1,   145,   146,   147,   148,   149,    -1,   151,   152,
      -1,   154,    -1,   156,   157,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    -1,    -1,    -1,    -1,    -1,    79,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    98,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     112,    -1,    -1,   115,   116,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   125,   126,    -1,   128,   129,   130,   131,
     132,   133,     3,     4,     5,     6,     7,    -1,   140,    -1,
      -1,    12,    -1,   145,   146,   147,   148,   149,    -1,    -1,
      -1,    -1,   154,    -1,   156,   157,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    98,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,    -1,    -1,   115,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   125,   126,    -1,   128,   129,   130,
     131,   132,   133,     3,     4,     5,     6,     7,    -1,   140,
      -1,    -1,    12,    -1,   145,   146,   147,   148,   149,    -1,
     151,    -1,    -1,   154,    -1,   156,   157,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   112,    -1,    -1,   115,   116,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   125,   126,    -1,   128,   129,
     130,   131,   132,   133,     3,     4,     5,     6,     7,    -1,
     140,    -1,    -1,    12,    -1,   145,   146,   147,   148,   149,
      -1,   151,    -1,    -1,   154,    -1,   156,   157,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,
      79,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   112,    -1,    -1,   115,   116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   125,   126,    -1,   128,
     129,   130,   131,   132,   133,     3,     4,     5,     6,     7,
      -1,   140,    -1,    -1,    12,    -1,   145,   146,   147,   148,
     149,    -1,   151,    -1,    -1,   154,    -1,   156,   157,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   112,    -1,    -1,   115,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,   126,    -1,
     128,   129,   130,   131,   132,   133,     3,     4,     5,     6,
       7,    -1,   140,    -1,    -1,    12,    -1,   145,   146,   147,
     148,   149,   150,    -1,    -1,    -1,   154,    -1,   156,   157,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,   115,   116,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,   126,
      -1,   128,   129,   130,   131,   132,   133,     3,     4,     5,
       6,     7,    -1,   140,    -1,    -1,    12,    -1,   145,   146,
     147,   148,   149,    -1,    -1,    -1,    -1,   154,    -1,   156,
     157,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,   115,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,
     126,    -1,   128,   129,   130,   131,   132,   133,     3,     4,
       5,     6,     7,    -1,   140,    -1,    -1,    12,    -1,   145,
     146,   147,   148,   149,    -1,    -1,    -1,    -1,   154,    -1,
     156,   157,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,
     115,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     125,   126,    -1,   128,   129,   130,   131,   132,   133,     3,
       4,     5,     6,     7,    -1,   140,    -1,    -1,    12,    -1,
     145,   146,   147,   148,   149,    -1,    -1,    -1,    -1,   154,
      -1,   156,   157,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,
      -1,   115,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   125,   126,    -1,   128,   129,   130,   131,   132,   133,
       3,     4,     5,     6,     7,    -1,   140,    -1,    -1,    12,
      -1,   145,   146,   147,   148,   149,    -1,    -1,    -1,    -1,
     154,    -1,   156,   157,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,
      -1,    -1,   115,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   125,   126,    -1,   128,   129,   130,   131,   132,
     133,     3,     4,     5,     6,     7,    -1,   140,    -1,    -1,
      12,    -1,   145,   146,   147,   148,   149,    -1,    -1,    -1,
      -1,   154,    -1,   156,   157,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     112,    -1,    -1,   115,   116,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   125,   126,    -1,   128,   129,   130,   131,
     132,   133,     3,     4,     5,     6,     7,    -1,   140,    -1,
      -1,    12,    -1,   145,   146,   147,   148,   149,    -1,    -1,
      -1,    -1,   154,    -1,   156,   157,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,    -1,    -1,   115,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   125,   126,    -1,   128,   129,   130,
     131,   132,   133,     3,     4,     5,     6,     7,    -1,   140,
      -1,    -1,    12,    -1,   145,   146,   147,   148,   149,    -1,
      -1,    -1,    -1,   154,    -1,   156,   157,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   112,    -1,    -1,   115,   116,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   125,   126,    -1,   128,   129,
     130,   131,   132,   133,    -1,    -1,    -1,    -1,    -1,    -1,
     140,    -1,     9,    10,    11,   145,   146,   147,   148,   149,
      -1,    -1,    -1,    -1,   154,    -1,   156,   157,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,   153,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,   153,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   153,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   153,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   153,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   153,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
     151,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,   151,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,   151,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,   151,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,   151,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   150,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   150,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
     150,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,   150,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,   150,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,   150,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,   150,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,   150,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   150,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   124,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   124,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    11,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    25,    49,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   159,   160,     0,   161,     3,     4,     5,     6,     7,
      12,    42,    43,    48,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      69,    70,    71,    72,    73,    75,    79,    80,    81,    82,
      84,    86,    88,    91,    95,    96,    97,    98,    99,   100,
     101,   103,   104,   106,   110,   111,   112,   114,   115,   116,
     117,   118,   119,   120,   125,   126,   128,   129,   130,   131,
     132,   133,   140,   145,   146,   147,   148,   149,   151,   152,
     154,   156,   157,   162,   163,   168,   172,   173,   203,   204,
     206,   208,   211,   213,   270,   284,   287,   296,   307,   310,
     314,   315,   317,   318,   328,   329,   330,   331,   333,   334,
     335,   336,   342,   352,   355,    71,   112,   145,   284,   314,
     314,   149,   314,   314,   314,   314,   314,   314,   314,   281,
     314,   314,   314,   314,   314,   314,   314,   112,   145,   148,
     162,   296,   317,   318,   330,   317,    31,   314,   346,   347,
     314,   145,   148,   162,   296,   298,   299,   330,   334,   335,
     342,   149,   304,   149,    26,   266,   314,   180,   149,   149,
     149,   190,   149,   151,   314,   151,   314,    71,    71,   151,
     270,   314,   318,   191,   314,   148,   162,   166,   167,    73,
     154,   240,   241,   118,   118,    73,   242,   284,   149,   149,
     149,   149,   149,   149,    73,    78,   141,   142,   143,   348,
     349,   148,   152,   162,   162,   314,   169,   152,    78,   305,
     348,    78,   348,   148,   149,     8,   151,    71,    71,    31,
     205,   332,   144,     9,    10,    11,    25,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    49,   151,
      59,    60,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,   149,   144,    61,   123,    61,   152,
     154,   335,   205,   314,   314,   148,   162,   144,   144,   316,
     318,   124,   155,     8,   312,   148,   162,   144,   273,   144,
     123,   335,   150,   314,   314,     8,   151,   172,   178,   267,
     268,   314,   270,   318,   149,   314,   151,   151,   151,    13,
     151,   151,   152,   151,   162,    90,     8,   151,   152,   315,
     318,     8,   151,    13,     8,   151,   205,   201,   202,   318,
     318,   353,   318,   150,   271,   346,    61,   123,   141,   349,
      72,   314,   318,    78,   141,   349,   162,   165,   151,   152,
     149,   150,   153,   170,   314,   156,   157,    71,   288,    71,
     121,   212,   210,    71,   149,    61,    71,   152,   328,   335,
     341,   342,   276,   314,   277,    26,   278,   274,   275,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   298,    31,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   295,    71,   328,   341,   314,   337,   319,   337,
     314,   150,   162,    71,    31,   314,    31,   314,   162,   328,
     149,   306,   328,   300,   150,   150,   314,    82,   314,   151,
       8,    90,    90,    71,   222,   150,    42,    43,    61,   126,
     140,   145,   148,   162,   296,   307,   308,   309,   169,    90,
      71,   167,   314,   241,   308,    73,   149,     8,   150,     8,
     150,   150,   151,   125,   318,   343,   344,   150,   350,    71,
      61,   153,   153,   149,   160,   164,   290,   117,   171,   172,
     203,   204,   153,    31,   238,   239,   270,   318,    13,   145,
     148,   162,   297,   209,   121,   214,   207,   282,   337,   314,
     149,   149,   335,   314,   314,   280,   314,   314,   314,    63,
     318,   238,   149,   149,   155,   328,   338,   340,   341,   155,
     153,   316,   316,   124,   238,   338,    26,   174,   149,   150,
     182,   269,   188,   186,    13,     8,   150,   185,   308,   308,
     308,   311,   313,   149,    78,   148,   162,   144,   153,    71,
     153,    13,   283,   202,   151,   354,   149,     8,   150,    71,
      73,    74,   351,   314,   289,   153,   160,   238,   149,   316,
     150,     8,   308,   148,   162,   122,   215,   216,   297,   152,
     149,   126,   127,   235,   236,   237,   297,   155,   153,   292,
     291,   314,    26,   298,   150,   294,   293,   339,   320,    61,
     152,    31,   314,   150,   301,   176,   172,   181,   179,   267,
     314,   318,    31,   218,   318,   308,    71,    26,   172,   221,
      26,   152,   223,   124,   155,     8,   312,   311,   162,    71,
     102,   308,   235,   318,   345,   344,    13,   155,   155,   238,
     153,   150,   150,    31,   270,   318,   162,   216,   152,     8,
     243,   235,   150,     8,    31,    73,   238,   238,   279,   272,
     238,   238,   149,   324,   325,   327,   337,   314,   316,   302,
     169,   175,   314,    26,   172,   228,   151,   124,   217,   318,
     217,    13,   169,   151,   224,   151,   224,   308,   308,   150,
     149,   150,   343,   314,   153,   150,   151,   316,   243,   297,
      99,   104,   107,   108,   109,   110,   111,   112,   113,   153,
     244,   247,   260,   261,   262,   263,   265,   150,   104,   285,
     237,    73,    13,   150,   150,   314,   306,   150,   150,   326,
      61,    61,   321,   155,   153,   123,   303,   177,   229,   150,
     169,   183,   218,   150,   150,   308,    89,   224,    92,    93,
      94,   224,   153,   124,   192,   285,   150,   153,    71,   248,
     297,   245,   284,   263,     8,   151,   152,   149,   152,    31,
      73,    13,   308,   238,   337,   337,   123,   322,   338,   231,
      66,    67,   233,   151,    83,   267,   189,   187,   151,    92,
     151,   314,    26,   151,   227,   153,   308,   297,   152,    13,
       8,   151,   152,   249,    73,   264,   205,    71,   169,    31,
      73,   286,   169,    73,    13,   308,   150,   155,   155,   338,
      66,    67,   234,   149,   172,   151,   150,    26,   172,   220,
     220,   151,   227,   226,   193,   169,   308,   297,    71,   250,
     251,   252,   253,   255,   256,   257,   297,    13,     8,   151,
      71,    13,   153,    73,     8,   150,   153,    13,   308,   323,
     149,    26,    68,   314,   184,   169,   225,   169,    73,   153,
     153,   252,   151,    90,   105,   151,   144,   308,    73,   246,
     308,    31,    73,   308,   327,   314,   169,   151,   150,    26,
     172,   219,    87,   169,   150,   258,   263,   254,   297,    71,
      13,   149,    73,   150,   230,   169,   151,   194,    71,     8,
     308,   235,    26,   172,    85,   152,   297,   150,   232,   151,
     169,   151,   152,   259,   169,   153,   169,   195,   153,   102,
     196,   197,   198,   149,   198,   297,   199,    73,   150,   200,
     152,   169,   153
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

    { zend_do_end_compilation(TSRMLS_C); }
    break;

  case 3:

    { zend_do_extended_info(TSRMLS_C); }
    break;

  case 4:

    { HANDLE_INTERACTIVE(); }
    break;

  case 6:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 7:

    { zend_do_build_namespace_name(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 8:

    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 9:

    { zend_verify_namespace(TSRMLS_C); zend_do_early_binding(TSRMLS_C); }
    break;

  case 10:

    { zend_verify_namespace(TSRMLS_C); zend_do_early_binding(TSRMLS_C); }
    break;

  case 11:

    { zend_do_halt_compiler_register(TSRMLS_C); YYACCEPT; }
    break;

  case 12:

    { zend_do_begin_namespace(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 13:

    { zend_do_begin_namespace(&(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 14:

    { zend_do_end_namespace(TSRMLS_C); }
    break;

  case 15:

    { zend_do_begin_namespace(NULL, 1 TSRMLS_CC); }
    break;

  case 16:

    { zend_do_end_namespace(TSRMLS_C); }
    break;

  case 17:

    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 18:

    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 21:

    { zend_do_use(&(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 22:

    { zend_do_use(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 23:

    { zend_do_use(&(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 24:

    { zend_do_use(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 25:

    { zend_do_declare_constant(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 26:

    { zend_do_declare_constant(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 27:

    { zend_do_extended_info(TSRMLS_C); }
    break;

  case 28:

    { HANDLE_INTERACTIVE(); }
    break;

  case 33:

    { zend_error(E_COMPILE_ERROR, "__HALT_COMPILER() can only be used from the outermost scope"); }
    break;

  case 34:

    { DO_TICKS(); }
    break;

  case 35:

    { zend_do_label(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 37:

    { zend_do_if_cond(&(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 38:

    { zend_do_if_after_statement(&(yyvsp[(4) - (6)]), 1 TSRMLS_CC); }
    break;

  case 39:

    { zend_do_if_end(TSRMLS_C); }
    break;

  case 40:

    { zend_do_if_cond(&(yyvsp[(3) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 41:

    { zend_do_if_after_statement(&(yyvsp[(4) - (7)]), 1 TSRMLS_CC); }
    break;

  case 42:

    { zend_do_if_end(TSRMLS_C); }
    break;

  case 43:

    { (yyvsp[(1) - (2)]).u.op.opline_num = get_next_op_number(CG(active_op_array));  }
    break;

  case 44:

    { zend_do_while_cond(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 45:

    { zend_do_while_end(&(yyvsp[(1) - (7)]), &(yyvsp[(5) - (7)]) TSRMLS_CC); }
    break;

  case 46:

    { (yyvsp[(1) - (1)]).u.op.opline_num = get_next_op_number(CG(active_op_array));  zend_do_do_while_begin(TSRMLS_C); }
    break;

  case 47:

    { (yyvsp[(5) - (5)]).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 48:

    { zend_do_do_while_end(&(yyvsp[(1) - (9)]), &(yyvsp[(5) - (9)]), &(yyvsp[(7) - (9)]) TSRMLS_CC); }
    break;

  case 49:

    { zend_do_free(&(yyvsp[(3) - (4)]) TSRMLS_CC); (yyvsp[(4) - (4)]).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 50:

    { zend_do_extended_info(TSRMLS_C); zend_do_for_cond(&(yyvsp[(6) - (7)]), &(yyvsp[(7) - (7)]) TSRMLS_CC); }
    break;

  case 51:

    { zend_do_free(&(yyvsp[(9) - (10)]) TSRMLS_CC); zend_do_for_before_statement(&(yyvsp[(4) - (10)]), &(yyvsp[(7) - (10)]) TSRMLS_CC); }
    break;

  case 52:

    { zend_do_for_end(&(yyvsp[(7) - (12)]) TSRMLS_CC); }
    break;

  case 53:

    { zend_do_switch_cond(&(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 54:

    { zend_do_switch_end(&(yyvsp[(6) - (6)]) TSRMLS_CC); }
    break;

  case 55:

    { zend_do_brk_cont(ZEND_BRK, NULL TSRMLS_CC); }
    break;

  case 56:

    { zend_do_brk_cont(ZEND_BRK, &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 57:

    { zend_do_brk_cont(ZEND_CONT, NULL TSRMLS_CC); }
    break;

  case 58:

    { zend_do_brk_cont(ZEND_CONT, &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 59:

    { zend_do_return(NULL, 0 TSRMLS_CC); }
    break;

  case 60:

    { zend_do_return(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 61:

    { zend_do_return(&(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 65:

    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 66:

    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 68:

    { zend_do_foreach_begin(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 69:

    { zend_do_foreach_cont(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]), &(yyvsp[(4) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(7) - (8)]) TSRMLS_CC); }
    break;

  case 70:

    { zend_do_foreach_end(&(yyvsp[(1) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); }
    break;

  case 71:

    { zend_do_foreach_begin(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 0 TSRMLS_CC); }
    break;

  case 72:

    { zend_check_writable_variable(&(yyvsp[(6) - (8)])); zend_do_foreach_cont(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]), &(yyvsp[(4) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(7) - (8)]) TSRMLS_CC); }
    break;

  case 73:

    { zend_do_foreach_end(&(yyvsp[(1) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); }
    break;

  case 74:

    { (yyvsp[(1) - (1)]).u.op.opline_num = get_next_op_number(CG(active_op_array)); zend_do_declare_begin(TSRMLS_C); }
    break;

  case 75:

    { zend_do_declare_end(&(yyvsp[(1) - (6)]) TSRMLS_CC); }
    break;

  case 77:

    { zend_do_try(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 78:

    { zend_initialize_try_catch_element(&(yyvsp[(1) - (7)]) TSRMLS_CC); }
    break;

  case 79:

    { zend_do_first_catch(&(yyvsp[(7) - (9)]) TSRMLS_CC); }
    break;

  case 80:

    { zend_do_begin_catch(&(yyvsp[(1) - (12)]), &(yyvsp[(9) - (12)]), &(yyvsp[(11) - (12)]), &(yyvsp[(7) - (12)]) TSRMLS_CC); }
    break;

  case 81:

    { zend_do_end_catch(&(yyvsp[(1) - (16)]) TSRMLS_CC); }
    break;

  case 82:

    { zend_do_mark_last_catch(&(yyvsp[(7) - (18)]), &(yyvsp[(18) - (18)]) TSRMLS_CC); }
    break;

  case 83:

    { zend_do_throw(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 84:

    { zend_do_goto(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 85:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 86:

    { (yyval).u.op.opline_num = -1; }
    break;

  case 87:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 88:

    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 89:

    { (yyval).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 90:

    { zend_do_begin_catch(&(yyvsp[(1) - (6)]), &(yyvsp[(3) - (6)]), &(yyvsp[(5) - (6)]), NULL TSRMLS_CC); }
    break;

  case 91:

    { zend_do_end_catch(&(yyvsp[(1) - (10)]) TSRMLS_CC); }
    break;

  case 94:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_UNSET, 0 TSRMLS_CC); zend_do_unset(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 95:

    { DO_TICKS(); }
    break;

  case 96:

    { DO_TICKS(); }
    break;

  case 97:

    { (yyval).op_type = ZEND_RETURN_VAL; }
    break;

  case 98:

    { (yyval).op_type = ZEND_RETURN_REF; }
    break;

  case 99:

    { zend_do_begin_function_declaration(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0, (yyvsp[(2) - (3)]).op_type, NULL TSRMLS_CC); }
    break;

  case 100:

    { zend_do_end_function_declaration(&(yyvsp[(1) - (10)]) TSRMLS_CC); }
    break;

  case 101:

    { zend_do_begin_class_declaration(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 102:

    { zend_do_end_class_declaration(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]) TSRMLS_CC); }
    break;

  case 103:

    { zend_do_begin_class_declaration(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]), NULL TSRMLS_CC); }
    break;

  case 104:

    { zend_do_end_class_declaration(&(yyvsp[(1) - (7)]), &(yyvsp[(2) - (7)]) TSRMLS_CC); }
    break;

  case 105:

    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = 0; }
    break;

  case 106:

    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_EXPLICIT_ABSTRACT_CLASS; }
    break;

  case 107:

    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_TRAIT; }
    break;

  case 108:

    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_FINAL_CLASS; }
    break;

  case 109:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 110:

    { zend_do_fetch_class(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 111:

    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_INTERFACE; }
    break;

  case 116:

    { zend_do_implements_interface(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 117:

    { zend_do_implements_interface(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 118:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 119:

    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 120:

    { zend_check_writable_variable(&(yyvsp[(1) - (1)])); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 121:

    { zend_check_writable_variable(&(yyvsp[(2) - (2)])); (yyval) = (yyvsp[(2) - (2)]);  (yyval).EA |= ZEND_PARSED_REFERENCE_VARIABLE; }
    break;

  case 128:

    { zend_do_declare_stmt(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 129:

    { zend_do_declare_stmt(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 130:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 131:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 132:

    { (yyval) = (yyvsp[(2) - (4)]); }
    break;

  case 133:

    { (yyval) = (yyvsp[(3) - (5)]); }
    break;

  case 134:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 135:

    { zend_do_extended_info(TSRMLS_C);  zend_do_case_before_statement(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 136:

    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (6)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 137:

    { zend_do_extended_info(TSRMLS_C);  zend_do_default_before_statement(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 138:

    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (5)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 144:

    { zend_do_if_cond(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 145:

    { zend_do_if_after_statement(&(yyvsp[(5) - (7)]), 0 TSRMLS_CC); }
    break;

  case 147:

    { zend_do_if_cond(&(yyvsp[(4) - (6)]), &(yyvsp[(5) - (6)]) TSRMLS_CC); }
    break;

  case 148:

    { zend_do_if_after_statement(&(yyvsp[(5) - (8)]), 0 TSRMLS_CC); }
    break;

  case 155:

    { (yyval).op_type = IS_UNUSED; (yyval).u.op.num=1; zend_do_receive_arg(ZEND_RECV, &(yyvsp[(2) - (2)]), &(yyval), NULL, &(yyvsp[(1) - (2)]), 0 TSRMLS_CC); }
    break;

  case 156:

    { (yyval).op_type = IS_UNUSED; (yyval).u.op.num=1; zend_do_receive_arg(ZEND_RECV, &(yyvsp[(3) - (3)]), &(yyval), NULL, &(yyvsp[(1) - (3)]), 1 TSRMLS_CC); }
    break;

  case 157:

    { (yyval).op_type = IS_UNUSED; (yyval).u.op.num=1; zend_do_receive_arg(ZEND_RECV_INIT, &(yyvsp[(3) - (5)]), &(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(1) - (5)]), 1 TSRMLS_CC); }
    break;

  case 158:

    { (yyval).op_type = IS_UNUSED; (yyval).u.op.num=1; zend_do_receive_arg(ZEND_RECV_INIT, &(yyvsp[(2) - (4)]), &(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 0 TSRMLS_CC); }
    break;

  case 159:

    { (yyval)=(yyvsp[(1) - (4)]); (yyval).u.op.num++; zend_do_receive_arg(ZEND_RECV, &(yyvsp[(4) - (4)]), &(yyval), NULL, &(yyvsp[(3) - (4)]), 0 TSRMLS_CC); }
    break;

  case 160:

    { (yyval)=(yyvsp[(1) - (5)]); (yyval).u.op.num++; zend_do_receive_arg(ZEND_RECV, &(yyvsp[(5) - (5)]), &(yyval), NULL, &(yyvsp[(3) - (5)]), 1 TSRMLS_CC); }
    break;

  case 161:

    { (yyval)=(yyvsp[(1) - (7)]); (yyval).u.op.num++; zend_do_receive_arg(ZEND_RECV_INIT, &(yyvsp[(5) - (7)]), &(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(3) - (7)]), 1 TSRMLS_CC); }
    break;

  case 162:

    { (yyval)=(yyvsp[(1) - (6)]); (yyval).u.op.num++; zend_do_receive_arg(ZEND_RECV_INIT, &(yyvsp[(4) - (6)]), &(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), 0 TSRMLS_CC); }
    break;

  case 163:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 164:

    { (yyval).op_type = IS_CONST; Z_TYPE((yyval).u.constant)=IS_ARRAY; }
    break;

  case 165:

    { (yyval).op_type = IS_CONST; Z_TYPE((yyval).u.constant)=IS_CALLABLE; }
    break;

  case 166:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 167:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 168:

    { Z_LVAL((yyval).u.constant) = 0; }
    break;

  case 169:

    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 170:

    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAR, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 171:

    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(2) - (2)]), ZEND_SEND_REF, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 172:

    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (3)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(3) - (3)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 173:

    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (3)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(3) - (3)]), ZEND_SEND_VAR, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 174:

    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (4)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(4) - (4)]), ZEND_SEND_REF, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 175:

    { zend_do_fetch_global_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 176:

    { zend_do_fetch_global_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 177:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 178:

    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 179:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 180:

    { zend_do_fetch_static_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 181:

    { zend_do_fetch_static_variable(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 182:

    { zend_do_fetch_static_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 183:

    { zend_do_fetch_static_variable(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 186:

    { CG(access_type) = Z_LVAL((yyvsp[(1) - (1)]).u.constant); }
    break;

  case 190:

    { zend_do_begin_function_declaration(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]), 1, (yyvsp[(3) - (4)]).op_type, &(yyvsp[(1) - (4)]) TSRMLS_CC); }
    break;

  case 191:

    { zend_do_abstract_method(&(yyvsp[(4) - (9)]), &(yyvsp[(1) - (9)]), &(yyvsp[(9) - (9)]) TSRMLS_CC); zend_do_end_function_declaration(&(yyvsp[(2) - (9)]) TSRMLS_CC); }
    break;

  case 193:

    { zend_do_implements_trait(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 194:

    { zend_do_implements_trait(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 201:

    { zend_add_trait_precedence(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 202:

    { zend_add_trait_alias(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 203:

    { zend_prepare_trait_precedence(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 204:

    { zend_resolve_class_name(&(yyvsp[(1) - (1)]), ZEND_FETCH_CLASS_GLOBAL, 1 TSRMLS_CC); zend_init_list(&(yyval).u.op.ptr, Z_STRVAL((yyvsp[(1) - (1)]).u.constant) TSRMLS_CC); }
    break;

  case 205:

    { zend_resolve_class_name(&(yyvsp[(3) - (3)]), ZEND_FETCH_CLASS_GLOBAL, 1 TSRMLS_CC); zend_add_to_list(&(yyvsp[(1) - (3)]).u.op.ptr, Z_STRVAL((yyvsp[(3) - (3)]).u.constant) TSRMLS_CC); (yyval) = (yyvsp[(1) - (3)]); }
    break;

  case 206:

    { zend_prepare_reference(&(yyval), NULL, &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 207:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 208:

    { zend_prepare_reference(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 209:

    { zend_prepare_trait_alias(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 210:

    { zend_prepare_trait_alias(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), NULL TSRMLS_CC); }
    break;

  case 211:

    { Z_LVAL((yyval).u.constant) = 0x0; }
    break;

  case 212:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 213:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 214:

    { Z_LVAL((yyval).u.constant) = 0;	}
    break;

  case 215:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 216:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 217:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 218:

    { (yyval) = (yyvsp[(1) - (1)]);  if (!(Z_LVAL((yyval).u.constant) & ZEND_ACC_PPP_MASK)) { Z_LVAL((yyval).u.constant) |= ZEND_ACC_PUBLIC; } }
    break;

  case 219:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 220:

    { Z_LVAL((yyval).u.constant) = zend_do_verify_access_types(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)])); }
    break;

  case 221:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 222:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PROTECTED; }
    break;

  case 223:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PRIVATE; }
    break;

  case 224:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_STATIC; }
    break;

  case 225:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 226:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_FINAL; }
    break;

  case 227:

    { zend_do_declare_property(&(yyvsp[(3) - (3)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 228:

    { zend_do_declare_property(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), CG(access_type) TSRMLS_CC); }
    break;

  case 229:

    { zend_do_declare_property(&(yyvsp[(1) - (1)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 230:

    { zend_do_declare_property(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), CG(access_type) TSRMLS_CC); }
    break;

  case 231:

    { zend_do_declare_class_constant(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 232:

    { zend_do_declare_class_constant(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 233:

    { zend_do_echo(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 234:

    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 235:

    { (yyval).op_type = IS_CONST;  Z_TYPE((yyval).u.constant) = IS_BOOL;  Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 236:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 237:

    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 238:

    { (yyval) = (yyvsp[(4) - (4)]); }
    break;

  case 239:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 240:

    { zend_do_list_init(TSRMLS_C); }
    break;

  case 241:

    { zend_do_list_end(&(yyval), &(yyvsp[(7) - (7)]) TSRMLS_CC); }
    break;

  case 242:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_assign(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 243:

    { zend_check_writable_variable(&(yyvsp[(1) - (4)])); zend_do_end_variable_parse(&(yyvsp[(4) - (4)]), BP_VAR_W, 1 TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(1) - (4)]), BP_VAR_W, 0 TSRMLS_CC); zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 244:

    { zend_error(E_DEPRECATED, "Assigning the return value of new by reference is deprecated");  zend_check_writable_variable(&(yyvsp[(1) - (5)])); zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 245:

    { zend_do_end_new_object(&(yyvsp[(3) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(7) - (7)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); zend_do_end_variable_parse(&(yyvsp[(1) - (7)]), BP_VAR_W, 0 TSRMLS_CC); (yyvsp[(3) - (7)]).EA = ZEND_PARSED_NEW; zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (7)]), &(yyvsp[(3) - (7)]) TSRMLS_CC); }
    break;

  case 246:

    { zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 247:

    { zend_do_end_new_object(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 248:

    { zend_do_clone(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 249:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 250:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 251:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 252:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 253:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 254:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 255:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 256:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_OR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 257:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 258:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 259:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 260:

    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_INC TSRMLS_CC); }
    break;

  case 261:

    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_INC TSRMLS_CC); }
    break;

  case 262:

    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_DEC TSRMLS_CC); }
    break;

  case 263:

    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_DEC TSRMLS_CC); }
    break;

  case 264:

    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 265:

    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 266:

    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 267:

    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 268:

    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 269:

    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 270:

    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 271:

    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 272:

    { zend_do_binary_op(ZEND_BOOL_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 273:

    { zend_do_binary_op(ZEND_BW_OR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 274:

    { zend_do_binary_op(ZEND_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 275:

    { zend_do_binary_op(ZEND_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 276:

    { zend_do_binary_op(ZEND_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 277:

    { zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 278:

    { zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 279:

    { zend_do_binary_op(ZEND_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 280:

    { zend_do_binary_op(ZEND_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 281:

    { zend_do_binary_op(ZEND_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 282:

    { zend_do_binary_op(ZEND_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 283:

    { zend_do_binary_op(ZEND_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 284:

    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); if ((yyvsp[(2) - (2)]).op_type == IS_CONST) { add_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); } else { (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); } }
    break;

  case 285:

    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); if ((yyvsp[(2) - (2)]).op_type == IS_CONST) { sub_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); } else { (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); } }
    break;

  case 286:

    { zend_do_unary_op(ZEND_BOOL_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 287:

    { zend_do_unary_op(ZEND_BW_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 288:

    { zend_do_binary_op(ZEND_IS_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 289:

    { zend_do_binary_op(ZEND_IS_NOT_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 290:

    { zend_do_binary_op(ZEND_IS_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 291:

    { zend_do_binary_op(ZEND_IS_NOT_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 292:

    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 293:

    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 294:

    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 295:

    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 296:

    { zend_do_instanceof(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 297:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 298:

    { zend_do_begin_qm_op(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 299:

    { zend_do_qm_true(&(yyvsp[(4) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 300:

    { zend_do_qm_false(&(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(2) - (7)]), &(yyvsp[(5) - (7)]) TSRMLS_CC); }
    break;

  case 301:

    { zend_do_jmp_set(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 302:

    { zend_do_jmp_set_else(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(3) - (5)]) TSRMLS_CC); }
    break;

  case 303:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 304:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_LONG TSRMLS_CC); }
    break;

  case 305:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_DOUBLE TSRMLS_CC); }
    break;

  case 306:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_STRING TSRMLS_CC); }
    break;

  case 307:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_ARRAY TSRMLS_CC); }
    break;

  case 308:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_OBJECT TSRMLS_CC); }
    break;

  case 309:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_BOOL TSRMLS_CC); }
    break;

  case 310:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_NULL TSRMLS_CC); }
    break;

  case 311:

    { zend_do_exit(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 312:

    { zend_do_begin_silence(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 313:

    { zend_do_end_silence(&(yyvsp[(1) - (3)]) TSRMLS_CC); (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 314:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 315:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 316:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 317:

    { zend_do_shell_exec(&(yyval), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 318:

    { zend_do_print(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 319:

    { zend_do_begin_lambda_function_declaration(&(yyval), &(yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]).op_type, 0 TSRMLS_CC); }
    break;

  case 320:

    {  zend_do_end_function_declaration(&(yyvsp[(1) - (10)]) TSRMLS_CC); (yyval) = (yyvsp[(4) - (10)]); }
    break;

  case 321:

    { zend_do_begin_lambda_function_declaration(&(yyval), &(yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]).op_type, 1 TSRMLS_CC); }
    break;

  case 322:

    {  zend_do_end_function_declaration(&(yyvsp[(2) - (11)]) TSRMLS_CC); (yyval) = (yyvsp[(5) - (11)]); }
    break;

  case 323:

    { (yyval).u.op.opline_num = CG(zend_lineno); }
    break;

  case 326:

    { zend_do_fetch_lexical_variable(&(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 327:

    { zend_do_fetch_lexical_variable(&(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 328:

    { zend_do_fetch_lexical_variable(&(yyvsp[(1) - (1)]), 0 TSRMLS_CC); }
    break;

  case 329:

    { zend_do_fetch_lexical_variable(&(yyvsp[(2) - (2)]), 1 TSRMLS_CC); }
    break;

  case 330:

    { (yyvsp[(2) - (2)]).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(1) - (2)]), 1 TSRMLS_CC); }
    break;

  case 331:

    { zend_do_end_function_call(&(yyvsp[(1) - (5)]), &(yyval), &(yyvsp[(4) - (5)]), 0, (yyvsp[(2) - (5)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 332:

    { (yyvsp[(1) - (4)]).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyvsp[(1) - (4)]).u.constant);  zend_do_build_namespace_name(&(yyvsp[(1) - (4)]), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); (yyvsp[(4) - (4)]).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(1) - (4)]), 0 TSRMLS_CC); }
    break;

  case 333:

    { zend_do_end_function_call(&(yyvsp[(1) - (7)]), &(yyval), &(yyvsp[(6) - (7)]), 0, (yyvsp[(4) - (7)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 334:

    { (yyvsp[(3) - (3)]).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 335:

    { zend_do_end_function_call(&(yyvsp[(2) - (6)]), &(yyval), &(yyvsp[(5) - (6)]), 0, (yyvsp[(3) - (6)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 336:

    { (yyvsp[(4) - (4)]).u.op.opline_num = zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 337:

    { zend_do_end_function_call((yyvsp[(4) - (7)]).u.op.opline_num?NULL:&(yyvsp[(3) - (7)]), &(yyval), &(yyvsp[(6) - (7)]), (yyvsp[(4) - (7)]).u.op.opline_num, (yyvsp[(4) - (7)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 338:

    { zend_do_end_variable_parse(&(yyvsp[(3) - (4)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 339:

    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(6) - (7)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 340:

    { zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 341:

    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(6) - (7)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 342:

    { zend_do_end_variable_parse(&(yyvsp[(3) - (4)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 343:

    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(6) - (7)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 344:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (2)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_dynamic_function_call(&(yyvsp[(1) - (2)]), 0 TSRMLS_CC); }
    break;

  case 345:

    { zend_do_end_function_call(&(yyvsp[(1) - (5)]), &(yyval), &(yyvsp[(4) - (5)]), 0, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 346:

    { (yyval).op_type = IS_CONST; ZVAL_STRINGL(&(yyval).u.constant, "static", sizeof("static")-1, 1);}
    break;

  case 347:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 348:

    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 349:

    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 350:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 351:

    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 352:

    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 353:

    { zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 354:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 355:

    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 356:

    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 357:

    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).EA = ZEND_PARSED_MEMBER; }
    break;

  case 358:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 361:

    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 362:

    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 363:

    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 364:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 365:

    { ZVAL_EMPTY_STRING(&(yyval).u.constant); INIT_PZVAL(&(yyval).u.constant); (yyval).op_type = IS_CONST; }
    break;

  case 366:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 367:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 368:

    { Z_LVAL((yyval).u.constant)=0; }
    break;

  case 369:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 370:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 371:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 372:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 373:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 374:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 375:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 376:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 377:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 378:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 379:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 380:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 381:

    { (yyval) = (yyvsp[(2) - (3)]); CG(heredoc) = Z_STRVAL((yyvsp[(1) - (3)]).u.constant); CG(heredoc_len) = Z_STRLEN((yyvsp[(1) - (3)]).u.constant); }
    break;

  case 382:

    { ZVAL_EMPTY_STRING(&(yyval).u.constant); INIT_PZVAL(&(yyval).u.constant); (yyval).op_type = IS_CONST; CG(heredoc) = Z_STRVAL((yyvsp[(1) - (2)]).u.constant); CG(heredoc_len) = Z_STRLEN((yyvsp[(1) - (2)]).u.constant); }
    break;

  case 383:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 384:

    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_CT, 1 TSRMLS_CC); }
    break;

  case 385:

    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyvsp[(3) - (3)]) = (yyval); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(3) - (3)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 386:

    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(2) - (2)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 387:

    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); add_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 388:

    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); sub_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 389:

    { (yyval) = (yyvsp[(3) - (4)]); Z_TYPE((yyval).u.constant) = IS_CONSTANT_ARRAY; }
    break;

  case 390:

    { (yyval) = (yyvsp[(2) - (3)]); Z_TYPE((yyval).u.constant) = IS_CONSTANT_ARRAY; }
    break;

  case 391:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 392:

    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 393:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 394:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 395:

    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_RT, 1 TSRMLS_CC); }
    break;

  case 396:

    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyvsp[(3) - (3)]) = (yyval); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 397:

    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(2) - (2)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 398:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 399:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 400:

    { (yyval) = (yyvsp[(2) - (3)]); CG(heredoc) = Z_STRVAL((yyvsp[(1) - (3)]).u.constant); CG(heredoc_len) = Z_STRLEN((yyvsp[(1) - (3)]).u.constant); }
    break;

  case 401:

    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); }
    break;

  case 402:

    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 405:

    { zend_do_add_static_array_element(&(yyval), &(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)])); }
    break;

  case 406:

    { zend_do_add_static_array_element(&(yyval), NULL, &(yyvsp[(3) - (3)])); }
    break;

  case 407:

    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); zend_do_add_static_array_element(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)])); }
    break;

  case 408:

    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); zend_do_add_static_array_element(&(yyval), NULL, &(yyvsp[(1) - (1)])); }
    break;

  case 409:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 410:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 411:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 412:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_W, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]);
				  zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 413:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_RW, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]);
				  zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 414:

    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 415:

    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 416:

    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).EA = (yyvsp[(1) - (7)]).EA | ((yyvsp[(7) - (7)]).EA ? (yyvsp[(7) - (7)]).EA : (yyvsp[(6) - (7)]).EA); }
    break;

  case 417:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 418:

    { (yyval).EA = (yyvsp[(2) - (2)]).EA; }
    break;

  case 419:

    { (yyval).EA = 0; }
    break;

  case 420:

    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 421:

    { (yyval).EA = (yyvsp[(4) - (4)]).EA; }
    break;

  case 422:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 423:

    { (yyvsp[(1) - (4)]).EA = ZEND_PARSED_METHOD_CALL; fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 424:

    { zend_do_pop_object(&(yyvsp[(1) - (1)]) TSRMLS_CC); zend_do_begin_method_call(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 425:

    { zend_do_end_function_call(&(yyvsp[(1) - (4)]), &(yyval), &(yyvsp[(3) - (4)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 426:

    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_METHOD_CALL; zend_do_push_object(&(yyval) TSRMLS_CC); }
    break;

  case 427:

    { (yyval) = (yyvsp[(1) - (1)]); zend_do_push_object(&(yyval) TSRMLS_CC); }
    break;

  case 428:

    { (yyval).EA = ZEND_PARSED_MEMBER; }
    break;

  case 429:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 430:

    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 431:

    { (yyval) = (yyvsp[(3) - (3)]); zend_do_fetch_static_member(&(yyval), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 432:

    { (yyval) = (yyvsp[(3) - (3)]); zend_do_fetch_static_member(&(yyval), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 433:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (1)]);; }
    break;

  case 434:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 435:

    { zend_do_begin_variable_parse(TSRMLS_C); (yyvsp[(1) - (1)]).EA = ZEND_PARSED_FUNCTION_CALL; }
    break;

  case 436:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 437:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 438:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 439:

    { zend_do_begin_variable_parse(TSRMLS_C); (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_FUNCTION_CALL; }
    break;

  case 440:

    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_VARIABLE; }
    break;

  case 441:

    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); (yyval).EA = ZEND_PARSED_VARIABLE; }
    break;

  case 442:

    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_STATIC_MEMBER; }
    break;

  case 443:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 444:

    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 445:

    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 446:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 447:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 448:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 449:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 450:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 451:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 452:

    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (2)]) TSRMLS_CC);}
    break;

  case 453:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 454:

    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 455:

    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (1)]) TSRMLS_CC);}
    break;

  case 456:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 457:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 458:

    { Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 459:

    { Z_LVAL((yyval).u.constant)++; }
    break;

  case 462:

    { zend_do_add_list_element(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 463:

    { zend_do_new_list_begin(TSRMLS_C); }
    break;

  case 464:

    { zend_do_new_list_end(TSRMLS_C); }
    break;

  case 465:

    { zend_do_add_list_element(NULL TSRMLS_CC); }
    break;

  case 466:

    { zend_do_init_array(&(yyval), NULL, NULL, 0 TSRMLS_CC); }
    break;

  case 467:

    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 468:

    { zend_do_add_array_element(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(3) - (5)]), 0 TSRMLS_CC); }
    break;

  case 469:

    { zend_do_add_array_element(&(yyval), &(yyvsp[(3) - (3)]), NULL, 0 TSRMLS_CC); }
    break;

  case 470:

    { zend_do_init_array(&(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]), 0 TSRMLS_CC); }
    break;

  case 471:

    { zend_do_init_array(&(yyval), &(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 472:

    { zend_do_add_array_element(&(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), 1 TSRMLS_CC); }
    break;

  case 473:

    { zend_do_add_array_element(&(yyval), &(yyvsp[(4) - (4)]), NULL, 1 TSRMLS_CC); }
    break;

  case 474:

    { zend_do_init_array(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 1 TSRMLS_CC); }
    break;

  case 475:

    { zend_do_init_array(&(yyval), &(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 476:

    { zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC);  zend_do_add_variable(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 477:

    { zend_do_add_string(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 478:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_add_variable(&(yyval), NULL, &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 479:

    { zend_do_add_string(&(yyval), NULL, &(yyvsp[(1) - (2)]) TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_add_variable(&(yyval), &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 480:

    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 481:

    { zend_do_begin_variable_parse(TSRMLS_C); }
    break;

  case 482:

    { fetch_array_begin(&(yyval), &(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 483:

    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyvsp[(2) - (3)]), &(yyvsp[(1) - (3)]), 1 TSRMLS_CC); zend_do_fetch_property(&(yyval), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 484:

    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_simple_variable(&(yyval), &(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 485:

    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_array_begin(&(yyval), &(yyvsp[(2) - (6)]), &(yyvsp[(4) - (6)]) TSRMLS_CC); }
    break;

  case 486:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 487:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 488:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 489:

    { fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 490:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 491:

    { zend_do_isset_or_isempty(ZEND_ISEMPTY, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 492:

    { zend_do_include_or_eval(ZEND_INCLUDE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 493:

    { zend_do_include_or_eval(ZEND_INCLUDE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 494:

    { zend_do_include_or_eval(ZEND_EVAL, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 495:

    { zend_do_include_or_eval(ZEND_REQUIRE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 496:

    { zend_do_include_or_eval(ZEND_REQUIRE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 497:

    { zend_do_isset_or_isempty(ZEND_ISSET, &(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 498:

    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 499:

    { znode tmp; zend_do_isset_or_isempty(ZEND_ISSET, &tmp, &(yyvsp[(4) - (4)]) TSRMLS_CC); zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &tmp, &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 500:

    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 501:

    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;


/* Line 1267 of yacc.c.  */

      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}





/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T zend_yytnamerr(char *yyres, const char *yystr)
{
	if (!yyres) {
		return yystrlen(yystr);
	}
	{
		TSRMLS_FETCH();
		if (CG(parse_error) == 0) {
			char buffer[120];
			const unsigned char *end, *str, *tok1 = NULL, *tok2 = NULL;
			unsigned int len = 0, toklen = 0, yystr_len;
			
			CG(parse_error) = 1;

			if (LANG_SCNG(yy_text)[0] == 0 &&
				LANG_SCNG(yy_leng) == 1 &&
				memcmp(yystr, ZEND_STRL("\"end of file\"")) == 0) {
				yystpcpy(yyres, "end of file");
				return sizeof("end of file")-1;
			}
			
			str = LANG_SCNG(yy_text);
			end = memchr(str, '\n', LANG_SCNG(yy_leng));
			yystr_len = yystrlen(yystr);
			
			if ((tok1 = memchr(yystr, '(', yystr_len)) != NULL
				&& (tok2 = zend_memrchr(yystr, ')', yystr_len)) != NULL) {
				toklen = (tok2 - tok1) + 1;
			} else {
				tok1 = tok2 = NULL;
				toklen = 0;
			}
			
			if (end == NULL) {
				len = LANG_SCNG(yy_leng) > 30 ? 30 : LANG_SCNG(yy_leng);
			} else {
				len = (end - str) > 30 ? 30 : (end - str);
			}
			if (toklen) {
				snprintf(buffer, sizeof(buffer), "'%.*s' %.*s", len, str, toklen, tok1);
			} else {
				snprintf(buffer, sizeof(buffer), "'%.*s'", len, str);
			}
			yystpcpy(yyres, buffer);
			return len + (toklen ? toklen + 1 : 0) + 2;
		}		
	}	
	if (*yystr == '"') {
		YYSIZE_T yyn = 0;
		const char *yyp = yystr;

		for (; *++yyp != '"'; ++yyn) {
			yyres[yyn] = *yyp;
		}
		yyres[yyn] = '\0';
		return yyn;
	}
	yystpcpy(yyres, yystr);
	return strlen(yystr);
}

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * indent-tabs-mode: t
 * End:
 */

