/* A Bison parser, made by GNU Bison 2.7.12-4996.  */

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
#define YYBISON_VERSION "2.7.12-4996"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         zendparse
#define yylex           zendlex
#define yyerror         zenderror
#define yylval          zendlval
#define yychar          zendchar
#define yydebug         zenddebug
#define yynerrs         zendnerrs

/* Copy the first part of user declarations.  */


/*
   +----------------------------------------------------------------------+
   | Zend Engine                                                          |
   +----------------------------------------------------------------------+
   | Copyright (c) 1998-2016 Zend Technologies Ltd. (http://www.zend.com) |
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
   |          Nikita Popov <nikic@php.net>                                |
   +----------------------------------------------------------------------+
*/

/* $Id$ */

#include "zend_compile.h"
#include "zend.h"
#include "zend_list.h"
#include "zend_globals.h"
#include "zend_API.h"
#include "zend_constants.h"
#include "zend_language_scanner.h"

#define YYSIZE_T size_t
#define yytnamerr zend_yytnamerr
static YYSIZE_T zend_yytnamerr(char*, const char*);

#define YYERROR_VERBOSE
#define YYSTYPE zend_parser_stack_elem

#ifdef _MSC_VER
#define YYMALLOC malloc
#define YYFREE free
#endif




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
   by #include "zend_language_parser.h".  */
#ifndef YY_ZEND_ZEND_ZEND_LANGUAGE_PARSER_H_INCLUDED
# define YY_ZEND_ZEND_ZEND_LANGUAGE_PARSER_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int zenddebug;
#endif
/* "%code requires" blocks.  */






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
     T_YIELD = 267,
     T_DOUBLE_ARROW = 268,
     T_YIELD_FROM = 269,
     T_POW_EQUAL = 270,
     T_SR_EQUAL = 271,
     T_SL_EQUAL = 272,
     T_XOR_EQUAL = 273,
     T_OR_EQUAL = 274,
     T_AND_EQUAL = 275,
     T_MOD_EQUAL = 276,
     T_CONCAT_EQUAL = 277,
     T_DIV_EQUAL = 278,
     T_MUL_EQUAL = 279,
     T_MINUS_EQUAL = 280,
     T_PLUS_EQUAL = 281,
     T_COALESCE = 282,
     T_BOOLEAN_OR = 283,
     T_BOOLEAN_AND = 284,
     T_SPACESHIP = 285,
     T_IS_NOT_IDENTICAL = 286,
     T_IS_IDENTICAL = 287,
     T_IS_NOT_EQUAL = 288,
     T_IS_EQUAL = 289,
     T_IS_GREATER_OR_EQUAL = 290,
     T_IS_SMALLER_OR_EQUAL = 291,
     T_SR = 292,
     T_SL = 293,
     T_INSTANCEOF = 294,
     T_UNSET_CAST = 295,
     T_BOOL_CAST = 296,
     T_OBJECT_CAST = 297,
     T_ARRAY_CAST = 298,
     T_STRING_CAST = 299,
     T_DOUBLE_CAST = 300,
     T_INT_CAST = 301,
     T_DEC = 302,
     T_INC = 303,
     T_POW = 304,
     T_CLONE = 305,
     T_NEW = 306,
     T_NOELSE = 307,
     T_ELSEIF = 308,
     T_ELSE = 309,
     T_ENDIF = 310,
     T_PUBLIC = 311,
     T_PROTECTED = 312,
     T_PRIVATE = 313,
     T_FINAL = 314,
     T_ABSTRACT = 315,
     T_STATIC = 316,
     T_LNUMBER = 317,
     T_DNUMBER = 318,
     T_STRING = 319,
     T_VARIABLE = 320,
     T_INLINE_HTML = 321,
     T_ENCAPSED_AND_WHITESPACE = 322,
     T_CONSTANT_ENCAPSED_STRING = 323,
     T_STRING_VARNAME = 324,
     T_NUM_STRING = 325,
     T_EXIT = 326,
     T_IF = 327,
     T_ECHO = 328,
     T_DO = 329,
     T_WHILE = 330,
     T_ENDWHILE = 331,
     T_FOR = 332,
     T_ENDFOR = 333,
     T_FOREACH = 334,
     T_ENDFOREACH = 335,
     T_DECLARE = 336,
     T_ENDDECLARE = 337,
     T_AS = 338,
     T_SWITCH = 339,
     T_ENDSWITCH = 340,
     T_CASE = 341,
     T_DEFAULT = 342,
     T_BREAK = 343,
     T_CONTINUE = 344,
     T_GOTO = 345,
     T_FUNCTION = 346,
     T_CONST = 347,
     T_RETURN = 348,
     T_TRY = 349,
     T_CATCH = 350,
     T_FINALLY = 351,
     T_THROW = 352,
     T_USE = 353,
     T_INSTEADOF = 354,
     T_GLOBAL = 355,
     T_VAR = 356,
     T_UNSET = 357,
     T_ISSET = 358,
     T_EMPTY = 359,
     T_HALT_COMPILER = 360,
     T_CLASS = 361,
     T_TRAIT = 362,
     T_INTERFACE = 363,
     T_EXTENDS = 364,
     T_IMPLEMENTS = 365,
     T_OBJECT_OPERATOR = 366,
     T_LIST = 367,
     T_ARRAY = 368,
     T_CALLABLE = 369,
     T_LINE = 370,
     T_FILE = 371,
     T_DIR = 372,
     T_CLASS_C = 373,
     T_TRAIT_C = 374,
     T_METHOD_C = 375,
     T_FUNC_C = 376,
     T_COMMENT = 377,
     T_DOC_COMMENT = 378,
     T_OPEN_TAG = 379,
     T_OPEN_TAG_WITH_ECHO = 380,
     T_CLOSE_TAG = 381,
     T_WHITESPACE = 382,
     T_START_HEREDOC = 383,
     T_END_HEREDOC = 384,
     T_DOLLAR_OPEN_CURLY_BRACES = 385,
     T_CURLY_OPEN = 386,
     T_PAAMAYIM_NEKUDOTAYIM = 387,
     T_NAMESPACE = 388,
     T_NS_C = 389,
     T_NS_SEPARATOR = 390,
     T_ELLIPSIS = 391,
     T_ERROR = 392
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
#define T_YIELD 267
#define T_DOUBLE_ARROW 268
#define T_YIELD_FROM 269
#define T_POW_EQUAL 270
#define T_SR_EQUAL 271
#define T_SL_EQUAL 272
#define T_XOR_EQUAL 273
#define T_OR_EQUAL 274
#define T_AND_EQUAL 275
#define T_MOD_EQUAL 276
#define T_CONCAT_EQUAL 277
#define T_DIV_EQUAL 278
#define T_MUL_EQUAL 279
#define T_MINUS_EQUAL 280
#define T_PLUS_EQUAL 281
#define T_COALESCE 282
#define T_BOOLEAN_OR 283
#define T_BOOLEAN_AND 284
#define T_SPACESHIP 285
#define T_IS_NOT_IDENTICAL 286
#define T_IS_IDENTICAL 287
#define T_IS_NOT_EQUAL 288
#define T_IS_EQUAL 289
#define T_IS_GREATER_OR_EQUAL 290
#define T_IS_SMALLER_OR_EQUAL 291
#define T_SR 292
#define T_SL 293
#define T_INSTANCEOF 294
#define T_UNSET_CAST 295
#define T_BOOL_CAST 296
#define T_OBJECT_CAST 297
#define T_ARRAY_CAST 298
#define T_STRING_CAST 299
#define T_DOUBLE_CAST 300
#define T_INT_CAST 301
#define T_DEC 302
#define T_INC 303
#define T_POW 304
#define T_CLONE 305
#define T_NEW 306
#define T_NOELSE 307
#define T_ELSEIF 308
#define T_ELSE 309
#define T_ENDIF 310
#define T_PUBLIC 311
#define T_PROTECTED 312
#define T_PRIVATE 313
#define T_FINAL 314
#define T_ABSTRACT 315
#define T_STATIC 316
#define T_LNUMBER 317
#define T_DNUMBER 318
#define T_STRING 319
#define T_VARIABLE 320
#define T_INLINE_HTML 321
#define T_ENCAPSED_AND_WHITESPACE 322
#define T_CONSTANT_ENCAPSED_STRING 323
#define T_STRING_VARNAME 324
#define T_NUM_STRING 325
#define T_EXIT 326
#define T_IF 327
#define T_ECHO 328
#define T_DO 329
#define T_WHILE 330
#define T_ENDWHILE 331
#define T_FOR 332
#define T_ENDFOR 333
#define T_FOREACH 334
#define T_ENDFOREACH 335
#define T_DECLARE 336
#define T_ENDDECLARE 337
#define T_AS 338
#define T_SWITCH 339
#define T_ENDSWITCH 340
#define T_CASE 341
#define T_DEFAULT 342
#define T_BREAK 343
#define T_CONTINUE 344
#define T_GOTO 345
#define T_FUNCTION 346
#define T_CONST 347
#define T_RETURN 348
#define T_TRY 349
#define T_CATCH 350
#define T_FINALLY 351
#define T_THROW 352
#define T_USE 353
#define T_INSTEADOF 354
#define T_GLOBAL 355
#define T_VAR 356
#define T_UNSET 357
#define T_ISSET 358
#define T_EMPTY 359
#define T_HALT_COMPILER 360
#define T_CLASS 361
#define T_TRAIT 362
#define T_INTERFACE 363
#define T_EXTENDS 364
#define T_IMPLEMENTS 365
#define T_OBJECT_OPERATOR 366
#define T_LIST 367
#define T_ARRAY 368
#define T_CALLABLE 369
#define T_LINE 370
#define T_FILE 371
#define T_DIR 372
#define T_CLASS_C 373
#define T_TRAIT_C 374
#define T_METHOD_C 375
#define T_FUNC_C 376
#define T_COMMENT 377
#define T_DOC_COMMENT 378
#define T_OPEN_TAG 379
#define T_OPEN_TAG_WITH_ECHO 380
#define T_CLOSE_TAG 381
#define T_WHITESPACE 382
#define T_START_HEREDOC 383
#define T_END_HEREDOC 384
#define T_DOLLAR_OPEN_CURLY_BRACES 385
#define T_CURLY_OPEN 386
#define T_PAAMAYIM_NEKUDOTAYIM 387
#define T_NAMESPACE 388
#define T_NS_C 389
#define T_NS_SEPARATOR 390
#define T_ELLIPSIS 391
#define T_ERROR 392



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
ZEND_API int zendparse (void *YYPARSE_PARAM);
#else
ZEND_API int zendparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
ZEND_API int zendparse (void);
#else
ZEND_API int zendparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_ZEND_ZEND_ZEND_LANGUAGE_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */



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


/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   7453

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  166
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  136
/* YYNRULES -- Number of rules.  */
#define YYNRULES  497
/* YYNRULES -- Number of states.  */
#define YYNSTATES  940

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   392

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    54,   164,     2,   165,    53,    36,     2,
     157,   158,    51,    48,     8,    49,    50,    52,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    30,   159,
      42,    16,    43,    29,    57,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    68,     2,   162,    35,     2,   163,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   160,    34,   161,    56,     2,     2,     2,
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
       5,     6,     7,     9,    10,    11,    12,    13,    14,    15,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    31,    32,    33,    37,    38,    39,    40,    41,
      44,    45,    46,    47,    55,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      39,    41,    43,    45,    47,    49,    51,    53,    55,    57,
      59,    61,    63,    65,    67,    69,    71,    73,    75,    77,
      79,    81,    83,    85,    87,    89,    91,    93,    95,    97,
      99,   101,   103,   105,   107,   109,   111,   113,   115,   117,
     119,   121,   123,   125,   127,   129,   131,   133,   135,   137,
     139,   141,   143,   145,   147,   149,   151,   153,   155,   157,
     160,   161,   163,   167,   169,   173,   176,   178,   180,   182,
     184,   186,   191,   195,   196,   203,   204,   210,   214,   219,
     223,   228,   232,   234,   236,   242,   249,   255,   262,   266,
     268,   272,   274,   278,   280,   282,   285,   287,   291,   293,
     296,   300,   302,   305,   306,   308,   310,   312,   314,   316,
     321,   325,   327,   329,   335,   343,   353,   359,   363,   367,
     371,   375,   379,   383,   385,   388,   394,   402,   412,   413,
     420,   422,   429,   433,   437,   440,   441,   451,   453,   457,
     458,   463,   465,   469,   471,   485,   486,   488,   489,   491,
     492,   503,   504,   514,   516,   519,   521,   523,   524,   532,
     533,   542,   543,   546,   547,   550,   551,   554,   556,   559,
     564,   568,   570,   575,   577,   582,   584,   589,   593,   598,
     603,   609,   610,   616,   621,   623,   625,   627,   632,   638,
     645,   647,   651,   658,   666,   670,   677,   679,   680,   682,
     686,   691,   698,   699,   701,   703,   706,   708,   710,   712,
     713,   716,   719,   723,   725,   729,   731,   734,   738,   740,
     742,   746,   748,   750,   754,   757,   758,   762,   767,   771,
     784,   786,   790,   792,   795,   799,   801,   804,   807,   810,
     814,   818,   822,   827,   831,   833,   835,   839,   841,   845,
     847,   849,   850,   852,   854,   857,   859,   861,   863,   865,
     867,   869,   873,   875,   878,   883,   887,   889,   894,   899,
     903,   905,   907,   908,   910,   914,   916,   917,   927,   931,
     934,   941,   947,   951,   956,   959,   963,   967,   971,   975,
     979,   983,   987,   991,   995,   999,  1003,  1007,  1010,  1013,
    1016,  1019,  1023,  1027,  1031,  1035,  1039,  1043,  1047,  1051,
    1055,  1059,  1063,  1067,  1071,  1075,  1079,  1083,  1087,  1090,
    1093,  1096,  1099,  1103,  1107,  1111,  1115,  1119,  1123,  1127,
    1131,  1135,  1139,  1143,  1145,  1151,  1156,  1160,  1162,  1165,
    1168,  1171,  1174,  1177,  1180,  1183,  1186,  1189,  1191,  1195,
    1198,  1200,  1203,  1208,  1211,  1225,  1240,  1242,  1243,  1244,
    1245,  1247,  1248,  1253,  1257,  1259,  1261,  1264,  1267,  1272,
    1277,  1280,  1282,  1284,  1286,  1288,  1289,  1293,  1294,  1296,
    1298,  1299,  1301,  1306,  1310,  1312,  1314,  1316,  1318,  1320,
    1322,  1324,  1326,  1328,  1330,  1332,  1336,  1339,  1343,  1347,
    1349,  1351,  1353,  1357,  1361,  1363,  1365,  1366,  1368,  1370,
    1372,  1376,  1378,  1380,  1384,  1386,  1388,  1393,  1398,  1403,
    1408,  1410,  1412,  1414,  1418,  1420,  1425,  1428,  1432,  1436,
    1438,  1443,  1448,  1452,  1456,  1460,  1462,  1466,  1468,  1470,
    1474,  1476,  1477,  1479,  1483,  1485,  1488,  1490,  1493,  1497,
    1499,  1504,  1507,  1514,  1519,  1522,  1525,  1527,  1530,  1532,
    1537,  1541,  1545,  1549,  1556,  1560,  1562,  1564,  1566,  1571,
    1576,  1579,  1582,  1587,  1590,  1593,  1595,  1599
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     167,     0,    -1,   171,    -1,     7,    -1,     6,    -1,     5,
      -1,     4,    -1,     3,    -1,     9,    -1,    10,    -1,    11,
      -1,    55,    -1,    70,    -1,    69,    -1,    90,    -1,    91,
      -1,    72,    -1,    73,    -1,    74,    -1,    92,    -1,    93,
      -1,    94,    -1,    95,    -1,    96,    -1,    97,    -1,    98,
      -1,    99,    -1,   100,    -1,   101,    -1,   102,    -1,   113,
      -1,   114,    -1,   115,    -1,   116,    -1,   117,    -1,   118,
      -1,   119,    -1,   120,    -1,   121,    -1,   122,    -1,   123,
      -1,   108,    -1,   109,    -1,   110,    -1,   111,    -1,   112,
      -1,    12,    -1,    13,    -1,   131,    -1,   103,    -1,   104,
      -1,   105,    -1,   106,    -1,   107,    -1,   132,    -1,   133,
      -1,   128,    -1,   129,    -1,   152,    -1,   126,    -1,   127,
      -1,   125,    -1,   137,    -1,   138,    -1,   140,    -1,   139,
      -1,   134,    -1,   135,    -1,   136,    -1,   153,    -1,   168,
      -1,    80,    -1,    79,    -1,    78,    -1,    77,    -1,    76,
      -1,    75,    -1,    83,    -1,   169,    -1,   171,   174,    -1,
      -1,    83,    -1,   172,   154,    83,    -1,   172,    -1,   152,
     154,   172,    -1,   154,   172,    -1,   189,    -1,   196,    -1,
     199,    -1,   204,    -1,   206,    -1,   124,   157,   158,   159,
      -1,   152,   172,   159,    -1,    -1,   152,   172,   175,   160,
     171,   161,    -1,    -1,   152,   176,   160,   171,   161,    -1,
     117,   179,   159,    -1,   117,   177,   178,   159,    -1,   117,
     182,   159,    -1,   117,   177,   182,   159,    -1,   111,   186,
     159,    -1,   110,    -1,   111,    -1,   172,   154,   160,   181,
     161,    -1,   154,   172,   154,   160,   181,   161,    -1,   172,
     154,   160,   180,   161,    -1,   154,   172,   154,   160,   180,
     161,    -1,   180,     8,   183,    -1,   183,    -1,   181,     8,
     184,    -1,   184,    -1,   182,     8,   185,    -1,   185,    -1,
     184,    -1,   177,   184,    -1,   172,    -1,   172,   102,    83,
      -1,   184,    -1,   154,   184,    -1,   186,     8,   256,    -1,
     256,    -1,   187,   188,    -1,    -1,   189,    -1,   196,    -1,
     199,    -1,   204,    -1,   206,    -1,   124,   157,   158,   159,
      -1,   160,   187,   161,    -1,   220,    -1,   222,    -1,    94,
     157,   281,   158,   218,    -1,    93,   189,    94,   157,   281,
     158,   159,    -1,    96,   157,   259,   159,   259,   159,   259,
     158,   212,    -1,   103,   157,   281,   158,   215,    -1,   107,
     282,   159,    -1,   108,   282,   159,    -1,   112,   282,   159,
      -1,   119,   233,   159,    -1,    80,   235,   159,    -1,    92,
     257,   159,    -1,    85,    -1,   281,   159,    -1,   121,   157,
     194,   158,   159,    -1,    98,   157,   281,   102,   211,   158,
     213,    -1,    98,   157,   281,   102,   211,    14,   211,   158,
     213,    -1,    -1,   100,   157,   186,   158,   190,   214,    -1,
     159,    -1,   113,   160,   187,   161,   191,   193,    -1,   116,
     281,   159,    -1,   109,    83,   159,    -1,    83,    30,    -1,
      -1,   191,   114,   157,   192,    84,   158,   160,   187,   161,
      -1,   173,    -1,   192,    34,   173,    -1,    -1,   115,   160,
     187,   161,    -1,   195,    -1,   194,     8,   195,    -1,   287,
      -1,   265,   268,    83,   266,   157,   223,   158,   229,   267,
     160,   187,   161,   267,    -1,    -1,    36,    -1,    -1,   155,
      -1,    -1,   202,   125,   200,    83,   208,   210,   266,   160,
     237,   161,    -1,    -1,   125,   201,    83,   208,   210,   266,
     160,   237,   161,    -1,   203,    -1,   202,   203,    -1,    79,
      -1,    78,    -1,    -1,   126,   205,    83,   266,   160,   237,
     161,    -1,    -1,   127,   207,    83,   209,   266,   160,   237,
     161,    -1,    -1,   128,   173,    -1,    -1,   128,   239,    -1,
      -1,   129,   239,    -1,   287,    -1,    36,   287,    -1,   131,
     157,   293,   158,    -1,    68,   293,   162,    -1,   189,    -1,
      30,   187,    97,   159,    -1,   189,    -1,    30,   187,    99,
     159,    -1,   189,    -1,    30,   187,   101,   159,    -1,   160,
     216,   161,    -1,   160,   159,   216,   161,    -1,    30,   216,
     104,   159,    -1,    30,   159,   216,   104,   159,    -1,    -1,
     216,   105,   281,   217,   187,    -1,   216,   106,   217,   187,
      -1,    30,    -1,   159,    -1,   189,    -1,    30,   187,    95,
     159,    -1,    91,   157,   281,   158,   189,    -1,   219,    72,
     157,   281,   158,   189,    -1,   219,    -1,   219,    73,   189,
      -1,    91,   157,   281,   158,    30,   187,    -1,   221,    72,
     157,   281,   158,    30,   187,    -1,   221,    74,   159,    -1,
     221,    73,    30,   187,    74,   159,    -1,   224,    -1,    -1,
     225,    -1,   224,     8,   225,    -1,   226,   197,   198,    84,
      -1,   226,   197,   198,    84,    16,   281,    -1,    -1,   227,
      -1,   228,    -1,    29,   228,    -1,   132,    -1,   133,    -1,
     173,    -1,    -1,    30,   227,    -1,   157,   158,    -1,   157,
     231,   158,    -1,   232,    -1,   231,     8,   232,    -1,   281,
      -1,   155,   281,    -1,   233,     8,   234,    -1,   234,    -1,
     288,    -1,   235,     8,   236,    -1,   236,    -1,    84,    -1,
      84,    16,   281,    -1,   237,   238,    -1,    -1,   248,   252,
     159,    -1,   249,   111,   254,   159,    -1,   117,   239,   240,
      -1,   249,   265,   268,   170,   266,   157,   223,   158,   229,
     267,   247,   267,    -1,   173,    -1,   239,     8,   173,    -1,
     159,    -1,   160,   161,    -1,   160,   241,   161,    -1,   242,
      -1,   241,   242,    -1,   243,   159,    -1,   244,   159,    -1,
     246,   118,   239,    -1,   245,   102,    83,    -1,   245,   102,
     168,    -1,   245,   102,   251,   170,    -1,   245,   102,   251,
      -1,   170,    -1,   246,    -1,   173,   151,   170,    -1,   159,
      -1,   160,   187,   161,    -1,   250,    -1,   120,    -1,    -1,
     250,    -1,   251,    -1,   250,   251,    -1,    75,    -1,    76,
      -1,    77,    -1,    80,    -1,    79,    -1,    78,    -1,   252,
       8,   253,    -1,   253,    -1,    84,   266,    -1,    84,    16,
     281,   266,    -1,   254,     8,   255,    -1,   255,    -1,   170,
      16,   281,   266,    -1,    83,    16,   281,   266,    -1,   257,
       8,   258,    -1,   258,    -1,   281,    -1,    -1,   260,    -1,
     260,     8,   281,    -1,   281,    -1,    -1,   125,   262,   277,
     208,   210,   266,   160,   237,   161,    -1,    70,   274,   277,
      -1,    70,   261,    -1,   131,   157,   293,   158,    16,   281,
      -1,    68,   293,   162,    16,   281,    -1,   287,    16,   281,
      -1,   287,    16,    36,   287,    -1,    69,   281,    -1,   287,
      28,   281,    -1,   287,    27,   281,    -1,   287,    26,   281,
      -1,   287,    17,   281,    -1,   287,    25,   281,    -1,   287,
      24,   281,    -1,   287,    23,   281,    -1,   287,    22,   281,
      -1,   287,    21,   281,    -1,   287,    20,   281,    -1,   287,
      19,   281,    -1,   287,    18,   281,    -1,   287,    66,    -1,
      66,   287,    -1,   287,    65,    -1,    65,   287,    -1,   281,
      32,   281,    -1,   281,    33,   281,    -1,   281,     9,   281,
      -1,   281,    11,   281,    -1,   281,    10,   281,    -1,   281,
      34,   281,    -1,   281,    36,   281,    -1,   281,    35,   281,
      -1,   281,    50,   281,    -1,   281,    48,   281,    -1,   281,
      49,   281,    -1,   281,    51,   281,    -1,   281,    67,   281,
      -1,   281,    52,   281,    -1,   281,    53,   281,    -1,   281,
      47,   281,    -1,   281,    46,   281,    -1,    48,   281,    -1,
      49,   281,    -1,    54,   281,    -1,    56,   281,    -1,   281,
      39,   281,    -1,   281,    38,   281,    -1,   281,    41,   281,
      -1,   281,    40,   281,    -1,   281,    42,   281,    -1,   281,
      45,   281,    -1,   281,    43,   281,    -1,   281,    44,   281,
      -1,   281,    37,   281,    -1,   281,    55,   274,    -1,   157,
     281,   158,    -1,   263,    -1,   281,    29,   281,    30,   281,
      -1,   281,    29,    30,   281,    -1,   281,    31,   281,    -1,
     299,    -1,    64,   281,    -1,    63,   281,    -1,    62,   281,
      -1,    61,   281,    -1,    60,   281,    -1,    59,   281,    -1,
      58,   281,    -1,    90,   275,    -1,    57,   281,    -1,   279,
      -1,   163,   276,   163,    -1,    12,   281,    -1,    13,    -1,
      13,   281,    -1,    13,   281,    14,   281,    -1,    15,   281,
      -1,   265,   268,   266,   157,   223,   158,   269,   229,   267,
     160,   187,   161,   267,    -1,    80,   265,   268,   266,   157,
     223,   158,   269,   229,   267,   160,   187,   161,   267,    -1,
     110,    -1,    -1,    -1,    -1,    36,    -1,    -1,   117,   157,
     270,   158,    -1,   270,     8,   271,    -1,   271,    -1,    84,
      -1,    36,    84,    -1,   173,   230,    -1,   273,   151,   291,
     230,    -1,   283,   151,   291,   230,    -1,   285,   230,    -1,
      80,    -1,   173,    -1,   273,    -1,   290,    -1,    -1,   157,
     282,   158,    -1,    -1,    86,    -1,   296,    -1,    -1,   230,
      -1,   132,   157,   293,   158,    -1,    68,   293,   162,    -1,
      87,    -1,    81,    -1,    82,    -1,   134,    -1,   135,    -1,
     136,    -1,   138,    -1,   139,    -1,   140,    -1,   153,    -1,
     137,    -1,   147,    86,   148,    -1,   147,   148,    -1,   164,
     296,   164,    -1,   147,   296,   148,    -1,   278,    -1,   280,
      -1,   173,    -1,   273,   151,   170,    -1,   283,   151,   170,
      -1,   287,    -1,   264,    -1,    -1,   281,    -1,   284,    -1,
     287,    -1,   157,   281,   158,    -1,   278,    -1,   286,    -1,
     157,   281,   158,    -1,   278,    -1,   288,    -1,   284,    68,
     282,   162,    -1,   280,    68,   282,   162,    -1,   284,   160,
     281,   161,    -1,   284,   130,   292,   230,    -1,   272,    -1,
     286,    -1,   289,    -1,   284,   130,   292,    -1,    84,    -1,
     165,   160,   281,   161,    -1,   165,   288,    -1,   273,   151,
     288,    -1,   283,   151,   288,    -1,   288,    -1,   290,    68,
     282,   162,    -1,   290,   160,   281,   161,    -1,   290,   130,
     292,    -1,   273,   151,   288,    -1,   290,   151,   288,    -1,
     170,    -1,   160,   281,   161,    -1,   288,    -1,    83,    -1,
     160,   281,   161,    -1,   288,    -1,    -1,   294,    -1,   294,
       8,   295,    -1,   295,    -1,   294,     8,    -1,     8,    -1,
       8,   295,    -1,   281,    14,   281,    -1,   281,    -1,   281,
      14,    36,   287,    -1,    36,   287,    -1,   281,    14,   131,
     157,   293,   158,    -1,   131,   157,   293,   158,    -1,   296,
     297,    -1,   296,    86,    -1,   297,    -1,    86,   297,    -1,
      84,    -1,    84,    68,   298,   162,    -1,    84,   130,    83,
      -1,   149,   281,   161,    -1,   149,    88,   161,    -1,   149,
      88,    68,   281,   162,   161,    -1,   150,   287,   161,    -1,
      83,    -1,    89,    -1,    84,    -1,   122,   157,   300,   158,
      -1,   123,   157,   281,   158,    -1,     7,   281,    -1,     6,
     281,    -1,     5,   157,   281,   158,    -1,     4,   281,    -1,
       3,   281,    -1,   301,    -1,   300,     8,   301,    -1,   281,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   266,   266,   270,   270,   270,   270,   270,   270,   270,
     270,   271,   271,   271,   271,   271,   271,   271,   271,   271,
     271,   271,   271,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   273,   273,   273,   273,   273,   273,   273,
     273,   273,   273,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   275,   275,   275,   275,   275,   275,
     275,   275,   276,   276,   276,   276,   276,   276,   276,   276,
     280,   281,   281,   281,   281,   281,   281,   285,   286,   294,
     295,   299,   300,   304,   305,   306,   310,   311,   312,   313,
     314,   315,   319,   322,   322,   325,   325,   328,   329,   330,
     331,   332,   336,   337,   341,   343,   348,   350,   355,   357,
     362,   364,   369,   371,   376,   377,   381,   383,   388,   389,
     393,   394,   398,   401,   406,   407,   408,   409,   410,   411,
     418,   419,   420,   421,   423,   425,   427,   429,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   440,   444,   443,
     447,   448,   450,   451,   452,   457,   458,   463,   464,   468,
     469,   473,   474,   478,   482,   489,   490,   494,   495,   499,
     499,   502,   502,   508,   509,   513,   514,   518,   518,   524,
     524,   530,   531,   535,   536,   540,   541,   545,   546,   547,
     548,   552,   553,   557,   558,   562,   563,   567,   568,   569,
     570,   574,   575,   577,   582,   583,   588,   589,   594,   597,
     603,   604,   609,   612,   618,   619,   625,   626,   631,   633,
     638,   640,   646,   647,   651,   652,   656,   657,   658,   662,
     663,   667,   668,   672,   674,   679,   680,   684,   685,   689,
     695,   696,   700,   701,   706,   709,   714,   716,   718,   720,
     727,   728,   732,   733,   734,   738,   740,   745,   746,   750,
     755,   757,   759,   761,   766,   768,   772,   777,   778,   782,
     783,   787,   788,   793,   794,   799,   800,   801,   802,   803,
     804,   808,   809,   813,   815,   820,   821,   825,   829,   833,
     834,   837,   841,   842,   846,   847,   851,   851,   861,   863,
     868,   870,   872,   874,   876,   877,   879,   881,   883,   885,
     887,   889,   891,   893,   895,   897,   899,   901,   902,   903,
     904,   905,   907,   909,   911,   913,   915,   916,   917,   918,
     919,   920,   921,   922,   923,   924,   925,   926,   927,   928,
     929,   930,   931,   933,   935,   937,   939,   941,   943,   945,
     947,   949,   951,   952,   953,   955,   957,   959,   960,   961,
     962,   963,   964,   965,   966,   967,   968,   969,   970,   971,
     972,   973,   974,   975,   976,   981,   989,   993,   997,  1001,
    1002,  1006,  1007,  1011,  1012,  1016,  1017,  1021,  1023,  1025,
    1027,  1032,  1035,  1039,  1040,  1044,  1045,  1050,  1051,  1052,
    1057,  1058,  1063,  1064,  1065,  1069,  1070,  1071,  1072,  1073,
    1074,  1075,  1076,  1077,  1078,  1079,  1080,  1082,  1083,  1084,
    1085,  1089,  1090,  1092,  1097,  1098,  1102,  1103,  1107,  1111,
    1112,  1113,  1117,  1118,  1119,  1123,  1125,  1127,  1129,  1131,
    1133,  1137,  1139,  1141,  1146,  1147,  1148,  1152,  1154,  1159,
    1161,  1163,  1165,  1167,  1169,  1174,  1175,  1176,  1180,  1181,
    1182,  1186,  1187,  1191,  1193,  1195,  1197,  1199,  1204,  1206,
    1208,  1210,  1212,  1214,  1219,  1221,  1223,  1225,  1230,  1232,
    1235,  1238,  1240,  1242,  1245,  1249,  1250,  1251,  1256,  1257,
    1258,  1260,  1262,  1264,  1266,  1271,  1272,  1277
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "$undefined",
  "\"require_once (T_REQUIRE_ONCE)\"", "\"require (T_REQUIRE)\"",
  "\"eval (T_EVAL)\"", "\"include_once (T_INCLUDE_ONCE)\"",
  "\"include (T_INCLUDE)\"", "','", "\"or (T_LOGICAL_OR)\"",
  "\"xor (T_LOGICAL_XOR)\"", "\"and (T_LOGICAL_AND)\"",
  "\"print (T_PRINT)\"", "\"yield (T_YIELD)\"", "\"=> (T_DOUBLE_ARROW)\"",
  "\"yield from (T_YIELD_FROM)\"", "'='", "\"**= (T_POW_EQUAL)\"",
  "\">>= (T_SR_EQUAL)\"", "\"<<= (T_SL_EQUAL)\"", "\"^= (T_XOR_EQUAL)\"",
  "\"|= (T_OR_EQUAL)\"", "\"&= (T_AND_EQUAL)\"", "\"%= (T_MOD_EQUAL)\"",
  "\".= (T_CONCAT_EQUAL)\"", "\"/= (T_DIV_EQUAL)\"",
  "\"*= (T_MUL_EQUAL)\"", "\"-= (T_MINUS_EQUAL)\"",
  "\"+= (T_PLUS_EQUAL)\"", "'?'", "':'", "\"?? (T_COALESCE)\"",
  "\"|| (T_BOOLEAN_OR)\"", "\"&& (T_BOOLEAN_AND)\"", "'|'", "'^'", "'&'",
  "\"<=> (T_SPACESHIP)\"", "\"!== (T_IS_NOT_IDENTICAL)\"",
  "\"=== (T_IS_IDENTICAL)\"", "\"!= (T_IS_NOT_EQUAL)\"",
  "\"== (T_IS_EQUAL)\"", "'<'", "'>'", "\">= (T_IS_GREATER_OR_EQUAL)\"",
  "\"<= (T_IS_SMALLER_OR_EQUAL)\"", "\">> (T_SR)\"", "\"<< (T_SL)\"",
  "'+'", "'-'", "'.'", "'*'", "'/'", "'%'", "'!'",
  "\"instanceof (T_INSTANCEOF)\"", "'~'", "'@'",
  "\"(unset) (T_UNSET_CAST)\"", "\"(bool) (T_BOOL_CAST)\"",
  "\"(object) (T_OBJECT_CAST)\"", "\"(array) (T_ARRAY_CAST)\"",
  "\"(string) (T_STRING_CAST)\"", "\"(double) (T_DOUBLE_CAST)\"",
  "\"(int) (T_INT_CAST)\"", "\"-- (T_DEC)\"", "\"++ (T_INC)\"",
  "\"** (T_POW)\"", "'['", "\"clone (T_CLONE)\"", "\"new (T_NEW)\"",
  "T_NOELSE", "\"elseif (T_ELSEIF)\"", "\"else (T_ELSE)\"",
  "\"endif (T_ENDIF)\"", "\"public (T_PUBLIC)\"",
  "\"protected (T_PROTECTED)\"", "\"private (T_PRIVATE)\"",
  "\"final (T_FINAL)\"", "\"abstract (T_ABSTRACT)\"",
  "\"static (T_STATIC)\"", "\"integer number (T_LNUMBER)\"",
  "\"floating-point number (T_DNUMBER)\"", "\"identifier (T_STRING)\"",
  "\"variable (T_VARIABLE)\"", "T_INLINE_HTML",
  "\"quoted-string and whitespace (T_ENCAPSED_AND_WHITESPACE)\"",
  "\"quoted-string (T_CONSTANT_ENCAPSED_STRING)\"",
  "\"variable name (T_STRING_VARNAME)\"", "\"number (T_NUM_STRING)\"",
  "\"exit (T_EXIT)\"", "\"if (T_IF)\"", "\"echo (T_ECHO)\"",
  "\"do (T_DO)\"", "\"while (T_WHILE)\"", "\"endwhile (T_ENDWHILE)\"",
  "\"for (T_FOR)\"", "\"endfor (T_ENDFOR)\"", "\"foreach (T_FOREACH)\"",
  "\"endforeach (T_ENDFOREACH)\"", "\"declare (T_DECLARE)\"",
  "\"enddeclare (T_ENDDECLARE)\"", "\"as (T_AS)\"",
  "\"switch (T_SWITCH)\"", "\"endswitch (T_ENDSWITCH)\"",
  "\"case (T_CASE)\"", "\"default (T_DEFAULT)\"", "\"break (T_BREAK)\"",
  "\"continue (T_CONTINUE)\"", "\"goto (T_GOTO)\"",
  "\"function (T_FUNCTION)\"", "\"const (T_CONST)\"",
  "\"return (T_RETURN)\"", "\"try (T_TRY)\"", "\"catch (T_CATCH)\"",
  "\"finally (T_FINALLY)\"", "\"throw (T_THROW)\"", "\"use (T_USE)\"",
  "\"insteadof (T_INSTEADOF)\"", "\"global (T_GLOBAL)\"",
  "\"var (T_VAR)\"", "\"unset (T_UNSET)\"", "\"isset (T_ISSET)\"",
  "\"empty (T_EMPTY)\"", "\"__halt_compiler (T_HALT_COMPILER)\"",
  "\"class (T_CLASS)\"", "\"trait (T_TRAIT)\"",
  "\"interface (T_INTERFACE)\"", "\"extends (T_EXTENDS)\"",
  "\"implements (T_IMPLEMENTS)\"", "\"-> (T_OBJECT_OPERATOR)\"",
  "\"list (T_LIST)\"", "\"array (T_ARRAY)\"", "\"callable (T_CALLABLE)\"",
  "\"__LINE__ (T_LINE)\"", "\"__FILE__ (T_FILE)\"", "\"__DIR__ (T_DIR)\"",
  "\"__CLASS__ (T_CLASS_C)\"", "\"__TRAIT__ (T_TRAIT_C)\"",
  "\"__METHOD__ (T_METHOD_C)\"", "\"__FUNCTION__ (T_FUNC_C)\"",
  "\"comment (T_COMMENT)\"", "\"doc comment (T_DOC_COMMENT)\"",
  "\"open tag (T_OPEN_TAG)\"",
  "\"open tag with echo (T_OPEN_TAG_WITH_ECHO)\"",
  "\"close tag (T_CLOSE_TAG)\"", "\"whitespace (T_WHITESPACE)\"",
  "\"heredoc start (T_START_HEREDOC)\"", "\"heredoc end (T_END_HEREDOC)\"",
  "\"${ (T_DOLLAR_OPEN_CURLY_BRACES)\"", "\"{$ (T_CURLY_OPEN)\"",
  "\":: (T_PAAMAYIM_NEKUDOTAYIM)\"", "\"namespace (T_NAMESPACE)\"",
  "\"__NAMESPACE__ (T_NS_C)\"", "\"\\\\ (T_NS_SEPARATOR)\"",
  "\"... (T_ELLIPSIS)\"", "T_ERROR", "'('", "')'", "';'", "'{'", "'}'",
  "']'", "'`'", "'\"'", "'$'", "$accept", "start",
  "reserved_non_modifiers", "semi_reserved", "identifier",
  "top_statement_list", "namespace_name", "name", "top_statement", "$@1",
  "$@2", "use_type", "group_use_declaration",
  "mixed_group_use_declaration", "inline_use_declarations",
  "unprefixed_use_declarations", "use_declarations",
  "inline_use_declaration", "unprefixed_use_declaration",
  "use_declaration", "const_list", "inner_statement_list",
  "inner_statement", "statement", "$@3", "catch_list", "catch_name_list",
  "finally_statement", "unset_variables", "unset_variable",
  "function_declaration_statement", "is_reference", "is_variadic",
  "class_declaration_statement", "@4", "@5", "class_modifiers",
  "class_modifier", "trait_declaration_statement", "@6",
  "interface_declaration_statement", "@7", "extends_from",
  "interface_extends_list", "implements_list", "foreach_variable",
  "for_statement", "foreach_statement", "declare_statement",
  "switch_case_list", "case_list", "case_separator", "while_statement",
  "if_stmt_without_else", "if_stmt", "alt_if_stmt_without_else",
  "alt_if_stmt", "parameter_list", "non_empty_parameter_list", "parameter",
  "optional_type", "type_expr", "type", "return_type", "argument_list",
  "non_empty_argument_list", "argument", "global_var_list", "global_var",
  "static_var_list", "static_var", "class_statement_list",
  "class_statement", "name_list", "trait_adaptations",
  "trait_adaptation_list", "trait_adaptation", "trait_precedence",
  "trait_alias", "trait_method_reference",
  "absolute_trait_method_reference", "method_body", "variable_modifiers",
  "method_modifiers", "non_empty_member_modifiers", "member_modifier",
  "property_list", "property", "class_const_list", "class_const_decl",
  "const_decl", "echo_expr_list", "echo_expr", "for_exprs",
  "non_empty_for_exprs", "anonymous_class", "@8", "new_expr",
  "expr_without_variable", "function", "backup_doc_comment",
  "backup_fn_flags", "returns_ref", "lexical_vars", "lexical_var_list",
  "lexical_var", "function_call", "class_name", "class_name_reference",
  "exit_expr", "backticks_expr", "ctor_arguments", "dereferencable_scalar",
  "scalar", "constant", "expr", "optional_expr", "variable_class_name",
  "dereferencable", "callable_expr", "callable_variable", "variable",
  "simple_variable", "static_member", "new_variable", "member_name",
  "property_name", "array_pair_list", "non_empty_array_pair_list",
  "array_pair", "encaps_list", "encaps_var", "encaps_var_offset",
  "internal_functions_in_yacc", "isset_variables", "isset_variable", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,    44,   263,
     264,   265,   266,   267,   268,   269,    61,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,    63,
      58,   282,   283,   284,   124,    94,    38,   285,   286,   287,
     288,   289,    60,    62,   290,   291,   292,   293,    43,    45,
      46,    42,    47,    37,    33,   294,   126,    64,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,    91,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,    40,    41,    59,
     123,   125,    93,    96,    34,    36
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   166,   167,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     169,   169,   169,   169,   169,   169,   169,   170,   170,   171,
     171,   172,   172,   173,   173,   173,   174,   174,   174,   174,
     174,   174,   174,   175,   174,   176,   174,   174,   174,   174,
     174,   174,   177,   177,   178,   178,   179,   179,   180,   180,
     181,   181,   182,   182,   183,   183,   184,   184,   185,   185,
     186,   186,   187,   187,   188,   188,   188,   188,   188,   188,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   190,   189,
     189,   189,   189,   189,   189,   191,   191,   192,   192,   193,
     193,   194,   194,   195,   196,   197,   197,   198,   198,   200,
     199,   201,   199,   202,   202,   203,   203,   205,   204,   207,
     206,   208,   208,   209,   209,   210,   210,   211,   211,   211,
     211,   212,   212,   213,   213,   214,   214,   215,   215,   215,
     215,   216,   216,   216,   217,   217,   218,   218,   219,   219,
     220,   220,   221,   221,   222,   222,   223,   223,   224,   224,
     225,   225,   226,   226,   227,   227,   228,   228,   228,   229,
     229,   230,   230,   231,   231,   232,   232,   233,   233,   234,
     235,   235,   236,   236,   237,   237,   238,   238,   238,   238,
     239,   239,   240,   240,   240,   241,   241,   242,   242,   243,
     244,   244,   244,   244,   245,   245,   246,   247,   247,   248,
     248,   249,   249,   250,   250,   251,   251,   251,   251,   251,
     251,   252,   252,   253,   253,   254,   254,   255,   256,   257,
     257,   258,   259,   259,   260,   260,   262,   261,   263,   263,
     264,   264,   264,   264,   264,   264,   264,   264,   264,   264,
     264,   264,   264,   264,   264,   264,   264,   264,   264,   264,
     264,   264,   264,   264,   264,   264,   264,   264,   264,   264,
     264,   264,   264,   264,   264,   264,   264,   264,   264,   264,
     264,   264,   264,   264,   264,   264,   264,   264,   264,   264,
     264,   264,   264,   264,   264,   264,   264,   264,   264,   264,
     264,   264,   264,   264,   264,   264,   264,   264,   264,   264,
     264,   264,   264,   264,   264,   264,   265,   266,   267,   268,
     268,   269,   269,   270,   270,   271,   271,   272,   272,   272,
     272,   273,   273,   274,   274,   275,   275,   276,   276,   276,
     277,   277,   278,   278,   278,   279,   279,   279,   279,   279,
     279,   279,   279,   279,   279,   279,   279,   279,   279,   279,
     279,   280,   280,   280,   281,   281,   282,   282,   283,   284,
     284,   284,   285,   285,   285,   286,   286,   286,   286,   286,
     286,   287,   287,   287,   288,   288,   288,   289,   289,   290,
     290,   290,   290,   290,   290,   291,   291,   291,   292,   292,
     292,   293,   293,   294,   294,   294,   294,   294,   295,   295,
     295,   295,   295,   295,   296,   296,   296,   296,   297,   297,
     297,   297,   297,   297,   297,   298,   298,   298,   299,   299,
     299,   299,   299,   299,   299,   300,   300,   301
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       0,     1,     3,     1,     3,     2,     1,     1,     1,     1,
       1,     4,     3,     0,     6,     0,     5,     3,     4,     3,
       4,     3,     1,     1,     5,     6,     5,     6,     3,     1,
       3,     1,     3,     1,     1,     2,     1,     3,     1,     2,
       3,     1,     2,     0,     1,     1,     1,     1,     1,     4,
       3,     1,     1,     5,     7,     9,     5,     3,     3,     3,
       3,     3,     3,     1,     2,     5,     7,     9,     0,     6,
       1,     6,     3,     3,     2,     0,     9,     1,     3,     0,
       4,     1,     3,     1,    13,     0,     1,     0,     1,     0,
      10,     0,     9,     1,     2,     1,     1,     0,     7,     0,
       8,     0,     2,     0,     2,     0,     2,     1,     2,     4,
       3,     1,     4,     1,     4,     1,     4,     3,     4,     4,
       5,     0,     5,     4,     1,     1,     1,     4,     5,     6,
       1,     3,     6,     7,     3,     6,     1,     0,     1,     3,
       4,     6,     0,     1,     1,     2,     1,     1,     1,     0,
       2,     2,     3,     1,     3,     1,     2,     3,     1,     1,
       3,     1,     1,     3,     2,     0,     3,     4,     3,    12,
       1,     3,     1,     2,     3,     1,     2,     2,     2,     3,
       3,     3,     4,     3,     1,     1,     3,     1,     3,     1,
       1,     0,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     3,     1,     2,     4,     3,     1,     4,     4,     3,
       1,     1,     0,     1,     3,     1,     0,     9,     3,     2,
       6,     5,     3,     4,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     5,     4,     3,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     3,     2,
       1,     2,     4,     2,    13,    14,     1,     0,     0,     0,
       1,     0,     4,     3,     1,     1,     2,     2,     4,     4,
       2,     1,     1,     1,     1,     0,     3,     0,     1,     1,
       0,     1,     4,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     2,     3,     3,     1,
       1,     1,     3,     3,     1,     1,     0,     1,     1,     1,
       3,     1,     1,     3,     1,     1,     4,     4,     4,     4,
       1,     1,     1,     3,     1,     4,     2,     3,     3,     1,
       4,     4,     3,     3,     3,     1,     3,     1,     1,     3,
       1,     0,     1,     3,     1,     2,     1,     2,     3,     1,
       4,     2,     6,     4,     2,     2,     1,     2,     1,     4,
       3,     3,     3,     6,     3,     1,     1,     1,     4,     4,
       2,     2,     4,     2,     2,     1,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      80,     0,     2,     1,     0,     0,     0,     0,     0,     0,
     370,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   461,     0,     0,   176,
     175,   391,   405,   406,    81,   444,   143,   404,   395,     0,
       0,     0,     0,     0,     0,     0,     0,   426,   426,     0,
     376,     0,   426,     0,     0,     0,     0,     0,     0,     0,
       0,   171,   177,   179,     0,     0,   407,   408,   409,   414,
     410,   411,   412,     0,    95,   413,     0,     0,   150,   123,
     397,     0,     0,    83,   421,    79,    86,    87,    88,     0,
     173,    89,    90,   210,   131,     0,   132,   353,   425,   379,
     440,     0,   419,   367,   420,     0,     0,   428,     0,   441,
     424,   435,   442,   357,   391,    81,     0,   379,   494,   493,
       0,   491,   490,   369,   371,   373,   338,   339,   340,   341,
     366,   364,   363,   362,   361,   360,   359,   358,   461,   391,
       0,   431,     0,   320,   318,   466,     0,     0,   469,     0,
     462,   464,   304,   296,   392,   299,   393,   400,   449,   394,
     242,     0,   241,   379,   154,   426,   365,     0,     0,   290,
     291,     0,     0,   292,     0,     0,     0,   427,     0,     0,
       0,     0,     0,   121,     0,   123,     0,   102,   103,     0,
     116,     0,     0,     0,   118,   113,     0,   238,   239,     0,
       0,     0,     0,     0,     0,     0,   461,   461,   478,     0,
     416,     0,     0,     0,   476,     0,    93,     0,    85,     0,
       0,   398,     0,   399,     0,     0,     0,   446,     0,     0,
     387,   169,   174,     0,     0,     0,     0,     0,   380,   377,
       0,   426,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   144,     0,   426,     0,     0,   390,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     319,   317,   377,     0,     0,     0,     0,   467,   429,   461,
       0,   403,   465,   400,     0,   401,   298,   426,     0,     0,
       0,     0,     0,   141,   377,     0,     0,     0,   142,     0,
       0,     0,   293,   295,     0,     0,     0,   137,   138,   153,
       0,     0,   101,   139,     0,   152,   116,   119,     0,     0,
       0,   116,     0,     0,    97,     0,    99,     0,   140,     0,
     161,   429,   497,     0,   495,     0,     0,   181,   377,   183,
       0,     0,     0,     0,   415,   477,     0,     0,   429,   475,
     418,   474,    84,    92,     0,    80,   352,     0,   130,   122,
     124,   125,   126,   127,   128,   368,   417,     0,    82,     0,
     231,     0,   233,   235,     0,     0,   211,     0,   123,   214,
     377,     0,     7,     6,     5,     4,     3,     8,     9,    10,
      46,    47,    11,    13,    12,    16,    17,    18,    76,    75,
      74,    73,    72,    71,    77,    14,    15,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    49,    50,
      51,    52,    53,    41,    42,    43,    44,    45,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    61,
      59,    60,    56,    57,    48,    54,    55,    66,    67,    68,
      62,    63,    65,    64,    58,    69,     0,    70,    78,   422,
     447,     0,     0,   323,   325,   324,     0,     0,   356,   321,
     322,   326,   328,   327,   350,   343,   342,   345,   344,   346,
     348,   349,   347,   337,   336,   330,   331,   329,   332,   334,
     335,   351,   333,   423,   448,     0,     0,   458,     0,   460,
     443,     0,     0,   302,   308,   316,   315,   314,   313,   312,
     311,   310,   309,   307,   306,   305,   492,   372,   403,   430,
       0,     0,     0,   468,     0,   463,   181,   453,     0,   452,
     454,     0,   243,   240,     0,   396,     0,   289,     0,     0,
     292,     0,     0,   148,     0,   377,   120,   155,     0,   117,
       0,   116,     0,    98,   100,     0,   116,   112,   237,     0,
       0,     0,   488,   489,    91,     0,   185,     0,     0,   377,
       0,   402,   485,   487,   486,     0,   480,     0,   482,   481,
     484,    80,     0,     0,   445,   236,     0,   232,   181,     0,
       0,     0,     0,   222,     0,   388,   437,   355,     0,   389,
     436,     0,   439,   438,   303,   473,   429,   461,   301,   185,
     450,   451,   222,   123,   208,     0,   123,   206,   133,     0,
     294,     0,   461,     0,     0,   429,     0,   201,   201,   136,
     288,   159,     0,     0,     0,   109,   114,     0,     0,   162,
     145,   496,   182,     0,   377,   245,   250,   184,     0,     0,
     479,     0,     0,    96,     0,   234,   185,     0,     0,     0,
     222,     0,   226,   227,   228,     0,   216,   218,   165,   223,
     224,   456,   354,   459,     0,   377,     0,   212,     0,     0,
     292,   429,     0,   461,     0,     0,   123,   195,   149,   201,
       0,   201,     0,     0,     0,   151,     0,   115,     0,   106,
       0,     0,   111,   186,     0,   271,     0,   245,   300,     0,
      94,   129,   377,   209,   123,   215,     0,   225,   381,   222,
     166,   167,   472,     0,   381,   134,     0,     0,   403,     0,
       0,   123,   193,   146,     0,     0,     0,     0,     0,     0,
     197,     0,   123,   107,   108,     0,     0,   104,   245,   275,
     276,   277,   280,   279,   278,     0,   270,   178,   244,     0,
       0,   272,   273,   251,   271,   483,     0,   213,   229,     0,
     229,   219,   168,     0,   245,   229,   207,     0,   189,     0,
       0,     0,     0,   199,     0,   204,   205,   123,   198,   157,
       0,     0,   105,   110,   271,     0,   377,     0,   282,     0,
     379,   274,   180,   245,     0,   378,     0,   378,   220,   271,
     378,   123,   191,   135,   147,     0,   196,   200,   123,   203,
       0,     0,   160,   172,   252,     0,   248,     0,   283,     0,
     246,     0,     0,   286,     0,   271,   230,     0,     0,   385,
       0,   384,     0,     0,   297,     0,     0,   194,   202,   158,
       0,    81,    58,   253,   264,     0,     0,   255,     0,     0,
       0,   265,   377,   281,     0,     0,   247,   377,   170,   123,
     386,     0,   382,   123,   221,   123,     0,   123,     0,   254,
     256,   257,   258,     0,     0,   284,   377,   285,     0,     0,
     383,     0,     0,   192,     0,   266,   260,   261,   263,   259,
     287,   222,   378,   378,   378,   156,   262,     0,   164,   374,
     375,   229,   378,     0,   267,   123,   378,     0,   249,   268
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   477,   478,   851,     2,    83,    84,    85,   374,
     217,   653,   342,   192,   654,   721,   193,   655,   194,   195,
     182,   220,   379,   380,   646,   651,   810,   715,   349,   350,
     381,   741,   793,   382,   394,   203,    89,    90,   383,   204,
     384,   205,   586,   589,   664,   644,   833,   753,   708,   649,
     710,   807,   638,    93,    94,    95,    96,   685,   686,   687,
     688,   689,   690,   825,   305,   391,   392,   196,   197,   161,
     162,   725,   778,   667,   846,   876,   877,   878,   879,   880,
     881,   936,   779,   780,   781,   782,   817,   818,   852,   853,
     183,   168,   169,   321,   322,   155,   303,    97,    98,   117,
     401,   857,   239,   790,   860,   861,   100,   101,   157,   166,
     222,   306,   102,   103,   104,   105,   178,   106,   107,   108,
     109,   110,   111,   112,   159,   481,   520,   149,   150,   151,
     213,   214,   595,   113,   353,   354
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -730
static const yytype_int16 yypact[] =
{
    -730,   116,  1206,  -730,  5667,  5667,   -39,  5667,  5667,  5667,
    5667,  5667,  5667,  5667,  5667,  5667,  5667,  5667,  5667,  5667,
    5667,  5667,  5667,  5667,   459,   459,  4771,  5667,   403,  -730,
    -730,    23,  -730,  -730,    93,  -730,  -730,  -730,   -32,   -22,
    5667,  4608,   -12,   -10,     3,   145,   163,  5667,  5667,   141,
    -730,   143,  5667,   -30,  5667,   235,    22,   169,   171,   174,
     176,  -730,  -730,  -730,   185,   198,  -730,  -730,  -730,  -730,
    -730,  -730,  -730,   350,    43,  -730,   275,  5667,  -730,  -730,
     380,   465,    14,   208,   -19,  -730,  -730,  -730,  -730,   244,
    -730,  -730,  -730,   265,  -730,   404,  -730,  -730,  -730,   117,
    -730,   219,     1,  -730,   297,  5817,   229,   170,   220,   273,
    3508,  -730,  -730,  -730,   276,  -730,   285,   117,  7386,  7386,
    5667,  7386,  7386,  1517,  1191,  1517,   331,   331,    50,   331,
     331,   331,   331,   331,   331,   331,   331,   331,  4771,  -730,
    5667,   291,   297,   231,   231,  4995,   459,   303,  7292,   280,
     454,  -730,  -730,  -730,  -730,  -730,   328,   220,  -730,   237,
     449,    35,  -730,   117,  -730,  5667,  -730,  5667,    54,  -730,
    7386,   399,  5667,  5667,  5667,   143,  5667,  7386,   343,   354,
     356,   503,    57,  -730,   361,  -730,  6727,  -730,  -730,   275,
     -20,    90,   365,    62,  -730,  -730,    66,  -730,  -730,   459,
    5667,  5667,   368,   457,   458,   462,  4771,  4771,    71,    15,
    -730,  5107,   459,   432,  -730,   275,   -51,   387,   208,  6774,
    1369,   288,   390,   541,   288,   226,  5667,  -730,   467,  4883,
    -730,  -730,  -730,   397,  4608,   406,   526,   401,  -730,   484,
    3488,  5667,  5667,  5667,  5667,  5219,  5667,  5667,  5667,  5667,
    5667,  5667,  5667,  5667,  5667,  5667,  5667,  5667,  5667,  5667,
    5667,  5667,  5667,  5667,  5667,  5667,  5667,  5667,  5667,   425,
    5667,  -730,  3488,  5667,     7,  5667,  -730,  5331,  5667,  5667,
    5667,  5667,  5667,  5667,  5667,  5667,  5667,  5667,  5667,  5667,
    -730,  -730,  -730,  6821,  5667,   408,  6868,  -730,    38,  4771,
    5443,   555,  4995,   220,    22,  -730,  -730,  5667,     7,    22,
    5667,  5667,   491,  -730,  -730,   420,  6915,  5667,  -730,   427,
    6962,   429,   581,  7386,  7244,    49,  7009,  -730,  -730,  -730,
    5667,   143,  -730,  -730,  1532,  -730,     8,  -730,   510,     6,
     275,   214,   437,    68,  -730,   126,  -730,    22,  -730,    64,
    -730,    76,  7386,    77,  -730,  7056,   443,   471,  -730,   475,
     448,   463,   252,   529,  -730,  -730,    -5,  6148,   468,  -730,
    -730,  -730,   208,  -730,   460,  -730,    24,   469,  -730,  -730,
    -730,  -730,  -730,  -730,  -730,  -730,  -730,  6195,  -730,  5667,
    -730,    78,  -730,  7386,   547,  5667,  -730,  5667,  -730,  -730,
    -730,   477,  -730,  -730,  -730,  -730,  -730,  -730,  -730,  -730,
    -730,  -730,  -730,  -730,  -730,  -730,  -730,  -730,  -730,  -730,
    -730,  -730,  -730,  -730,  -730,  -730,  -730,  -730,  -730,  -730,
    -730,  -730,  -730,  -730,  -730,  -730,  -730,  -730,  -730,  -730,
    -730,  -730,  -730,  -730,  -730,  -730,  -730,  -730,  -730,  -730,
    -730,  -730,  -730,  -730,  -730,  -730,  -730,  -730,  -730,  -730,
    -730,  -730,  -730,  -730,  -730,  -730,  -730,  -730,  -730,  -730,
    -730,  -730,  -730,  -730,  -730,  -730,  5667,  -730,  -730,   478,
     480,   220,   488,  1357,  1031,  1517,  5667,  7339,  1680,  1841,
    2004,  2167,  2327,  2489,  2652,  2652,  2652,  2652,  2652,  2810,
    2810,  2810,  2810,   772,   772,   627,   627,   627,    50,    50,
      50,  -730,   331,   478,   480,   220,   493,  -730,  5667,  -730,
     220,  6243,   459,  1517,  1517,  1517,  1517,  1517,  1517,  1517,
    1517,  1517,  1517,  1517,  1517,  1517,  -730,  1517,  -730,   483,
     500,   459,   505,  7386,  5667,  -730,   471,  -730,   498,  -730,
    -730,  6290,  7386,  -730,   514,  -730,  3793,  -730,  5667,  3956,
    5667,  5667,   360,  -730,    10,  7386,  -730,  -730,    46,  -730,
      30,   217,   193,  -730,  -730,   275,   241,  -730,  -730,   459,
     513,  5667,  -730,  -730,  -730,    -4,   546,   524,    -4,  -730,
     670,  -730,  -730,  -730,  -730,   525,  -730,  5667,  -730,  -730,
    -730,  -730,   880,   530,  -730,  7386,  5555,  -730,   471,  7103,
    7150,  1695,   535,   349,  6338,  -730,  -730,  1680,  5667,  -730,
    -730,  6385,  -730,  -730,   231,   670,    41,  4771,  1517,   546,
    -730,  -730,   349,  -730,  -730,  7197,  -730,  -730,  -730,   534,
    7386,   459,  4771,   544,    25,    81,  4119,   537,   551,  -730,
    -730,    13,    30,   275,    37,  -730,  -730,   234,   275,  -730,
    -730,  -730,  -730,    -4,  -730,  -730,  -730,   692,   553,  5667,
    -730,  6101,  1043,  -730,   556,  -730,   546,  4608,   696,   565,
     349,   440,  -730,  -730,  -730,   569,   720,  -730,   695,  -730,
    -730,  -730,  1680,  -730,   572,  -730,   574,  3630,   580,  1858,
    5667,    82,   579,  4771,   360,  4282,  -730,  -730,  -730,  -730,
     539,  -730,   383,   585,   583,  -730,    47,  -730,    30,  -730,
     275,    51,  -730,   692,   587,   377,    -4,  -730,  1517,   584,
    -730,  -730,  -730,  -730,  -730,  -730,   591,  -730,   634,   352,
    -730,   598,   670,   602,   634,  -730,   604,   606,    83,   608,
     609,  -730,  -730,  -730,  2021,   543,   616,  5667,    72,   405,
    -730,    -4,  -730,  -730,  -730,    56,   275,  -730,  -730,  -730,
    -730,  -730,  -730,  -730,  -730,    -4,  -730,  -730,  -730,   684,
     335,   272,  -730,  -730,   589,  -730,   617,  3630,   746,   622,
     746,  -730,  -730,   697,  -730,   746,  -730,  4445,  -730,  4282,
    2184,   621,   623,  -730,   374,  -730,  -730,  -730,  -730,  -730,
      75,  2347,  -730,  -730,   679,    60,   767,    69,  -730,  6457,
     117,  -730,  -730,  -730,   352,  -730,    84,  -730,   768,   694,
    -730,  -730,  -730,  -730,  -730,   633,  -730,  -730,  -730,  3630,
      -4,   635,  -730,  -730,  -730,  5830,  -730,  5667,  -730,   684,
    -730,   778,    70,  -730,  6457,   711,  -730,   640,   719,  -730,
      79,  -730,   644,  5667,  -730,   645,  2510,  -730,  3630,  -730,
     646,   693,   285,  -730,  -730,   656,  5968,  -730,   651,   653,
     713,   698,  7386,  -730,  5667,  6457,  -730,  -730,  -730,  -730,
    -730,    84,  -730,  -730,  7386,  -730,   658,  -730,  6457,  -730,
    -730,  -730,  -730,  6595,    -4,  -730,  7386,  -730,   662,  2673,
    -730,  2836,  2999,  -730,  3162,  -730,  -730,  -730,  6457,   692,
    -730,   349,  -730,  -730,  -730,  -730,  -730,   668,  -730,  -730,
    -730,   746,  -730,   314,  -730,  -730,  -730,  3325,  -730,  -730
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -730,  -730,   -74,  -730,  -237,  -304,    -1,   -27,  -730,  -730,
    -730,   775,  -730,  -730,   180,   113,   643,   123,  -183,   490,
     667,  -175,  -730,    39,  -730,  -730,  -730,  -730,  -730,   264,
       2,  -730,  -730,     5,  -730,  -730,  -730,   755,    26,  -730,
      31,  -730,  -453,  -730,  -525,   142,  -730,    48,  -730,  -730,
    -177,    44,  -730,  -730,  -730,  -730,  -730,  -627,  -730,   106,
    -730,    28,   172,  -729,   -48,  -730,   248,  -730,   509,  -730,
     538,  -680,  -730,  -629,  -730,  -730,   -18,  -730,  -730,  -730,
    -730,  -730,  -730,  -730,  -730,  -714,  -730,    11,  -730,   -28,
     528,  -730,   545,  -518,  -730,  -730,  -730,  -730,  -730,    -2,
    -264,  -473,  -115,   119,  -730,   -23,  -730,     9,   592,  -730,
    -730,   566,    97,  -730,   161,     4,    67,  -730,  -730,  -730,
    -730,   167,    55,  -730,  -730,   601,   562,  -106,  -730,  -107,
     415,   512,  -730,  -730,  -730,   293
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -472
static const yytype_int16 yytable[] =
{
      99,   154,   292,   479,    87,   696,   337,    88,   118,   119,
     334,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,    91,   163,
     148,   152,   295,    92,   723,   513,   230,   156,   297,   704,
     647,    86,   639,   312,   170,   718,  -471,   784,   314,  -470,
     554,   177,   177,   736,   190,   718,   177,   331,   186,   766,
     276,   827,   317,   597,   766,   331,   830,   821,   726,  -431,
     345,   602,   579,   216,   347,   218,   345,   849,   885,   115,
     171,   219,   338,   158,  -163,   581,   606,   891,   814,   388,
     517,    35,  -430,   629,   587,  -187,  -188,  -190,    35,   208,
     360,   361,   805,   228,   695,   269,    35,   160,   373,   840,
     338,   198,   163,   115,   829,   179,     3,   270,   120,   184,
     858,   141,   141,   164,   293,   165,   115,   713,   714,   388,
     185,  -431,  -392,    50,   339,   167,   612,   227,   229,   362,
     187,   188,   148,   855,   296,   172,   815,   173,   116,   148,
      76,   732,  -431,   238,  -430,   676,   598,   337,  -434,   841,
     174,  -431,   568,   364,   211,   212,   570,   518,   859,   177,
     648,   316,    82,   115,   226,  -430,   320,   323,   324,    82,
     326,  -433,   747,   705,  -430,   142,   142,    82,   336,   918,
     341,   143,   144,   540,   313,   545,  -471,   215,   719,  -470,
    -471,   363,   932,  -470,   352,   355,   652,   563,   763,   115,
     148,   148,   767,   318,   372,   367,   332,   812,    99,   844,
     845,   346,   580,   611,   180,   348,   181,   574,   850,   886,
     387,   806,   315,   393,  -163,   582,   607,   892,   273,  -187,
    -188,  -190,   154,   141,   340,   177,   483,   484,   485,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   396,   512,   919,   388,   177,   156,   521,
     575,   523,   524,   525,   526,   527,   528,   529,   530,   531,
     532,   533,   534,   535,   927,   480,   141,   672,   537,  -429,
     274,   650,   175,   148,   543,   307,   148,   142,   482,   141,
     208,   177,   369,   298,   551,   552,   338,   388,   115,   338,
     176,   170,    29,    30,   158,   668,   199,   514,   200,   519,
     275,   201,    99,   202,   565,   592,   593,   233,   234,   571,
     516,   594,   206,   338,   576,   187,   188,   769,   770,   771,
     772,   773,   774,   658,   862,   207,  -269,   865,   115,   547,
     142,  -429,   228,   519,   550,   241,   351,   308,   572,   231,
     240,   657,   208,   142,   548,   211,   212,   229,   681,   368,
     272,   681,  -429,   242,   243,   244,    50,   656,   309,   189,
     386,  -429,   337,   605,   720,   228,   641,   310,   270,   609,
     724,   610,   198,   245,   805,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   642,   269,
    -432,   743,   115,   615,   208,   115,   209,   211,   212,   215,
     139,   270,   301,   115,    35,    50,   819,    37,  -434,   928,
     929,   930,   769,   770,   771,   772,   773,   774,   697,   933,
     299,   699,   302,   938,   208,   311,   221,   619,   786,   656,
     717,   712,   622,   934,   935,   722,   235,   236,   237,   304,
     614,   682,   683,   139,   682,   683,   115,    35,   757,   758,
     617,   643,    65,   319,   775,   223,   225,   776,   210,   211,
     212,   116,   327,    76,   116,   139,    76,  -217,   115,    35,
     757,   758,   116,   328,    76,   329,   208,   140,   369,   330,
     333,   694,   621,   115,   344,    82,   356,   138,   153,   211,
     212,   754,   755,   806,   759,   656,   702,   722,   777,   139,
     357,   358,   115,    35,   760,   359,    37,   375,   628,   208,
     388,   224,   848,   385,   395,   116,   398,    76,   662,   787,
     399,   666,   635,   397,   323,   640,   808,   400,    82,   576,
     538,   544,   682,   683,   576,   160,   800,   116,   555,    76,
     370,   211,   212,   813,   558,   352,   684,   811,   560,   561,
      82,    65,   116,   569,    76,   634,   573,   749,   637,   585,
      99,   671,   584,   588,    87,   684,   590,    88,   874,    99,
     393,   116,   596,    76,   211,   212,   140,   887,   905,   141,
     601,   591,   692,   908,    82,   208,   603,   369,    91,   600,
     608,   148,   839,    92,   613,  -455,   666,  -457,   141,   874,
    -433,    86,   920,   756,   757,   758,   148,   802,   757,   758,
     616,   576,   576,   684,   684,   620,   866,   576,   625,   141,
     630,   915,   627,   868,   769,   770,   771,   772,   773,   774,
      99,   632,   660,   728,    87,   663,   141,    88,   266,   267,
     268,   926,   269,   142,   665,   707,   669,   670,   674,   624,
     211,   212,   680,   700,   270,    99,   709,    99,    91,   783,
     726,   703,   142,    92,   323,   854,   775,   148,   626,   776,
     711,    86,   684,   727,   909,   731,   733,   576,   911,   576,
     912,   365,   914,   142,   735,   371,   734,   738,   739,   645,
     742,   740,   744,   365,   809,   371,   365,   371,   141,   745,
     142,   748,   761,   762,   752,   785,   351,   768,   666,   788,
     822,   789,    99,   792,   769,   770,   771,   772,   773,   774,
     937,   804,   794,   796,   797,   576,   798,   799,   816,   769,
     770,   771,   772,   773,   774,   803,   824,   823,   820,   826,
     836,   828,   837,   847,   863,    99,   769,   770,   771,   772,
     773,   774,   867,   870,   884,   -77,   775,   684,    99,   776,
     889,   141,   142,   890,   893,   895,   897,   898,   701,    99,
     901,   775,   902,   869,   776,   903,   904,   913,   875,   921,
     263,   264,   265,   266,   267,   268,   931,   269,   775,   917,
     191,   776,   716,   765,   343,   577,   832,    99,   752,   270,
     843,   764,   325,   659,   232,   791,   750,   834,   838,   875,
     553,   882,   856,   737,   675,   864,   578,   907,   900,   566,
     883,   511,   557,   795,    99,   142,    99,   894,   910,   546,
     549,   645,   888,   515,   661,     0,     0,   666,     0,     0,
       0,     0,     0,     4,     5,     6,     7,     8,   906,     0,
       0,     0,     9,    10,   684,    11,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    99,     0,    99,
      99,     0,    99,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    14,    99,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,     0,     0,     0,     0,     0,     0,     0,    29,    30,
      31,    32,    33,    34,    35,    36,     0,    37,     0,     0,
      38,    39,    40,    41,    42,     0,    43,     0,    44,     0,
      45,     0,     0,    46,     0,     0,     0,    47,    48,    49,
      50,    51,    52,    53,     0,     0,    54,    55,     0,    56,
       0,    57,    58,    59,    60,    61,    62,    63,     0,     0,
       0,    64,    65,     0,    66,    67,    68,    69,    70,    71,
      72,     0,     0,     0,     0,     0,     0,    73,     0,     0,
       0,     0,    74,    75,    76,     0,     0,    77,     0,    78,
      79,   673,   244,    80,    81,    82,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,    10,     0,    11,     0,
     245,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,     0,   269,     0,     0,     0,
       0,    12,    13,     0,     0,     0,     0,    14,   270,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,    26,    27,    28,     0,     0,     0,     0,     0,     0,
       0,    29,    30,    31,    32,    33,    34,    35,    36,     0,
      37,     0,     0,    38,    39,    40,    41,    42,     0,    43,
       0,    44,     0,    45,     0,     0,    46,     0,     0,     0,
      47,    48,    49,    50,    51,    52,    53,     0,     0,    54,
      55,     0,    56,     0,    57,    58,    59,    60,    61,    62,
      63,     0,     0,     0,    64,    65,     0,    66,    67,    68,
      69,    70,    71,    72,     0,     0,     0,     0,     0,     0,
      73,     0,     0,     0,     0,    74,    75,    76,     0,     0,
      77,     0,    78,    79,   730,   294,    80,    81,    82,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,    10,
     245,    11,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,     0,   269,     0,     0,     0,
       0,     0,     0,     0,    12,    13,     0,     0,   270,     0,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,    26,    27,    28,     0,     0,     0,
       0,     0,     0,     0,    29,    30,    31,    32,    33,    34,
      35,    36,     0,    37,     0,     0,    38,    39,    40,    41,
      42,     0,    43,     0,    44,     0,    45,     0,     0,    46,
       0,     0,     0,    47,    48,    49,    50,    51,    52,    53,
       0,     0,    54,    55,     0,    56,     0,    57,    58,    59,
      60,    61,    62,    63,     0,     0,     0,    64,    65,     0,
      66,    67,    68,    69,    70,    71,    72,     0,     0,     0,
       0,     0,     0,    73,     0,     0,     0,     0,    74,    75,
      76,     0,     0,    77,     0,    78,    79,   243,   244,    80,
      81,    82,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,    10,     0,    11,     0,   245,     0,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,     0,   269,     0,     0,     0,     0,    12,    13,     0,
       0,     0,     0,    14,   270,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,    26,    27,    28,
       0,     0,     0,     0,     0,     0,     0,    29,    30,    31,
      32,    33,    34,    35,    36,     0,    37,     0,     0,    38,
      39,    40,    41,    42,     0,    43,     0,    44,     0,    45,
       0,     0,    46,     0,     0,     0,    47,    48,    49,    50,
       0,    52,    53,     0,     0,    54,     0,     0,    56,     0,
      57,    58,    59,   377,    61,    62,    63,     0,     0,     0,
      64,    65,     0,    66,    67,    68,    69,    70,    71,    72,
       0,     0,     0,     0,     0,     0,    73,     0,     0,     0,
       0,   116,    75,    76,     0,     0,    77,     0,    78,    79,
     378,     0,    80,    81,    82,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,    10,   245,    11,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,     0,   269,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,   270,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
      26,    27,    28,     0,     0,     0,     0,     0,     0,     0,
      29,    30,    31,    32,    33,    34,    35,    36,     0,    37,
       0,     0,    38,    39,    40,    41,    42,     0,    43,     0,
      44,     0,    45,     0,     0,    46,     0,     0,     0,    47,
      48,    49,    50,     0,    52,    53,     0,     0,    54,     0,
       0,    56,     0,    57,    58,    59,   377,    61,    62,    63,
       0,     0,     0,    64,    65,     0,    66,    67,    68,    69,
      70,    71,    72,     0,     0,     0,     0,     0,     0,    73,
       0,     0,     0,     0,   116,    75,    76,     0,     0,    77,
       0,    78,    79,   567,     0,    80,    81,    82,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,    10,     0,
      11,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,     0,   269,     0,     0,     0,     0,
       0,     0,     0,    12,    13,     0,     0,   270,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    26,    27,    28,     0,     0,     0,   679,
       0,     0,     0,    29,    30,    31,    32,    33,    34,    35,
      36,     0,    37,     0,     0,    38,    39,    40,    41,    42,
       0,    43,     0,    44,     0,    45,     0,     0,    46,     0,
       0,     0,    47,    48,    49,    50,     0,    52,    53,     0,
       0,    54,     0,     0,    56,     0,    57,    58,    59,   377,
      61,    62,    63,     0,     0,     0,    64,    65,     0,    66,
      67,    68,    69,    70,    71,    72,     0,     0,     0,     0,
       0,     0,    73,     0,     0,     0,     0,   116,    75,    76,
       0,     0,    77,     0,    78,    79,     0,     0,    80,    81,
      82,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,    10,     0,    11,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,     0,   269,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,   270,     0,
       0,     0,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,    26,    27,    28,     0,
       0,     0,     0,     0,     0,     0,    29,    30,    31,    32,
      33,    34,    35,    36,     0,    37,     0,     0,    38,    39,
      40,    41,    42,   746,    43,     0,    44,     0,    45,     0,
       0,    46,     0,     0,     0,    47,    48,    49,    50,     0,
      52,    53,     0,     0,    54,     0,     0,    56,     0,    57,
      58,    59,   377,    61,    62,    63,     0,     0,     0,    64,
      65,     0,    66,    67,    68,    69,    70,    71,    72,     0,
       0,     0,     0,     0,     0,    73,     0,     0,     0,     0,
     116,    75,    76,     0,     0,    77,     0,    78,    79,     0,
       0,    80,    81,    82,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,    10,     0,    11,     0,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,     0,   269,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    12,
      13,   270,     0,     0,     0,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,    26,
      27,    28,     0,     0,     0,     0,     0,     0,     0,    29,
      30,    31,    32,    33,    34,    35,    36,     0,    37,     0,
       0,    38,    39,    40,    41,    42,     0,    43,     0,    44,
       0,    45,   801,     0,    46,     0,     0,     0,    47,    48,
      49,    50,     0,    52,    53,     0,     0,    54,     0,     0,
      56,     0,    57,    58,    59,   377,    61,    62,    63,     0,
       0,     0,    64,    65,     0,    66,    67,    68,    69,    70,
      71,    72,     0,     0,     0,     0,     0,     0,    73,     0,
       0,     0,     0,   116,    75,    76,     0,     0,    77,     0,
      78,    79,     0,     0,    80,    81,    82,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,    10,     0,    11,
       0,     0,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,     0,   269,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    13,   270,     0,     0,     0,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,    26,    27,    28,     0,     0,     0,     0,     0,
       0,     0,    29,    30,    31,    32,    33,    34,    35,    36,
       0,    37,     0,     0,    38,    39,    40,    41,    42,     0,
      43,     0,    44,   835,    45,     0,     0,    46,     0,     0,
       0,    47,    48,    49,    50,     0,    52,    53,     0,     0,
      54,     0,     0,    56,     0,    57,    58,    59,   377,    61,
      62,    63,     0,     0,     0,    64,    65,     0,    66,    67,
      68,    69,    70,    71,    72,     0,     0,     0,     0,     0,
       0,    73,     0,     0,     0,     0,   116,    75,    76,     0,
       0,    77,     0,    78,    79,     0,     0,    80,    81,    82,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
      10,     0,    11,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,     0,   269,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   270,    12,    13,     0,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,    26,    27,    28,     0,     0,
       0,     0,     0,     0,     0,    29,    30,    31,    32,    33,
      34,    35,    36,     0,    37,     0,     0,    38,    39,    40,
      41,    42,     0,    43,     0,    44,     0,    45,     0,     0,
      46,     0,     0,     0,    47,    48,    49,    50,     0,    52,
      53,     0,     0,    54,     0,     0,    56,     0,    57,    58,
      59,   377,    61,    62,    63,     0,     0,     0,    64,    65,
       0,    66,    67,    68,    69,    70,    71,    72,     0,     0,
       0,     0,     0,     0,    73,     0,     0,     0,     0,   116,
      75,    76,     0,     0,    77,     0,    78,    79,   842,     0,
      80,    81,    82,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,    10,     0,    11,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,     0,   269,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   270,     0,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,     0,     0,     0,     0,     0,     0,     0,    29,    30,
      31,    32,    33,    34,    35,    36,     0,    37,     0,     0,
      38,    39,    40,    41,    42,     0,    43,   896,    44,     0,
      45,     0,     0,    46,     0,     0,     0,    47,    48,    49,
      50,     0,    52,    53,     0,     0,    54,     0,     0,    56,
       0,    57,    58,    59,   377,    61,    62,    63,     0,     0,
       0,    64,    65,     0,    66,    67,    68,    69,    70,    71,
      72,     0,     0,     0,     0,     0,     0,    73,     0,     0,
       0,     0,   116,    75,    76,     0,     0,    77,     0,    78,
      79,     0,     0,    80,    81,    82,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,    10,     0,    11,  -472,
    -472,  -472,  -472,  -472,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,     0,   269,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   270,
       0,    12,    13,     0,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,    26,    27,    28,     0,     0,     0,     0,     0,     0,
       0,    29,    30,    31,    32,    33,    34,    35,    36,     0,
      37,     0,     0,    38,    39,    40,    41,    42,     0,    43,
       0,    44,     0,    45,     0,     0,    46,     0,     0,     0,
      47,    48,    49,    50,     0,    52,    53,     0,     0,    54,
       0,     0,    56,     0,    57,    58,    59,   377,    61,    62,
      63,     0,     0,     0,    64,    65,     0,    66,    67,    68,
      69,    70,    71,    72,     0,     0,     0,     0,     0,     0,
      73,     0,     0,     0,     0,   116,    75,    76,     0,     0,
      77,     0,    78,    79,   922,     0,    80,    81,    82,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,    10,
       0,    11,  -472,  -472,  -472,  -472,   261,   262,   263,   264,
     265,   266,   267,   268,     0,   269,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   270,     0,     0,
       0,     0,     0,     0,    12,    13,     0,     0,     0,     0,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,    26,    27,    28,     0,     0,     0,
       0,     0,     0,     0,    29,    30,    31,    32,    33,    34,
      35,    36,     0,    37,     0,     0,    38,    39,    40,    41,
      42,     0,    43,     0,    44,     0,    45,     0,     0,    46,
       0,     0,     0,    47,    48,    49,    50,     0,    52,    53,
       0,     0,    54,     0,     0,    56,     0,    57,    58,    59,
     377,    61,    62,    63,     0,     0,     0,    64,    65,     0,
      66,    67,    68,    69,    70,    71,    72,     0,     0,     0,
       0,     0,     0,    73,     0,     0,     0,     0,   116,    75,
      76,     0,     0,    77,     0,    78,    79,   923,     0,    80,
      81,    82,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,    10,     0,    11,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,    13,     0,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,    26,    27,    28,
       0,     0,     0,     0,     0,     0,     0,    29,    30,    31,
      32,    33,    34,    35,    36,     0,    37,     0,     0,    38,
      39,    40,    41,    42,     0,    43,     0,    44,     0,    45,
       0,     0,    46,     0,     0,     0,    47,    48,    49,    50,
       0,    52,    53,     0,     0,    54,     0,     0,    56,     0,
      57,    58,    59,   377,    61,    62,    63,     0,     0,     0,
      64,    65,     0,    66,    67,    68,    69,    70,    71,    72,
       0,     0,     0,     0,     0,     0,    73,     0,     0,     0,
       0,   116,    75,    76,     0,     0,    77,     0,    78,    79,
     924,     0,    80,    81,    82,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,    10,     0,    11,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
      26,    27,    28,     0,     0,     0,     0,     0,     0,     0,
      29,    30,    31,    32,    33,    34,    35,    36,     0,    37,
       0,     0,    38,    39,    40,    41,    42,     0,    43,     0,
      44,     0,    45,     0,     0,    46,     0,     0,     0,    47,
      48,    49,    50,     0,    52,    53,     0,     0,    54,     0,
       0,    56,     0,    57,    58,    59,   377,    61,    62,    63,
       0,     0,     0,    64,    65,     0,    66,    67,    68,    69,
      70,    71,    72,     0,     0,     0,     0,     0,     0,    73,
       0,     0,     0,     0,   116,    75,    76,     0,     0,    77,
       0,    78,    79,   925,     0,    80,    81,    82,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,    10,     0,
      11,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,     0,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    26,    27,    28,     0,     0,     0,     0,
       0,     0,     0,    29,    30,    31,    32,    33,    34,    35,
      36,     0,    37,     0,     0,    38,    39,    40,    41,    42,
       0,    43,     0,    44,     0,    45,     0,     0,    46,     0,
       0,     0,    47,    48,    49,    50,     0,    52,    53,     0,
       0,    54,     0,     0,    56,     0,    57,    58,    59,   377,
      61,    62,    63,     0,     0,     0,    64,    65,     0,    66,
      67,    68,    69,    70,    71,    72,     0,     0,     0,     0,
       0,     0,    73,     0,     0,     0,     0,   116,    75,    76,
       0,     0,    77,     0,    78,    79,   939,     0,    80,    81,
      82,   402,   403,   404,   405,   406,     0,   407,   408,   409,
     410,   411,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,     0,     0,     0,
       0,     0,     0,   412,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   413,   414,     0,
     415,   416,   417,   418,   419,   420,   421,   422,   423,     0,
       0,   424,    35,   290,   291,     0,  -429,     0,   425,   426,
     427,   428,   429,   430,   431,   432,   433,   434,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,     0,   459,   460,   461,   462,   463,     0,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,     0,
       0,     0,     0,     4,     5,     6,     7,     8,  -429,     0,
     474,   475,     9,    10,     0,    11,     0,     0,   476,     0,
       0,     0,     0,    82,     0,     0,     0,     0,     0,  -429,
       0,     0,     0,     0,     0,     0,     0,     0,  -429,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,     0,     0,     0,     0,     0,     0,     0,    29,    30,
      31,    32,    33,    34,    35,    36,     0,    37,     0,     0,
      38,    39,    40,    41,    42,     0,    43,     0,    44,     0,
      45,     0,     0,    46,     0,     0,     0,    47,    48,    49,
      50,     0,    52,    53,     0,     0,    54,     0,     0,    56,
       0,    57,    58,    59,   377,    61,    62,    63,     0,     0,
       0,    64,    65,     0,    66,    67,    68,    69,    70,    71,
      72,     0,     0,     0,     0,     0,     0,    73,     0,     0,
       0,     0,   116,    75,    76,     0,     0,    77,     0,    78,
      79,     0,     0,    80,    81,    82,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,    10,     0,    11,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   633,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,    26,    27,    28,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,    32,    33,    34,    35,    36,     0,
      37,     0,     0,    38,    39,    40,    41,    42,     0,    43,
       0,    44,     0,    45,     0,     0,    46,     0,     0,     0,
      47,    48,    49,    50,     0,    52,    53,     0,     0,    54,
       0,     0,    56,     0,    57,    58,    59,     0,     0,     0,
       0,     0,     0,     0,    64,    65,     0,    66,    67,    68,
      69,    70,    71,    72,     0,     0,     0,     0,     0,     0,
      73,     0,     0,     0,     0,   116,    75,    76,     0,     0,
      77,     0,    78,    79,     0,     0,    80,    81,    82,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,    10,
       0,    11,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   636,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,    13,     0,     0,     0,     0,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,    26,    27,    28,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    31,    32,    33,    34,
      35,    36,     0,    37,     0,     0,    38,    39,    40,    41,
      42,     0,    43,     0,    44,     0,    45,     0,     0,    46,
       0,     0,     0,    47,    48,    49,    50,     0,    52,    53,
       0,     0,    54,     0,     0,    56,     0,    57,    58,    59,
       0,     0,     0,     0,     0,     0,     0,    64,    65,     0,
      66,    67,    68,    69,    70,    71,    72,     0,     0,     0,
       0,     0,     0,    73,     0,     0,     0,     0,   116,    75,
      76,     0,     0,    77,     0,    78,    79,     0,     0,    80,
      81,    82,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,    10,     0,    11,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   706,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,    13,     0,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,    26,    27,    28,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
      32,    33,    34,    35,    36,     0,    37,     0,     0,    38,
      39,    40,    41,    42,     0,    43,     0,    44,     0,    45,
       0,     0,    46,     0,     0,     0,    47,    48,    49,    50,
       0,    52,    53,     0,     0,    54,     0,     0,    56,     0,
      57,    58,    59,     0,     0,     0,     0,     0,     0,     0,
      64,    65,     0,    66,    67,    68,    69,    70,    71,    72,
       0,     0,     0,     0,     0,     0,    73,     0,     0,     0,
       0,   116,    75,    76,     0,     0,    77,     0,    78,    79,
       0,     0,    80,    81,    82,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,    10,     0,    11,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   751,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
      26,    27,    28,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,    32,    33,    34,    35,    36,     0,    37,
       0,     0,    38,    39,    40,    41,    42,     0,    43,     0,
      44,     0,    45,     0,     0,    46,     0,     0,     0,    47,
      48,    49,    50,     0,    52,    53,     0,     0,    54,     0,
       0,    56,     0,    57,    58,    59,     0,     0,     0,     0,
       0,     0,     0,    64,    65,     0,    66,    67,    68,    69,
      70,    71,    72,     0,     0,     0,     0,     0,     0,    73,
       0,     0,     0,     0,   116,    75,    76,     0,     0,    77,
       0,    78,    79,     0,     0,    80,    81,    82,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,    10,     0,
      11,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   831,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,     0,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    26,    27,    28,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    31,    32,    33,    34,    35,
      36,     0,    37,     0,     0,    38,    39,    40,    41,    42,
       0,    43,     0,    44,     0,    45,     0,     0,    46,     0,
       0,     0,    47,    48,    49,    50,     0,    52,    53,     0,
       0,    54,     0,     0,    56,     0,    57,    58,    59,     0,
       0,     0,     0,     0,     0,     0,    64,    65,     0,    66,
      67,    68,    69,    70,    71,    72,     0,     0,     0,     0,
       0,     0,    73,     0,     0,     0,     0,   116,    75,    76,
       0,     0,    77,     0,    78,    79,     0,     0,    80,    81,
      82,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,    10,     0,    11,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,     0,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,    26,    27,    28,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    31,    32,
      33,    34,    35,    36,     0,    37,     0,     0,    38,    39,
      40,    41,    42,     0,    43,     0,    44,     0,    45,     0,
       0,    46,     0,     0,     0,    47,    48,    49,    50,     0,
      52,    53,     0,     0,    54,     0,     0,    56,     0,    57,
      58,    59,     0,     0,     0,     0,     0,     0,     0,    64,
      65,     0,    66,    67,    68,    69,    70,    71,    72,     0,
       0,     0,     0,     0,     0,    73,     0,     0,     0,     0,
     116,    75,    76,     0,     0,    77,     0,    78,    79,     0,
       0,    80,    81,    82,     4,     5,     6,     7,     8,   145,
       0,     0,     0,     9,    10,     0,    11,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   146,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    12,
      13,     0,     0,     0,     0,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,    26,
      27,    28,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   114,    32,    33,   115,    35,     0,     0,    37,     0,
       0,    38,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,     0,     0,     4,     5,     6,     7,
       8,     0,     0,    58,    59,     9,    10,     0,    11,     0,
       0,     0,   147,    65,     0,    66,    67,    68,    69,    70,
      71,    72,     0,     0,     0,     0,     0,     0,    73,     0,
       0,     0,     0,   116,    75,    76,     0,     0,    77,     0,
       0,    12,    13,     0,    80,    81,    82,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,    26,    27,    28,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   114,    32,    33,   115,    35,     0,     0,
      37,     0,     0,    38,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,     0,     0,     0,     4,     5,
       6,     7,     8,     0,     0,    58,    59,     9,    10,     0,
      11,     0,     0,     0,    64,    65,     0,    66,    67,    68,
      69,    70,    71,    72,     0,     0,     0,     0,     0,     0,
      73,   146,     0,     0,     0,   116,    75,    76,   389,     0,
      77,   390,     0,    12,    13,     0,    80,    81,    82,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    26,    27,    28,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   114,    32,    33,   115,    35,
       0,     0,    37,     0,     0,    38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,     0,     0,     0,     0,
       4,     5,     6,     7,     8,     0,     0,    58,    59,     9,
      10,     0,    11,     0,     0,     0,   147,    65,     0,    66,
      67,    68,    69,    70,    71,    72,     0,     0,     0,     0,
       0,     0,    73,     0,     0,     0,     0,   116,    75,    76,
       0,     0,    77,     0,     0,    12,    13,     0,    80,    81,
      82,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,    26,    27,    28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   114,    32,    33,
     115,    35,     0,     0,    37,   366,     0,    38,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,     0,     0,
       0,     0,     4,     5,     6,     7,     8,     0,     0,    58,
      59,     9,    10,     0,    11,     0,     0,     0,    64,    65,
       0,    66,    67,    68,    69,    70,    71,    72,     0,   486,
       0,     0,     0,     0,    73,     0,     0,     0,     0,   116,
      75,    76,     0,     0,    77,     0,     0,    12,    13,     0,
      80,    81,    82,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,    26,    27,    28,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   114,
      32,    33,   115,    35,     0,     0,    37,     0,     0,    38,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
       0,     0,     0,     0,     4,     5,     6,     7,     8,     0,
       0,    58,    59,     9,    10,     0,    11,     0,     0,     0,
      64,    65,     0,    66,    67,    68,    69,    70,    71,    72,
       0,     0,     0,     0,     0,     0,    73,   522,     0,     0,
       0,   116,    75,    76,     0,     0,    77,     0,     0,    12,
      13,     0,    80,    81,    82,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,    26,
      27,    28,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   114,    32,    33,   115,    35,     0,     0,    37,     0,
       0,    38,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,     0,     0,     4,     5,     6,     7,
       8,     0,     0,    58,    59,     9,    10,     0,    11,     0,
       0,     0,    64,    65,     0,    66,    67,    68,    69,    70,
      71,    72,     0,     0,     0,     0,     0,     0,    73,   541,
       0,     0,     0,   116,    75,    76,     0,     0,    77,     0,
       0,    12,    13,     0,    80,    81,    82,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,    26,    27,    28,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   114,    32,    33,   115,    35,     0,     0,
      37,     0,     0,    38,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,     0,     0,     0,     4,     5,
       6,     7,     8,     0,     0,    58,    59,     9,    10,     0,
      11,     0,     0,     0,   542,    65,     0,    66,    67,    68,
      69,    70,    71,    72,     0,     0,     0,     0,     0,     0,
      73,     0,     0,     0,     0,   116,    75,    76,     0,     0,
      77,     0,     0,    12,    13,     0,    80,    81,    82,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    26,    27,    28,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   114,    32,    33,   115,    35,
       0,     0,    37,     0,     0,    38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,     0,     0,     0,     0,
       4,     5,     6,     7,     8,     0,     0,    58,    59,     9,
      10,     0,    11,     0,     0,     0,    64,    65,     0,    66,
      67,    68,    69,    70,    71,    72,     0,     0,     0,     0,
       0,     0,    73,     0,     0,     0,     0,   116,    75,    76,
     389,     0,    77,     0,     0,    12,    13,     0,    80,    81,
      82,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,    26,    27,    28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   114,    32,    33,
     115,    35,     0,     0,    37,     0,     0,    38,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    58,
      59,     0,     0,     0,     0,     0,     0,     0,    64,    65,
       0,    66,    67,    68,    69,    70,    71,    72,     0,     0,
       0,     0,     0,     0,    73,     0,     0,     0,     0,   116,
      75,    76,     0,     0,    77,     0,   242,   243,   244,     0,
      80,    81,    82,   402,   403,   404,   405,   406,     0,   407,
     408,   409,   410,   411,     0,     0,   245,     0,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,     0,   269,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   270,   412,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   413,
     414,     0,   415,   416,   417,   418,   419,   420,   421,   422,
     423,     0,     0,   871,     0,     0,     0,     0,     0,     0,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,     0,   459,   460,   461,   462,   463,
       0,   464,   465,   466,   467,   468,   469,   470,   471,   472,
     473,   402,   403,   404,   405,   406,   271,   407,   408,   409,
     410,   411,   872,   475,    76,     0,     0,     0,     0,     0,
       0,   873,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   412,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   413,   414,     0,
     415,   416,   417,   418,   419,   420,   421,   422,   423,     0,
       0,   871,     0,     0,     0,     0,     0,     0,   425,   426,
     427,   428,   429,   430,   431,   432,   433,   434,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,     0,   459,   460,   461,   462,   463,     0,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,     0,
     242,   243,   244,     0,     0,     0,     0,     0,     0,     0,
     872,   475,    76,     0,     0,     0,     0,     0,     0,   899,
     245,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,     0,   269,   242,   243,   244,
       0,     0,     0,     0,     0,     0,     0,     0,   270,     0,
       0,     0,     0,     0,     0,     0,     0,   245,     0,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,     0,   269,   242,   243,   244,     0,     0,     0,
       0,     0,     0,     0,     0,   270,     0,     0,     0,     0,
       0,     0,     0,     0,   245,     0,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,     0,
     269,     0,   242,   243,   244,     0,     0,     0,     0,     0,
       0,     0,   270,   729,     0,     0,     0,     0,     0,     0,
       0,     0,   245,     0,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,     0,   269,   242,
     243,   244,     0,     0,     0,     0,     0,     0,     0,   599,
     270,     0,     0,     0,     0,     0,     0,     0,     0,   245,
       0,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,     0,   269,     0,   242,   243,   244,
       0,     0,     0,     0,     0,     0,   604,   270,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   245,     0,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,     0,   269,   242,   243,   244,     0,     0,     0,
       0,     0,     0,     0,   623,   270,     0,     0,     0,     0,
       0,     0,     0,     0,   245,     0,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,     0,
     269,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   631,   270,     0,     0,     0,     0,     0,     0,     0,
     402,   403,   404,   405,   406,     0,   407,   408,   409,   410,
     411,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   691,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   412,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   413,   414,     0,   415,
     416,   417,   418,   419,   420,   421,   422,   423,     0,     0,
     424,     0,     0,     0,     0,     0,   693,   425,   426,   427,
     428,   429,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     458,     0,   459,   460,   461,   462,   463,     0,   464,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   402,   403,
     404,   405,   406,     0,   407,   408,   409,   410,   411,   474,
     475,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     412,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   413,   414,     0,   415,   416,   417,
     769,   770,   771,   772,   773,   774,     0,     0,   916,     0,
       0,     0,     0,     0,     0,   425,   426,   427,   428,   429,
     430,   431,   432,   433,   434,   435,   436,   437,   438,   439,
     440,   441,   442,   443,   444,   445,   446,   447,   448,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   458,     0,
     459,   460,   461,   462,   463,     0,   464,   465,   466,   467,
     468,   469,   470,   471,   472,   473,   242,   243,   244,     0,
       0,     0,     0,     0,     0,     0,     0,   474,   475,     0,
       0,     0,     0,     0,     0,     0,   245,     0,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,     0,   269,   242,   243,   244,     0,     0,     0,     0,
       0,     0,     0,     0,   270,     0,     0,     0,     0,     0,
       0,     0,     0,   245,     0,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,     0,   269,
     242,   243,   244,     0,     0,     0,     0,     0,     0,     0,
       0,   270,     0,     0,     0,     0,     0,     0,     0,     0,
     245,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,     0,   269,   242,   243,   244,
       0,     0,     0,     0,     0,     0,   335,     0,   270,     0,
       0,     0,     0,     0,     0,     0,     0,   245,     0,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,     0,   269,   242,   243,   244,     0,     0,     0,
       0,     0,   376,     0,     0,   270,     0,     0,     0,     0,
       0,     0,     0,     0,   245,     0,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,     0,
     269,   242,   243,   244,     0,     0,     0,     0,     0,   536,
       0,     0,   270,     0,     0,     0,     0,     0,     0,     0,
       0,   245,     0,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,     0,   269,   242,   243,
     244,     0,     0,     0,     0,     0,   539,     0,     0,   270,
       0,     0,     0,     0,     0,     0,     0,     0,   245,     0,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,     0,   269,   242,   243,   244,     0,     0,
       0,     0,     0,   556,     0,     0,   270,     0,     0,     0,
       0,     0,     0,     0,     0,   245,     0,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
       0,   269,   242,   243,   244,     0,     0,     0,     0,     0,
     559,     0,     0,   270,     0,     0,     0,     0,     0,     0,
       0,     0,   245,     0,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,     0,   269,   242,
     243,   244,     0,     0,     0,     0,     0,   564,     0,     0,
     270,     0,     0,     0,     0,     0,     0,     0,     0,   245,
       0,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,     0,   269,   242,   243,   244,     0,
       0,     0,     0,     0,   583,     0,     0,   270,     0,     0,
       0,     0,     0,     0,     0,     0,   245,     0,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,     0,   269,   242,   243,   244,     0,     0,     0,     0,
       0,   677,     0,     0,   270,     0,     0,     0,     0,     0,
       0,     0,     0,   245,     0,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,     0,   269,
       0,   242,   243,   244,     0,     0,   300,     0,   678,     0,
       0,   270,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   245,     0,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   562,   269,   242,   243,
     244,     0,     0,     0,     0,   698,     0,     0,     0,   270,
       0,     0,     0,     0,     0,     0,     0,     0,   245,   618,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,     0,   269,   242,   243,   244,     0,     0,
       0,     0,     0,     0,     0,     0,   270,     0,     0,     0,
       0,     0,     0,     0,     0,   245,     0,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
       0,   269,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   270
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-730)))

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-472)))

static const yytype_int16 yycheck[] =
{
       2,    28,   117,   240,     2,   632,   189,     2,     4,     5,
     185,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     2,    31,
      26,    27,   138,     2,   663,   272,    84,    28,   145,    14,
      30,     2,   560,     8,    40,     8,     8,   727,   163,     8,
     314,    47,    48,   680,    55,     8,    52,     8,    54,     8,
     108,   790,     8,    68,     8,     8,   795,   781,     8,    68,
       8,   375,     8,    74,     8,    76,     8,     8,     8,    83,
      41,    77,   102,    28,     8,     8,     8,     8,   768,    83,
      83,    84,    68,   546,   358,    14,    14,    14,    84,    84,
     206,   207,    30,   154,   629,    55,    84,    84,   159,    34,
     102,    56,   114,    83,   794,    48,     0,    67,   157,    52,
      36,    24,    25,    30,   120,   157,    83,   114,   115,    83,
     160,   130,   151,   110,   154,   157,   400,    82,   157,    68,
     110,   111,   138,   823,   140,   157,   775,   157,   152,   145,
     154,   676,   151,    36,   130,   608,   161,   340,   157,    84,
     157,   160,   154,   148,   149,   150,   160,   160,    84,   165,
     160,   167,   165,    83,   160,   151,   172,   173,   174,   165,
     176,   157,   700,   158,   160,    24,    25,   165,   189,   903,
     191,    24,    25,   299,   159,   302,   158,   154,   161,   158,
     162,   130,   931,   162,   200,   201,   160,   158,   161,    83,
     206,   207,   161,   159,   215,   211,   159,   161,   220,   159,
     160,   159,   158,   398,    83,   159,    83,   159,   159,   159,
     226,   159,   165,   229,   158,   158,   158,   158,    68,   158,
     158,   158,   269,   146,   154,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   234,   270,   904,    83,   273,   269,   275,
     154,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   921,   240,   199,   601,   294,    68,
     130,   565,   157,   299,   300,    68,   302,   146,   241,   212,
      84,   307,    86,   146,   310,   311,   102,    83,    83,   102,
     157,   317,    78,    79,   269,   589,   157,   272,   157,   274,
     160,   157,   334,   157,   330,    83,    84,    72,    73,   340,
     273,    89,   157,   102,   345,   110,   111,    75,    76,    77,
      78,    79,    80,   160,   827,   157,    84,   830,    83,   304,
     199,   130,   154,   308,   309,    68,   199,   130,   154,   125,
     151,   154,    84,   212,   307,   149,   150,   157,    29,   212,
     151,    29,   151,     9,    10,    11,   110,   570,   151,   154,
     164,   160,   575,   389,   160,   154,    36,   160,    67,   395,
     664,   397,   347,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    68,    55,
     157,   695,    83,   481,    84,    83,    86,   149,   150,   154,
      80,    67,   162,    83,    84,   110,   111,    87,   157,   922,
     923,   924,    75,    76,    77,    78,    79,    80,   633,   932,
     157,   636,     8,   936,    84,    16,    86,   515,   732,   652,
     653,   648,   520,   159,   160,   658,    72,    73,    74,   151,
     476,   132,   133,    80,   132,   133,    83,    84,   105,   106,
     486,   131,   132,    94,   117,    80,    81,   120,   148,   149,
     150,   152,   159,   154,   152,    80,   154,   158,    83,    84,
     105,   106,   152,   159,   154,   159,    84,   157,    86,    16,
     159,   627,   518,    83,   159,   165,   158,    68,   125,   149,
     150,   706,   709,   159,   711,   718,   642,   720,   161,    80,
      83,    83,    83,    84,   161,    83,    87,   160,   544,    84,
      83,    86,   816,   163,   157,   152,    30,   154,   585,   734,
     159,   588,   558,   157,   560,   561,   161,    83,   165,   570,
     162,    16,   132,   133,   575,    84,   751,   152,   158,   154,
     148,   149,   150,   766,   157,   581,   613,   762,   159,     8,
     165,   132,   152,    83,   154,   556,   159,   703,   559,   128,
     602,   597,   159,   128,   602,   632,   158,   602,   845,   611,
     606,   152,    83,   154,   149,   150,   157,   854,   882,   522,
     160,   158,   618,   887,   165,    84,   157,    86,   602,   161,
      83,   627,   807,   602,   157,   157,   663,   157,   541,   876,
     157,   602,   906,   104,   105,   106,   642,   104,   105,   106,
     162,   652,   653,   680,   681,   162,   831,   658,   158,   562,
     162,   898,   157,   838,    75,    76,    77,    78,    79,    80,
     672,   157,   159,   669,   672,   129,   579,   672,    51,    52,
      53,   918,    55,   522,   160,   646,    16,   162,   158,   522,
     149,   150,   157,   159,    67,   697,   159,   699,   672,   726,
       8,   157,   541,   672,   700,   820,   117,   703,   541,   120,
     159,   672,   739,   160,   889,   159,   677,   718,   893,   720,
     895,   209,   897,   562,   159,   213,    30,   158,     8,   562,
     158,    36,   158,   221,   761,   223,   224,   225,   641,   159,
     579,   162,   157,   160,   705,   161,   579,   160,   775,   158,
     161,   117,   754,   155,    75,    76,    77,    78,    79,    80,
     935,   757,   160,   159,   158,   766,   158,   158,    84,    75,
      76,    77,    78,    79,    80,   159,    30,   160,   780,   157,
     159,    84,   159,    16,    16,   787,    75,    76,    77,    78,
      79,    80,   159,   158,    16,   102,   117,   824,   800,   120,
     160,   704,   641,    84,   160,   160,   160,   151,   641,   811,
     159,   117,   159,   840,   120,   102,   118,   159,   845,   157,
      48,    49,    50,    51,    52,    53,   158,    55,   117,   903,
      55,   120,   652,   720,   191,   345,   797,   839,   799,    67,
     161,   718,   175,   579,    89,   739,   704,   799,   804,   876,
     312,   847,   824,   681,   606,   161,   347,   885,   876,   331,
     849,   269,   317,   744,   866,   704,   868,   863,   891,   303,
     308,   704,   161,   272,   581,    -1,    -1,   904,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,   884,    -1,
      -1,    -1,    12,    13,   921,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   909,    -1,   911,
     912,    -1,   914,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      -1,    -1,    -1,    -1,    54,   937,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    68,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    79,
      80,    81,    82,    83,    84,    85,    -1,    87,    -1,    -1,
      90,    91,    92,    93,    94,    -1,    96,    -1,    98,    -1,
     100,    -1,    -1,   103,    -1,    -1,    -1,   107,   108,   109,
     110,   111,   112,   113,    -1,    -1,   116,   117,    -1,   119,
      -1,   121,   122,   123,   124,   125,   126,   127,    -1,    -1,
      -1,   131,   132,    -1,   134,   135,   136,   137,   138,   139,
     140,    -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,
      -1,    -1,   152,   153,   154,    -1,    -1,   157,    -1,   159,
     160,   161,    11,   163,   164,   165,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    13,    -1,    15,    -1,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,    -1,    -1,    -1,
      -1,    48,    49,    -1,    -1,    -1,    -1,    54,    67,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    78,    79,    80,    81,    82,    83,    84,    85,    -1,
      87,    -1,    -1,    90,    91,    92,    93,    94,    -1,    96,
      -1,    98,    -1,   100,    -1,    -1,   103,    -1,    -1,    -1,
     107,   108,   109,   110,   111,   112,   113,    -1,    -1,   116,
     117,    -1,   119,    -1,   121,   122,   123,   124,   125,   126,
     127,    -1,    -1,    -1,   131,   132,    -1,   134,   135,   136,
     137,   138,   139,   140,    -1,    -1,    -1,    -1,    -1,    -1,
     147,    -1,    -1,    -1,    -1,   152,   153,   154,    -1,    -1,
     157,    -1,   159,   160,   161,    14,   163,   164,   165,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,
      29,    15,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    67,    -1,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    79,    80,    81,    82,    83,
      84,    85,    -1,    87,    -1,    -1,    90,    91,    92,    93,
      94,    -1,    96,    -1,    98,    -1,   100,    -1,    -1,   103,
      -1,    -1,    -1,   107,   108,   109,   110,   111,   112,   113,
      -1,    -1,   116,   117,    -1,   119,    -1,   121,   122,   123,
     124,   125,   126,   127,    -1,    -1,    -1,   131,   132,    -1,
     134,   135,   136,   137,   138,   139,   140,    -1,    -1,    -1,
      -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,   152,   153,
     154,    -1,    -1,   157,    -1,   159,   160,    10,    11,   163,
     164,   165,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    13,    -1,    15,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,    -1,    -1,    -1,    -1,    48,    49,    -1,
      -1,    -1,    -1,    54,    67,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    68,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    79,    80,
      81,    82,    83,    84,    85,    -1,    87,    -1,    -1,    90,
      91,    92,    93,    94,    -1,    96,    -1,    98,    -1,   100,
      -1,    -1,   103,    -1,    -1,    -1,   107,   108,   109,   110,
      -1,   112,   113,    -1,    -1,   116,    -1,    -1,   119,    -1,
     121,   122,   123,   124,   125,   126,   127,    -1,    -1,    -1,
     131,   132,    -1,   134,   135,   136,   137,   138,   139,   140,
      -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,
      -1,   152,   153,   154,    -1,    -1,   157,    -1,   159,   160,
     161,    -1,   163,   164,   165,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    13,    29,    15,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    67,    -1,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    79,    80,    81,    82,    83,    84,    85,    -1,    87,
      -1,    -1,    90,    91,    92,    93,    94,    -1,    96,    -1,
      98,    -1,   100,    -1,    -1,   103,    -1,    -1,    -1,   107,
     108,   109,   110,    -1,   112,   113,    -1,    -1,   116,    -1,
      -1,   119,    -1,   121,   122,   123,   124,   125,   126,   127,
      -1,    -1,    -1,   131,   132,    -1,   134,   135,   136,   137,
     138,   139,   140,    -1,    -1,    -1,    -1,    -1,    -1,   147,
      -1,    -1,    -1,    -1,   152,   153,   154,    -1,    -1,   157,
      -1,   159,   160,   161,    -1,   163,   164,   165,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,
      15,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    -1,    -1,    67,    -1,    54,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,    74,
      -1,    -1,    -1,    78,    79,    80,    81,    82,    83,    84,
      85,    -1,    87,    -1,    -1,    90,    91,    92,    93,    94,
      -1,    96,    -1,    98,    -1,   100,    -1,    -1,   103,    -1,
      -1,    -1,   107,   108,   109,   110,    -1,   112,   113,    -1,
      -1,   116,    -1,    -1,   119,    -1,   121,   122,   123,   124,
     125,   126,   127,    -1,    -1,    -1,   131,   132,    -1,   134,
     135,   136,   137,   138,   139,   140,    -1,    -1,    -1,    -1,
      -1,    -1,   147,    -1,    -1,    -1,    -1,   152,   153,   154,
      -1,    -1,   157,    -1,   159,   160,    -1,    -1,   163,   164,
     165,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    13,    -1,    15,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    67,    -1,
      -1,    -1,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    -1,    68,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    79,    80,    81,
      82,    83,    84,    85,    -1,    87,    -1,    -1,    90,    91,
      92,    93,    94,    95,    96,    -1,    98,    -1,   100,    -1,
      -1,   103,    -1,    -1,    -1,   107,   108,   109,   110,    -1,
     112,   113,    -1,    -1,   116,    -1,    -1,   119,    -1,   121,
     122,   123,   124,   125,   126,   127,    -1,    -1,    -1,   131,
     132,    -1,   134,   135,   136,   137,   138,   139,   140,    -1,
      -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,
     152,   153,   154,    -1,    -1,   157,    -1,   159,   160,    -1,
      -1,   163,   164,   165,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    13,    -1,    15,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    67,    -1,    -1,    -1,    54,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    68,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      79,    80,    81,    82,    83,    84,    85,    -1,    87,    -1,
      -1,    90,    91,    92,    93,    94,    -1,    96,    -1,    98,
      -1,   100,   101,    -1,   103,    -1,    -1,    -1,   107,   108,
     109,   110,    -1,   112,   113,    -1,    -1,   116,    -1,    -1,
     119,    -1,   121,   122,   123,   124,   125,   126,   127,    -1,
      -1,    -1,   131,   132,    -1,   134,   135,   136,   137,   138,
     139,   140,    -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,
      -1,    -1,    -1,   152,   153,   154,    -1,    -1,   157,    -1,
     159,   160,    -1,    -1,   163,   164,   165,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,    15,
      -1,    -1,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    67,    -1,    -1,    -1,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    79,    80,    81,    82,    83,    84,    85,
      -1,    87,    -1,    -1,    90,    91,    92,    93,    94,    -1,
      96,    -1,    98,    99,   100,    -1,    -1,   103,    -1,    -1,
      -1,   107,   108,   109,   110,    -1,   112,   113,    -1,    -1,
     116,    -1,    -1,   119,    -1,   121,   122,   123,   124,   125,
     126,   127,    -1,    -1,    -1,   131,   132,    -1,   134,   135,
     136,   137,   138,   139,   140,    -1,    -1,    -1,    -1,    -1,
      -1,   147,    -1,    -1,    -1,    -1,   152,   153,   154,    -1,
      -1,   157,    -1,   159,   160,    -1,    -1,   163,   164,   165,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      13,    -1,    15,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    48,    49,    -1,    -1,    -1,
      -1,    54,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    68,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    79,    80,    81,    82,
      83,    84,    85,    -1,    87,    -1,    -1,    90,    91,    92,
      93,    94,    -1,    96,    -1,    98,    -1,   100,    -1,    -1,
     103,    -1,    -1,    -1,   107,   108,   109,   110,    -1,   112,
     113,    -1,    -1,   116,    -1,    -1,   119,    -1,   121,   122,
     123,   124,   125,   126,   127,    -1,    -1,    -1,   131,   132,
      -1,   134,   135,   136,   137,   138,   139,   140,    -1,    -1,
      -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,   152,
     153,   154,    -1,    -1,   157,    -1,   159,   160,   161,    -1,
     163,   164,   165,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    13,    -1,    15,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    48,    49,
      -1,    -1,    -1,    -1,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    68,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    79,
      80,    81,    82,    83,    84,    85,    -1,    87,    -1,    -1,
      90,    91,    92,    93,    94,    -1,    96,    97,    98,    -1,
     100,    -1,    -1,   103,    -1,    -1,    -1,   107,   108,   109,
     110,    -1,   112,   113,    -1,    -1,   116,    -1,    -1,   119,
      -1,   121,   122,   123,   124,   125,   126,   127,    -1,    -1,
      -1,   131,   132,    -1,   134,   135,   136,   137,   138,   139,
     140,    -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,
      -1,    -1,   152,   153,   154,    -1,    -1,   157,    -1,   159,
     160,    -1,    -1,   163,   164,   165,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    13,    -1,    15,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    78,    79,    80,    81,    82,    83,    84,    85,    -1,
      87,    -1,    -1,    90,    91,    92,    93,    94,    -1,    96,
      -1,    98,    -1,   100,    -1,    -1,   103,    -1,    -1,    -1,
     107,   108,   109,   110,    -1,   112,   113,    -1,    -1,   116,
      -1,    -1,   119,    -1,   121,   122,   123,   124,   125,   126,
     127,    -1,    -1,    -1,   131,   132,    -1,   134,   135,   136,
     137,   138,   139,   140,    -1,    -1,    -1,    -1,    -1,    -1,
     147,    -1,    -1,    -1,    -1,   152,   153,   154,    -1,    -1,
     157,    -1,   159,   160,   161,    -1,   163,   164,   165,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,
      -1,    15,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    79,    80,    81,    82,    83,
      84,    85,    -1,    87,    -1,    -1,    90,    91,    92,    93,
      94,    -1,    96,    -1,    98,    -1,   100,    -1,    -1,   103,
      -1,    -1,    -1,   107,   108,   109,   110,    -1,   112,   113,
      -1,    -1,   116,    -1,    -1,   119,    -1,   121,   122,   123,
     124,   125,   126,   127,    -1,    -1,    -1,   131,   132,    -1,
     134,   135,   136,   137,   138,   139,   140,    -1,    -1,    -1,
      -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,   152,   153,
     154,    -1,    -1,   157,    -1,   159,   160,   161,    -1,   163,
     164,   165,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    13,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,
      -1,    -1,    -1,    54,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    68,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    79,    80,
      81,    82,    83,    84,    85,    -1,    87,    -1,    -1,    90,
      91,    92,    93,    94,    -1,    96,    -1,    98,    -1,   100,
      -1,    -1,   103,    -1,    -1,    -1,   107,   108,   109,   110,
      -1,   112,   113,    -1,    -1,   116,    -1,    -1,   119,    -1,
     121,   122,   123,   124,   125,   126,   127,    -1,    -1,    -1,
     131,   132,    -1,   134,   135,   136,   137,   138,   139,   140,
      -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,
      -1,   152,   153,   154,    -1,    -1,   157,    -1,   159,   160,
     161,    -1,   163,   164,   165,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    13,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    79,    80,    81,    82,    83,    84,    85,    -1,    87,
      -1,    -1,    90,    91,    92,    93,    94,    -1,    96,    -1,
      98,    -1,   100,    -1,    -1,   103,    -1,    -1,    -1,   107,
     108,   109,   110,    -1,   112,   113,    -1,    -1,   116,    -1,
      -1,   119,    -1,   121,   122,   123,   124,   125,   126,   127,
      -1,    -1,    -1,   131,   132,    -1,   134,   135,   136,   137,
     138,   139,   140,    -1,    -1,    -1,    -1,    -1,    -1,   147,
      -1,    -1,    -1,    -1,   152,   153,   154,    -1,    -1,   157,
      -1,   159,   160,   161,    -1,   163,   164,   165,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,    54,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    79,    80,    81,    82,    83,    84,
      85,    -1,    87,    -1,    -1,    90,    91,    92,    93,    94,
      -1,    96,    -1,    98,    -1,   100,    -1,    -1,   103,    -1,
      -1,    -1,   107,   108,   109,   110,    -1,   112,   113,    -1,
      -1,   116,    -1,    -1,   119,    -1,   121,   122,   123,   124,
     125,   126,   127,    -1,    -1,    -1,   131,   132,    -1,   134,
     135,   136,   137,   138,   139,   140,    -1,    -1,    -1,    -1,
      -1,    -1,   147,    -1,    -1,    -1,    -1,   152,   153,   154,
      -1,    -1,   157,    -1,   159,   160,   161,    -1,   163,   164,
     165,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    -1,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    -1,
      -1,    83,    84,    65,    66,    -1,    68,    -1,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,    -1,   125,   126,   127,   128,   129,    -1,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,   130,    -1,
     152,   153,    12,    13,    -1,    15,    -1,    -1,   160,    -1,
      -1,    -1,    -1,   165,    -1,    -1,    -1,    -1,    -1,   151,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      -1,    -1,    -1,    -1,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    68,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    79,
      80,    81,    82,    83,    84,    85,    -1,    87,    -1,    -1,
      90,    91,    92,    93,    94,    -1,    96,    -1,    98,    -1,
     100,    -1,    -1,   103,    -1,    -1,    -1,   107,   108,   109,
     110,    -1,   112,   113,    -1,    -1,   116,    -1,    -1,   119,
      -1,   121,   122,   123,   124,   125,   126,   127,    -1,    -1,
      -1,   131,   132,    -1,   134,   135,   136,   137,   138,   139,
     140,    -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,
      -1,    -1,   152,   153,   154,    -1,    -1,   157,    -1,   159,
     160,    -1,    -1,   163,   164,   165,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    81,    82,    83,    84,    85,    -1,
      87,    -1,    -1,    90,    91,    92,    93,    94,    -1,    96,
      -1,    98,    -1,   100,    -1,    -1,   103,    -1,    -1,    -1,
     107,   108,   109,   110,    -1,   112,   113,    -1,    -1,   116,
      -1,    -1,   119,    -1,   121,   122,   123,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   131,   132,    -1,   134,   135,   136,
     137,   138,   139,   140,    -1,    -1,    -1,    -1,    -1,    -1,
     147,    -1,    -1,    -1,    -1,   152,   153,   154,    -1,    -1,
     157,    -1,   159,   160,    -1,    -1,   163,   164,   165,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,    83,
      84,    85,    -1,    87,    -1,    -1,    90,    91,    92,    93,
      94,    -1,    96,    -1,    98,    -1,   100,    -1,    -1,   103,
      -1,    -1,    -1,   107,   108,   109,   110,    -1,   112,   113,
      -1,    -1,   116,    -1,    -1,   119,    -1,   121,   122,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,    -1,
     134,   135,   136,   137,   138,   139,   140,    -1,    -1,    -1,
      -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,   152,   153,
     154,    -1,    -1,   157,    -1,   159,   160,    -1,    -1,   163,
     164,   165,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    13,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,
      -1,    -1,    -1,    54,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    68,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      81,    82,    83,    84,    85,    -1,    87,    -1,    -1,    90,
      91,    92,    93,    94,    -1,    96,    -1,    98,    -1,   100,
      -1,    -1,   103,    -1,    -1,    -1,   107,   108,   109,   110,
      -1,   112,   113,    -1,    -1,   116,    -1,    -1,   119,    -1,
     121,   122,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     131,   132,    -1,   134,   135,   136,   137,   138,   139,   140,
      -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,
      -1,   152,   153,   154,    -1,    -1,   157,    -1,   159,   160,
      -1,    -1,   163,   164,   165,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    13,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    81,    82,    83,    84,    85,    -1,    87,
      -1,    -1,    90,    91,    92,    93,    94,    -1,    96,    -1,
      98,    -1,   100,    -1,    -1,   103,    -1,    -1,    -1,   107,
     108,   109,   110,    -1,   112,   113,    -1,    -1,   116,    -1,
      -1,   119,    -1,   121,   122,   123,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   131,   132,    -1,   134,   135,   136,   137,
     138,   139,   140,    -1,    -1,    -1,    -1,    -1,    -1,   147,
      -1,    -1,    -1,    -1,   152,   153,   154,    -1,    -1,   157,
      -1,   159,   160,    -1,    -1,   163,   164,   165,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,    54,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    81,    82,    83,    84,
      85,    -1,    87,    -1,    -1,    90,    91,    92,    93,    94,
      -1,    96,    -1,    98,    -1,   100,    -1,    -1,   103,    -1,
      -1,    -1,   107,   108,   109,   110,    -1,   112,   113,    -1,
      -1,   116,    -1,    -1,   119,    -1,   121,   122,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   131,   132,    -1,   134,
     135,   136,   137,   138,   139,   140,    -1,    -1,    -1,    -1,
      -1,    -1,   147,    -1,    -1,    -1,    -1,   152,   153,   154,
      -1,    -1,   157,    -1,   159,   160,    -1,    -1,   163,   164,
     165,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,
      -1,    -1,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    -1,    68,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
      82,    83,    84,    85,    -1,    87,    -1,    -1,    90,    91,
      92,    93,    94,    -1,    96,    -1,    98,    -1,   100,    -1,
      -1,   103,    -1,    -1,    -1,   107,   108,   109,   110,    -1,
     112,   113,    -1,    -1,   116,    -1,    -1,   119,    -1,   121,
     122,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,
     132,    -1,   134,   135,   136,   137,   138,   139,   140,    -1,
      -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,
     152,   153,   154,    -1,    -1,   157,    -1,   159,   160,    -1,
      -1,   163,   164,   165,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    12,    13,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    -1,    -1,    -1,    -1,    54,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    68,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    82,    83,    84,    -1,    -1,    87,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   110,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,    -1,    -1,   122,   123,    12,    13,    -1,    15,    -1,
      -1,    -1,   131,   132,    -1,   134,   135,   136,   137,   138,
     139,   140,    -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,
      -1,    -1,    -1,   152,   153,   154,    -1,    -1,   157,    -1,
      -1,    48,    49,    -1,   163,   164,   165,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    81,    82,    83,    84,    -1,    -1,
      87,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   110,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,    -1,    -1,   122,   123,    12,    13,    -1,
      15,    -1,    -1,    -1,   131,   132,    -1,   134,   135,   136,
     137,   138,   139,   140,    -1,    -1,    -1,    -1,    -1,    -1,
     147,    36,    -1,    -1,    -1,   152,   153,   154,   155,    -1,
     157,   158,    -1,    48,    49,    -1,   163,   164,   165,    54,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    81,    82,    83,    84,
      -1,    -1,    87,    -1,    -1,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,   122,   123,    12,
      13,    -1,    15,    -1,    -1,    -1,   131,   132,    -1,   134,
     135,   136,   137,   138,   139,   140,    -1,    -1,    -1,    -1,
      -1,    -1,   147,    -1,    -1,    -1,    -1,   152,   153,   154,
      -1,    -1,   157,    -1,    -1,    48,    49,    -1,   163,   164,
     165,    54,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    68,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,
      83,    84,    -1,    -1,    87,    88,    -1,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,   122,
     123,    12,    13,    -1,    15,    -1,    -1,    -1,   131,   132,
      -1,   134,   135,   136,   137,   138,   139,   140,    -1,    30,
      -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,   152,
     153,   154,    -1,    -1,   157,    -1,    -1,    48,    49,    -1,
     163,   164,   165,    54,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    68,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      81,    82,    83,    84,    -1,    -1,    87,    -1,    -1,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,
      -1,   122,   123,    12,    13,    -1,    15,    -1,    -1,    -1,
     131,   132,    -1,   134,   135,   136,   137,   138,   139,   140,
      -1,    -1,    -1,    -1,    -1,    -1,   147,    36,    -1,    -1,
      -1,   152,   153,   154,    -1,    -1,   157,    -1,    -1,    48,
      49,    -1,   163,   164,   165,    54,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    68,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    82,    83,    84,    -1,    -1,    87,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   110,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,    -1,    -1,   122,   123,    12,    13,    -1,    15,    -1,
      -1,    -1,   131,   132,    -1,   134,   135,   136,   137,   138,
     139,   140,    -1,    -1,    -1,    -1,    -1,    -1,   147,    36,
      -1,    -1,    -1,   152,   153,   154,    -1,    -1,   157,    -1,
      -1,    48,    49,    -1,   163,   164,   165,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    81,    82,    83,    84,    -1,    -1,
      87,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   110,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,    -1,    -1,   122,   123,    12,    13,    -1,
      15,    -1,    -1,    -1,   131,   132,    -1,   134,   135,   136,
     137,   138,   139,   140,    -1,    -1,    -1,    -1,    -1,    -1,
     147,    -1,    -1,    -1,    -1,   152,   153,   154,    -1,    -1,
     157,    -1,    -1,    48,    49,    -1,   163,   164,   165,    54,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    81,    82,    83,    84,
      -1,    -1,    87,    -1,    -1,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,   122,   123,    12,
      13,    -1,    15,    -1,    -1,    -1,   131,   132,    -1,   134,
     135,   136,   137,   138,   139,   140,    -1,    -1,    -1,    -1,
      -1,    -1,   147,    -1,    -1,    -1,    -1,   152,   153,   154,
     155,    -1,   157,    -1,    -1,    48,    49,    -1,   163,   164,
     165,    54,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    68,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,
      83,    84,    -1,    -1,    87,    -1,    -1,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,
      -1,   134,   135,   136,   137,   138,   139,   140,    -1,    -1,
      -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,   152,
     153,   154,    -1,    -1,   157,    -1,     9,    10,    11,    -1,
     163,   164,   165,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      70,    -1,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,    -1,   125,   126,   127,   128,   129,
      -1,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,     3,     4,     5,     6,     7,   159,     9,    10,    11,
      12,    13,   152,   153,   154,    -1,    -1,    -1,    -1,    -1,
      -1,   161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    -1,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    -1,
      -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,    -1,   125,   126,   127,   128,   129,    -1,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     152,   153,   154,    -1,    -1,    -1,    -1,    -1,    -1,   161,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      55,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,   162,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   161,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,   161,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   161,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   161,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   161,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    -1,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    -1,    -1,
      83,    -1,    -1,    -1,    -1,    -1,   161,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,    -1,   125,   126,   127,   128,   129,    -1,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    13,   152,
     153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    -1,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,    -1,
     125,   126,   127,   128,   129,    -1,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   152,   153,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,   158,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      55,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,   158,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    55,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,   158,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    55,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
     158,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,   158,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,   158,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
      -1,     9,    10,    11,    -1,    -1,    14,    -1,   158,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   102,    55,     9,    10,
      11,    -1,    -1,    -1,    -1,   158,    -1,    -1,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   167,   171,     0,     3,     4,     5,     6,     7,    12,
      13,    15,    48,    49,    54,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    68,    69,    70,    78,
      79,    80,    81,    82,    83,    84,    85,    87,    90,    91,
      92,    93,    94,    96,    98,   100,   103,   107,   108,   109,
     110,   111,   112,   113,   116,   117,   119,   121,   122,   123,
     124,   125,   126,   127,   131,   132,   134,   135,   136,   137,
     138,   139,   140,   147,   152,   153,   154,   157,   159,   160,
     163,   164,   165,   172,   173,   174,   189,   196,   199,   202,
     203,   204,   206,   219,   220,   221,   222,   263,   264,   265,
     272,   273,   278,   279,   280,   281,   283,   284,   285,   286,
     287,   288,   289,   299,    80,    83,   152,   265,   281,   281,
     157,   281,   281,   281,   281,   281,   281,   281,   281,   281,
     281,   281,   281,   281,   281,   281,   281,   281,    68,    80,
     157,   278,   280,   287,   287,     8,    36,   131,   281,   293,
     294,   295,   281,   125,   173,   261,   273,   274,   288,   290,
      84,   235,   236,   265,    30,   157,   275,   157,   257,   258,
     281,   189,   157,   157,   157,   157,   157,   281,   282,   282,
      83,    83,   186,   256,   282,   160,   281,   110,   111,   154,
     172,   177,   179,   182,   184,   185,   233,   234,   288,   157,
     157,   157,   157,   201,   205,   207,   157,   157,    84,    86,
     148,   149,   150,   296,   297,   154,   172,   176,   172,   281,
     187,    86,   276,   296,    86,   296,   160,   288,   154,   157,
     230,   125,   203,    72,    73,    72,    73,    74,    36,   268,
     151,    68,     9,    10,    11,    29,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    55,
      67,   159,   151,    68,   130,   160,   230,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      65,    66,   268,   281,    14,   293,   281,   295,   287,   157,
      14,   162,     8,   262,   151,   230,   277,    68,   130,   151,
     160,    16,     8,   159,   268,   282,   281,     8,   159,    94,
     281,   259,   260,   281,   281,   186,   281,   159,   159,   159,
      16,     8,   159,   159,   187,   159,   172,   184,   102,   154,
     154,   172,   178,   182,   159,     8,   159,     8,   159,   194,
     195,   287,   281,   300,   301,   281,   158,    83,    83,    83,
     293,   293,    68,   130,   148,   297,    88,   281,   287,    86,
     148,   297,   172,   159,   175,   160,   158,   124,   161,   188,
     189,   196,   199,   204,   206,   163,   164,   281,    83,   155,
     158,   231,   232,   281,   200,   157,   189,   157,    30,   159,
      83,   266,     3,     4,     5,     6,     7,     9,    10,    11,
      12,    13,    55,    69,    70,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    83,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   125,
     126,   127,   128,   129,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   152,   153,   160,   168,   169,   170,
     288,   291,   282,   281,   281,   281,    30,   281,   281,   281,
     281,   281,   281,   281,   281,   281,   281,   281,   281,   281,
     281,   281,   281,   281,   281,   281,   281,   281,   281,   281,
     281,   274,   281,   170,   288,   291,   282,    83,   160,   288,
     292,   281,    36,   281,   281,   281,   281,   281,   281,   281,
     281,   281,   281,   281,   281,   281,   158,   281,   162,   158,
     293,    36,   131,   281,    16,   295,   277,   288,   282,   292,
     288,   281,   281,   236,   266,   158,   158,   258,   157,   158,
     159,     8,   102,   158,   158,   281,   256,   161,   154,    83,
     160,   172,   154,   159,   159,   154,   172,   185,   234,     8,
     158,     8,   158,   158,   159,   128,   208,   266,   128,   209,
     158,   158,    83,    84,    89,   298,    83,    68,   161,   161,
     161,   160,   171,   157,   161,   281,     8,   158,    83,   281,
     281,   187,   266,   157,   281,   230,   162,   281,    30,   230,
     162,   281,   230,   161,   287,   158,   287,   157,   281,   208,
     162,   161,   157,    30,   189,   281,    30,   189,   218,   259,
     281,    36,    68,   131,   211,   287,   190,    30,   160,   215,
     266,   191,   160,   177,   180,   183,   184,   154,   160,   195,
     159,   301,   173,   129,   210,   160,   173,   239,   266,    16,
     162,   281,   171,   161,   158,   232,   208,   158,   158,    74,
     157,    29,   132,   133,   173,   223,   224,   225,   226,   227,
     228,   161,   281,   161,   293,   210,   223,   187,   158,   187,
     159,   287,   293,   157,    14,   158,    30,   189,   214,   159,
     216,   159,   216,   114,   115,   193,   180,   184,     8,   161,
     160,   181,   184,   239,   266,   237,     8,   160,   281,   162,
     161,   159,   210,   189,    30,   159,   223,   228,   158,     8,
      36,   197,   158,   266,   158,   159,    95,   259,   162,   293,
     211,    30,   189,   213,   187,   216,   104,   105,   106,   216,
     161,   157,   160,   161,   183,   181,     8,   161,   160,    75,
      76,    77,    78,    79,    80,   117,   120,   161,   238,   248,
     249,   250,   251,   173,   237,   161,   266,   187,   158,   117,
     269,   225,   155,   198,   160,   269,   159,   158,   158,   158,
     187,   101,   104,   159,   281,    30,   159,   217,   161,   173,
     192,   187,   161,   184,   237,   239,    84,   252,   253,   111,
     265,   251,   161,   160,    30,   229,   157,   229,    84,   237,
     229,    30,   189,   212,   213,    99,   159,   159,   217,   187,
      34,    84,   161,   161,   159,   160,   240,    16,   266,     8,
     159,   170,   254,   255,   268,   237,   227,   267,    36,    84,
     270,   271,   267,    16,   161,   267,   187,   159,   187,   173,
     158,    83,   152,   161,   170,   173,   241,   242,   243,   244,
     245,   246,   281,   253,    16,     8,   159,   170,   161,   160,
      84,     8,   158,   160,   281,   160,    97,   160,   151,   161,
     242,   159,   159,   102,   118,   266,   281,   255,   266,   187,
     271,   187,   187,   159,   187,   170,    83,   168,   251,   239,
     266,   157,   161,   161,   161,   161,   170,   223,   267,   267,
     267,   158,   229,   267,   159,   160,   247,   187,   267,   161
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  YYUSE (yytype);
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
      case 81: /* "integer number (T_LNUMBER)" */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 82: /* "floating-point number (T_DNUMBER)" */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 83: /* "identifier (T_STRING)" */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 84: /* "variable (T_VARIABLE)" */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 85: /* T_INLINE_HTML */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 86: /* "quoted-string and whitespace (T_ENCAPSED_AND_WHITESPACE)" */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 87: /* "quoted-string (T_CONSTANT_ENCAPSED_STRING)" */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 88: /* "variable name (T_STRING_VARNAME)" */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 89: /* "number (T_NUM_STRING)" */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 170: /* identifier */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 171: /* top_statement_list */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 172: /* namespace_name */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 173: /* name */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 174: /* top_statement */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 178: /* group_use_declaration */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 179: /* mixed_group_use_declaration */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 180: /* inline_use_declarations */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 181: /* unprefixed_use_declarations */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 182: /* use_declarations */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 183: /* inline_use_declaration */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 184: /* unprefixed_use_declaration */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 185: /* use_declaration */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 186: /* const_list */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 187: /* inner_statement_list */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 188: /* inner_statement */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 189: /* statement */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 191: /* catch_list */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 192: /* catch_name_list */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 193: /* finally_statement */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 194: /* unset_variables */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 195: /* unset_variable */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 196: /* function_declaration_statement */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 199: /* class_declaration_statement */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 204: /* trait_declaration_statement */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 206: /* interface_declaration_statement */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 208: /* extends_from */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 209: /* interface_extends_list */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 210: /* implements_list */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 211: /* foreach_variable */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 212: /* for_statement */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 213: /* foreach_statement */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 214: /* declare_statement */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 215: /* switch_case_list */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 216: /* case_list */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 218: /* while_statement */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 219: /* if_stmt_without_else */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 220: /* if_stmt */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 221: /* alt_if_stmt_without_else */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 222: /* alt_if_stmt */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 223: /* parameter_list */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 224: /* non_empty_parameter_list */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 225: /* parameter */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 226: /* optional_type */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 227: /* type_expr */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 228: /* type */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 229: /* return_type */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 230: /* argument_list */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 231: /* non_empty_argument_list */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 232: /* argument */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 233: /* global_var_list */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 234: /* global_var */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 235: /* static_var_list */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 236: /* static_var */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 237: /* class_statement_list */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 238: /* class_statement */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 239: /* name_list */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 240: /* trait_adaptations */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 241: /* trait_adaptation_list */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 242: /* trait_adaptation */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 243: /* trait_precedence */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 244: /* trait_alias */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 245: /* trait_method_reference */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 246: /* absolute_trait_method_reference */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 247: /* method_body */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 252: /* property_list */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 253: /* property */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 254: /* class_const_list */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 255: /* class_const_decl */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 256: /* const_decl */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 257: /* echo_expr_list */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 258: /* echo_expr */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 259: /* for_exprs */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 260: /* non_empty_for_exprs */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 261: /* anonymous_class */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 263: /* new_expr */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 264: /* expr_without_variable */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 266: /* backup_doc_comment */

        { if (((*yyvaluep).str)) zend_string_release(((*yyvaluep).str)); };

        break;
      case 269: /* lexical_vars */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 270: /* lexical_var_list */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 271: /* lexical_var */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 272: /* function_call */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 273: /* class_name */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 274: /* class_name_reference */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 275: /* exit_expr */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 276: /* backticks_expr */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 277: /* ctor_arguments */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 278: /* dereferencable_scalar */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 279: /* scalar */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 280: /* constant */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 281: /* expr */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 282: /* optional_expr */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 283: /* variable_class_name */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 284: /* dereferencable */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 285: /* callable_expr */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 286: /* callable_variable */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 287: /* variable */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 288: /* simple_variable */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 289: /* static_member */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 290: /* new_variable */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 291: /* member_name */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 292: /* property_name */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 293: /* array_pair_list */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 294: /* non_empty_array_pair_list */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 295: /* array_pair */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 296: /* encaps_list */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 297: /* encaps_var */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 298: /* encaps_var_offset */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 299: /* internal_functions_in_yacc */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 300: /* isset_variables */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;
      case 301: /* isset_variable */

        { zend_ast_destroy(((*yyvaluep).ast)); };

        break;

      default:
        break;
    }
}




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
/* The lookahead symbol.  */
int yychar;


#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
static YYSTYPE yyval_default;
# define YY_INITIAL_VALUE(Value) = Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

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

    { CG(ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 77:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 78:

    {
			zval zv;
			zend_lex_tstring(&zv);
			(yyval.ast) = zend_ast_create_zval(&zv);
		}
    break;

  case 79:

    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (2)].ast), (yyvsp[(2) - (2)].ast)); }
    break;

  case 80:

    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_STMT_LIST); }
    break;

  case 81:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 82:

    { (yyval.ast) = zend_ast_append_str((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 83:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); (yyval.ast)->attr = ZEND_NAME_NOT_FQ; }
    break;

  case 84:

    { (yyval.ast) = (yyvsp[(3) - (3)].ast); (yyval.ast)->attr = ZEND_NAME_RELATIVE; }
    break;

  case 85:

    { (yyval.ast) = (yyvsp[(2) - (2)].ast); (yyval.ast)->attr = ZEND_NAME_FQ; }
    break;

  case 86:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 87:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 88:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 89:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 90:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 91:

    { (yyval.ast) = zend_ast_create(ZEND_AST_HALT_COMPILER,
			      zend_ast_create_zval_from_long(zend_get_scanned_file_offset()));
			  zend_stop_lexing(); }
    break;

  case 92:

    { (yyval.ast) = zend_ast_create(ZEND_AST_NAMESPACE, (yyvsp[(2) - (3)].ast), NULL);
			  RESET_DOC_COMMENT(); }
    break;

  case 93:

    { RESET_DOC_COMMENT(); }
    break;

  case 94:

    { (yyval.ast) = zend_ast_create(ZEND_AST_NAMESPACE, (yyvsp[(2) - (6)].ast), (yyvsp[(5) - (6)].ast)); }
    break;

  case 95:

    { RESET_DOC_COMMENT(); }
    break;

  case 96:

    { (yyval.ast) = zend_ast_create(ZEND_AST_NAMESPACE, NULL, (yyvsp[(4) - (5)].ast)); }
    break;

  case 97:

    { (yyval.ast) = (yyvsp[(2) - (3)].ast); }
    break;

  case 98:

    { (yyval.ast) = (yyvsp[(3) - (4)].ast); (yyval.ast)->attr = (yyvsp[(2) - (4)].num); }
    break;

  case 99:

    { (yyval.ast) = (yyvsp[(2) - (3)].ast); (yyval.ast)->attr = T_CLASS; }
    break;

  case 100:

    { (yyval.ast) = (yyvsp[(3) - (4)].ast); (yyval.ast)->attr = (yyvsp[(2) - (4)].num); }
    break;

  case 101:

    { (yyval.ast) = (yyvsp[(2) - (3)].ast); }
    break;

  case 102:

    { (yyval.num) = T_FUNCTION; }
    break;

  case 103:

    { (yyval.num) = T_CONST; }
    break;

  case 104:

    { (yyval.ast) = zend_ast_create(ZEND_AST_GROUP_USE, (yyvsp[(1) - (5)].ast), (yyvsp[(4) - (5)].ast)); }
    break;

  case 105:

    { (yyval.ast) = zend_ast_create(ZEND_AST_GROUP_USE, (yyvsp[(2) - (6)].ast), (yyvsp[(5) - (6)].ast)); }
    break;

  case 106:

    { (yyval.ast) = zend_ast_create(ZEND_AST_GROUP_USE, (yyvsp[(1) - (5)].ast), (yyvsp[(4) - (5)].ast));}
    break;

  case 107:

    { (yyval.ast) = zend_ast_create(ZEND_AST_GROUP_USE, (yyvsp[(2) - (6)].ast), (yyvsp[(5) - (6)].ast)); }
    break;

  case 108:

    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 109:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_USE, (yyvsp[(1) - (1)].ast)); }
    break;

  case 110:

    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 111:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_USE, (yyvsp[(1) - (1)].ast)); }
    break;

  case 112:

    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 113:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_USE, (yyvsp[(1) - (1)].ast)); }
    break;

  case 114:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); (yyval.ast)->attr = T_CLASS; }
    break;

  case 115:

    { (yyval.ast) = (yyvsp[(2) - (2)].ast); (yyval.ast)->attr = (yyvsp[(1) - (2)].num); }
    break;

  case 116:

    { (yyval.ast) = zend_ast_create(ZEND_AST_USE_ELEM, (yyvsp[(1) - (1)].ast), NULL); }
    break;

  case 117:

    { (yyval.ast) = zend_ast_create(ZEND_AST_USE_ELEM, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 118:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 119:

    { (yyval.ast) = (yyvsp[(2) - (2)].ast); }
    break;

  case 120:

    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 121:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_CONST_DECL, (yyvsp[(1) - (1)].ast)); }
    break;

  case 122:

    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (2)].ast), (yyvsp[(2) - (2)].ast)); }
    break;

  case 123:

    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_STMT_LIST); }
    break;

  case 124:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 125:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 126:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 127:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 128:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 129:

    { (yyval.ast) = NULL; zend_error_noreturn(E_COMPILE_ERROR,
			      "__HALT_COMPILER() can only be used from the outermost scope"); }
    break;

  case 130:

    { (yyval.ast) = (yyvsp[(2) - (3)].ast); }
    break;

  case 131:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 132:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 133:

    { (yyval.ast) = zend_ast_create(ZEND_AST_WHILE, (yyvsp[(3) - (5)].ast), (yyvsp[(5) - (5)].ast)); }
    break;

  case 134:

    { (yyval.ast) = zend_ast_create(ZEND_AST_DO_WHILE, (yyvsp[(2) - (7)].ast), (yyvsp[(5) - (7)].ast)); }
    break;

  case 135:

    { (yyval.ast) = zend_ast_create(ZEND_AST_FOR, (yyvsp[(3) - (9)].ast), (yyvsp[(5) - (9)].ast), (yyvsp[(7) - (9)].ast), (yyvsp[(9) - (9)].ast)); }
    break;

  case 136:

    { (yyval.ast) = zend_ast_create(ZEND_AST_SWITCH, (yyvsp[(3) - (5)].ast), (yyvsp[(5) - (5)].ast)); }
    break;

  case 137:

    { (yyval.ast) = zend_ast_create(ZEND_AST_BREAK, (yyvsp[(2) - (3)].ast)); }
    break;

  case 138:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CONTINUE, (yyvsp[(2) - (3)].ast)); }
    break;

  case 139:

    { (yyval.ast) = zend_ast_create(ZEND_AST_RETURN, (yyvsp[(2) - (3)].ast)); }
    break;

  case 140:

    { (yyval.ast) = (yyvsp[(2) - (3)].ast); }
    break;

  case 141:

    { (yyval.ast) = (yyvsp[(2) - (3)].ast); }
    break;

  case 142:

    { (yyval.ast) = (yyvsp[(2) - (3)].ast); }
    break;

  case 143:

    { (yyval.ast) = zend_ast_create(ZEND_AST_ECHO, (yyvsp[(1) - (1)].ast)); }
    break;

  case 144:

    { (yyval.ast) = (yyvsp[(1) - (2)].ast); }
    break;

  case 145:

    { (yyval.ast) = (yyvsp[(3) - (5)].ast); }
    break;

  case 146:

    { (yyval.ast) = zend_ast_create(ZEND_AST_FOREACH, (yyvsp[(3) - (7)].ast), (yyvsp[(5) - (7)].ast), NULL, (yyvsp[(7) - (7)].ast)); }
    break;

  case 147:

    { (yyval.ast) = zend_ast_create(ZEND_AST_FOREACH, (yyvsp[(3) - (9)].ast), (yyvsp[(7) - (9)].ast), (yyvsp[(5) - (9)].ast), (yyvsp[(9) - (9)].ast)); }
    break;

  case 148:

    { zend_handle_encoding_declaration((yyvsp[(3) - (4)].ast)); }
    break;

  case 149:

    { (yyval.ast) = zend_ast_create(ZEND_AST_DECLARE, (yyvsp[(3) - (6)].ast), (yyvsp[(6) - (6)].ast)); }
    break;

  case 150:

    { (yyval.ast) = NULL; }
    break;

  case 151:

    { (yyval.ast) = zend_ast_create(ZEND_AST_TRY, (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast), (yyvsp[(6) - (6)].ast)); }
    break;

  case 152:

    { (yyval.ast) = zend_ast_create(ZEND_AST_THROW, (yyvsp[(2) - (3)].ast)); }
    break;

  case 153:

    { (yyval.ast) = zend_ast_create(ZEND_AST_GOTO, (yyvsp[(2) - (3)].ast)); }
    break;

  case 154:

    { (yyval.ast) = zend_ast_create(ZEND_AST_LABEL, (yyvsp[(1) - (2)].ast)); }
    break;

  case 155:

    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_CATCH_LIST); }
    break;

  case 156:

    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (9)].ast), zend_ast_create(ZEND_AST_CATCH, (yyvsp[(4) - (9)].ast), (yyvsp[(5) - (9)].ast), (yyvsp[(8) - (9)].ast))); }
    break;

  case 157:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_NAME_LIST, (yyvsp[(1) - (1)].ast)); }
    break;

  case 158:

    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 159:

    { (yyval.ast) = NULL; }
    break;

  case 160:

    { (yyval.ast) = (yyvsp[(3) - (4)].ast); }
    break;

  case 161:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_STMT_LIST, (yyvsp[(1) - (1)].ast)); }
    break;

  case 162:

    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 163:

    { (yyval.ast) = zend_ast_create(ZEND_AST_UNSET, (yyvsp[(1) - (1)].ast)); }
    break;

  case 164:

    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_FUNC_DECL, (yyvsp[(2) - (13)].num) | (yyvsp[(13) - (13)].num), (yyvsp[(1) - (13)].num), (yyvsp[(4) - (13)].str),
		      zend_ast_get_str((yyvsp[(3) - (13)].ast)), (yyvsp[(6) - (13)].ast), NULL, (yyvsp[(11) - (13)].ast), (yyvsp[(8) - (13)].ast)); CG(extra_fn_flags) = (yyvsp[(9) - (13)].num); }
    break;

  case 165:

    { (yyval.num) = 0; }
    break;

  case 166:

    { (yyval.num) = ZEND_PARAM_REF; }
    break;

  case 167:

    { (yyval.num) = 0; }
    break;

  case 168:

    { (yyval.num) = ZEND_PARAM_VARIADIC; }
    break;

  case 169:

    { (yyval.num) = CG(zend_lineno); }
    break;

  case 170:

    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, (yyvsp[(1) - (10)].num), (yyvsp[(3) - (10)].num), (yyvsp[(7) - (10)].str), zend_ast_get_str((yyvsp[(4) - (10)].ast)), (yyvsp[(5) - (10)].ast), (yyvsp[(6) - (10)].ast), (yyvsp[(9) - (10)].ast), NULL); }
    break;

  case 171:

    { (yyval.num) = CG(zend_lineno); }
    break;

  case 172:

    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, 0, (yyvsp[(2) - (9)].num), (yyvsp[(6) - (9)].str), zend_ast_get_str((yyvsp[(3) - (9)].ast)), (yyvsp[(4) - (9)].ast), (yyvsp[(5) - (9)].ast), (yyvsp[(8) - (9)].ast), NULL); }
    break;

  case 173:

    { (yyval.num) = (yyvsp[(1) - (1)].num); }
    break;

  case 174:

    { (yyval.num) = zend_add_class_modifier((yyvsp[(1) - (2)].num), (yyvsp[(2) - (2)].num)); }
    break;

  case 175:

    { (yyval.num) = ZEND_ACC_EXPLICIT_ABSTRACT_CLASS; }
    break;

  case 176:

    { (yyval.num) = ZEND_ACC_FINAL; }
    break;

  case 177:

    { (yyval.num) = CG(zend_lineno); }
    break;

  case 178:

    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, ZEND_ACC_TRAIT, (yyvsp[(2) - (7)].num), (yyvsp[(4) - (7)].str), zend_ast_get_str((yyvsp[(3) - (7)].ast)), NULL, NULL, (yyvsp[(6) - (7)].ast), NULL); }
    break;

  case 179:

    { (yyval.num) = CG(zend_lineno); }
    break;

  case 180:

    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, ZEND_ACC_INTERFACE, (yyvsp[(2) - (8)].num), (yyvsp[(5) - (8)].str), zend_ast_get_str((yyvsp[(3) - (8)].ast)), NULL, (yyvsp[(4) - (8)].ast), (yyvsp[(7) - (8)].ast), NULL); }
    break;

  case 181:

    { (yyval.ast) = NULL; }
    break;

  case 182:

    { (yyval.ast) = (yyvsp[(2) - (2)].ast); }
    break;

  case 183:

    { (yyval.ast) = NULL; }
    break;

  case 184:

    { (yyval.ast) = (yyvsp[(2) - (2)].ast); }
    break;

  case 185:

    { (yyval.ast) = NULL; }
    break;

  case 186:

    { (yyval.ast) = (yyvsp[(2) - (2)].ast); }
    break;

  case 187:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 188:

    { (yyval.ast) = zend_ast_create(ZEND_AST_REF, (yyvsp[(2) - (2)].ast)); }
    break;

  case 189:

    { (yyvsp[(3) - (4)].ast)->attr = 1; (yyval.ast) = (yyvsp[(3) - (4)].ast); }
    break;

  case 190:

    { (yyval.ast) = (yyvsp[(2) - (3)].ast); }
    break;

  case 191:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 192:

    { (yyval.ast) = (yyvsp[(2) - (4)].ast); }
    break;

  case 193:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 194:

    { (yyval.ast) = (yyvsp[(2) - (4)].ast); }
    break;

  case 195:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 196:

    { (yyval.ast) = (yyvsp[(2) - (4)].ast); }
    break;

  case 197:

    { (yyval.ast) = (yyvsp[(2) - (3)].ast); }
    break;

  case 198:

    { (yyval.ast) = (yyvsp[(3) - (4)].ast); }
    break;

  case 199:

    { (yyval.ast) = (yyvsp[(2) - (4)].ast); }
    break;

  case 200:

    { (yyval.ast) = (yyvsp[(3) - (5)].ast); }
    break;

  case 201:

    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_SWITCH_LIST); }
    break;

  case 202:

    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (5)].ast), zend_ast_create(ZEND_AST_SWITCH_CASE, (yyvsp[(3) - (5)].ast), (yyvsp[(5) - (5)].ast))); }
    break;

  case 203:

    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (4)].ast), zend_ast_create(ZEND_AST_SWITCH_CASE, NULL, (yyvsp[(4) - (4)].ast))); }
    break;

  case 206:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 207:

    { (yyval.ast) = (yyvsp[(2) - (4)].ast); }
    break;

  case 208:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_IF,
			      zend_ast_create(ZEND_AST_IF_ELEM, (yyvsp[(3) - (5)].ast), (yyvsp[(5) - (5)].ast))); }
    break;

  case 209:

    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (6)].ast),
			      zend_ast_create(ZEND_AST_IF_ELEM, (yyvsp[(4) - (6)].ast), (yyvsp[(6) - (6)].ast))); }
    break;

  case 210:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 211:

    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (3)].ast), zend_ast_create(ZEND_AST_IF_ELEM, NULL, (yyvsp[(3) - (3)].ast))); }
    break;

  case 212:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_IF,
			      zend_ast_create(ZEND_AST_IF_ELEM, (yyvsp[(3) - (6)].ast), (yyvsp[(6) - (6)].ast))); }
    break;

  case 213:

    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (7)].ast),
			      zend_ast_create(ZEND_AST_IF_ELEM, (yyvsp[(4) - (7)].ast), (yyvsp[(7) - (7)].ast))); }
    break;

  case 214:

    { (yyval.ast) = (yyvsp[(1) - (3)].ast); }
    break;

  case 215:

    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (6)].ast),
			      zend_ast_create(ZEND_AST_IF_ELEM, NULL, (yyvsp[(4) - (6)].ast))); }
    break;

  case 216:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 217:

    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_PARAM_LIST); }
    break;

  case 218:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_PARAM_LIST, (yyvsp[(1) - (1)].ast)); }
    break;

  case 219:

    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 220:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_PARAM, (yyvsp[(2) - (4)].num) | (yyvsp[(3) - (4)].num), (yyvsp[(1) - (4)].ast), (yyvsp[(4) - (4)].ast), NULL); }
    break;

  case 221:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_PARAM, (yyvsp[(2) - (6)].num) | (yyvsp[(3) - (6)].num), (yyvsp[(1) - (6)].ast), (yyvsp[(4) - (6)].ast), (yyvsp[(6) - (6)].ast)); }
    break;

  case 222:

    { (yyval.ast) = NULL; }
    break;

  case 223:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 224:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 225:

    { (yyval.ast) = (yyvsp[(2) - (2)].ast); (yyval.ast)->attr |= ZEND_TYPE_NULLABLE; }
    break;

  case 226:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TYPE, IS_ARRAY); }
    break;

  case 227:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TYPE, IS_CALLABLE); }
    break;

  case 228:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 229:

    { (yyval.ast) = NULL; }
    break;

  case 230:

    { (yyval.ast) = (yyvsp[(2) - (2)].ast); }
    break;

  case 231:

    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_ARG_LIST); }
    break;

  case 232:

    { (yyval.ast) = (yyvsp[(2) - (3)].ast); }
    break;

  case 233:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_ARG_LIST, (yyvsp[(1) - (1)].ast)); }
    break;

  case 234:

    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 235:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 236:

    { (yyval.ast) = zend_ast_create(ZEND_AST_UNPACK, (yyvsp[(2) - (2)].ast)); }
    break;

  case 237:

    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 238:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_STMT_LIST, (yyvsp[(1) - (1)].ast)); }
    break;

  case 239:

    { (yyval.ast) = zend_ast_create(ZEND_AST_GLOBAL, zend_ast_create(ZEND_AST_VAR, (yyvsp[(1) - (1)].ast))); }
    break;

  case 240:

    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 241:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_STMT_LIST, (yyvsp[(1) - (1)].ast)); }
    break;

  case 242:

    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC, (yyvsp[(1) - (1)].ast), NULL); }
    break;

  case 243:

    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 244:

    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (2)].ast), (yyvsp[(2) - (2)].ast)); }
    break;

  case 245:

    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_STMT_LIST); }
    break;

  case 246:

    { (yyval.ast) = (yyvsp[(2) - (3)].ast); (yyval.ast)->attr = (yyvsp[(1) - (3)].num); }
    break;

  case 247:

    { (yyval.ast) = (yyvsp[(3) - (4)].ast); (yyval.ast)->attr = (yyvsp[(1) - (4)].num); }
    break;

  case 248:

    { (yyval.ast) = zend_ast_create(ZEND_AST_USE_TRAIT, (yyvsp[(2) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 249:

    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_METHOD, (yyvsp[(3) - (12)].num) | (yyvsp[(1) - (12)].num) | (yyvsp[(12) - (12)].num), (yyvsp[(2) - (12)].num), (yyvsp[(5) - (12)].str),
				  zend_ast_get_str((yyvsp[(4) - (12)].ast)), (yyvsp[(7) - (12)].ast), NULL, (yyvsp[(11) - (12)].ast), (yyvsp[(9) - (12)].ast)); CG(extra_fn_flags) = (yyvsp[(10) - (12)].num); }
    break;

  case 250:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_NAME_LIST, (yyvsp[(1) - (1)].ast)); }
    break;

  case 251:

    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 252:

    { (yyval.ast) = NULL; }
    break;

  case 253:

    { (yyval.ast) = NULL; }
    break;

  case 254:

    { (yyval.ast) = (yyvsp[(2) - (3)].ast); }
    break;

  case 255:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_TRAIT_ADAPTATIONS, (yyvsp[(1) - (1)].ast)); }
    break;

  case 256:

    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (2)].ast), (yyvsp[(2) - (2)].ast)); }
    break;

  case 257:

    { (yyval.ast) = (yyvsp[(1) - (2)].ast); }
    break;

  case 258:

    { (yyval.ast) = (yyvsp[(1) - (2)].ast); }
    break;

  case 259:

    { (yyval.ast) = zend_ast_create(ZEND_AST_TRAIT_PRECEDENCE, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 260:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TRAIT_ALIAS, 0, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 261:

    { zval zv; zend_lex_tstring(&zv); (yyval.ast) = zend_ast_create_ex(ZEND_AST_TRAIT_ALIAS, 0, (yyvsp[(1) - (3)].ast), zend_ast_create_zval(&zv)); }
    break;

  case 262:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TRAIT_ALIAS, (yyvsp[(3) - (4)].num), (yyvsp[(1) - (4)].ast), (yyvsp[(4) - (4)].ast)); }
    break;

  case 263:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TRAIT_ALIAS, (yyvsp[(3) - (3)].num), (yyvsp[(1) - (3)].ast), NULL); }
    break;

  case 264:

    { (yyval.ast) = zend_ast_create(ZEND_AST_METHOD_REFERENCE, NULL, (yyvsp[(1) - (1)].ast)); }
    break;

  case 265:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 266:

    { (yyval.ast) = zend_ast_create(ZEND_AST_METHOD_REFERENCE, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 267:

    { (yyval.ast) = NULL; }
    break;

  case 268:

    { (yyval.ast) = (yyvsp[(2) - (3)].ast); }
    break;

  case 269:

    { (yyval.num) = (yyvsp[(1) - (1)].num); }
    break;

  case 270:

    { (yyval.num) = ZEND_ACC_PUBLIC; }
    break;

  case 271:

    { (yyval.num) = ZEND_ACC_PUBLIC; }
    break;

  case 272:

    { (yyval.num) = (yyvsp[(1) - (1)].num); if (!((yyval.num) & ZEND_ACC_PPP_MASK)) { (yyval.num) |= ZEND_ACC_PUBLIC; } }
    break;

  case 273:

    { (yyval.num) = (yyvsp[(1) - (1)].num); }
    break;

  case 274:

    { (yyval.num) = zend_add_member_modifier((yyvsp[(1) - (2)].num), (yyvsp[(2) - (2)].num)); }
    break;

  case 275:

    { (yyval.num) = ZEND_ACC_PUBLIC; }
    break;

  case 276:

    { (yyval.num) = ZEND_ACC_PROTECTED; }
    break;

  case 277:

    { (yyval.num) = ZEND_ACC_PRIVATE; }
    break;

  case 278:

    { (yyval.num) = ZEND_ACC_STATIC; }
    break;

  case 279:

    { (yyval.num) = ZEND_ACC_ABSTRACT; }
    break;

  case 280:

    { (yyval.num) = ZEND_ACC_FINAL; }
    break;

  case 281:

    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 282:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_PROP_DECL, (yyvsp[(1) - (1)].ast)); }
    break;

  case 283:

    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP_ELEM, (yyvsp[(1) - (2)].ast), NULL, ((yyvsp[(2) - (2)].str) ? zend_ast_create_zval_from_str((yyvsp[(2) - (2)].str)) : NULL)); }
    break;

  case 284:

    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP_ELEM, (yyvsp[(1) - (4)].ast), (yyvsp[(3) - (4)].ast), ((yyvsp[(4) - (4)].str) ? zend_ast_create_zval_from_str((yyvsp[(4) - (4)].str)) : NULL)); }
    break;

  case 285:

    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 286:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_CLASS_CONST_DECL, (yyvsp[(1) - (1)].ast)); }
    break;

  case 287:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CONST_ELEM, (yyvsp[(1) - (4)].ast), (yyvsp[(3) - (4)].ast), ((yyvsp[(4) - (4)].str) ? zend_ast_create_zval_from_str((yyvsp[(4) - (4)].str)) : NULL)); }
    break;

  case 288:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CONST_ELEM, (yyvsp[(1) - (4)].ast), (yyvsp[(3) - (4)].ast), ((yyvsp[(4) - (4)].str) ? zend_ast_create_zval_from_str((yyvsp[(4) - (4)].str)) : NULL)); }
    break;

  case 289:

    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 290:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_STMT_LIST, (yyvsp[(1) - (1)].ast)); }
    break;

  case 291:

    { (yyval.ast) = zend_ast_create(ZEND_AST_ECHO, (yyvsp[(1) - (1)].ast)); }
    break;

  case 292:

    { (yyval.ast) = NULL; }
    break;

  case 293:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 294:

    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 295:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_EXPR_LIST, (yyvsp[(1) - (1)].ast)); }
    break;

  case 296:

    { (yyval.num) = CG(zend_lineno); }
    break;

  case 297:

    {
			zend_ast *decl = zend_ast_create_decl(
				ZEND_AST_CLASS, ZEND_ACC_ANON_CLASS, (yyvsp[(2) - (9)].num), (yyvsp[(6) - (9)].str), NULL,
				(yyvsp[(4) - (9)].ast), (yyvsp[(5) - (9)].ast), (yyvsp[(8) - (9)].ast), NULL);
			(yyval.ast) = zend_ast_create(ZEND_AST_NEW, decl, (yyvsp[(3) - (9)].ast));
		}
    break;

  case 298:

    { (yyval.ast) = zend_ast_create(ZEND_AST_NEW, (yyvsp[(2) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 299:

    { (yyval.ast) = (yyvsp[(2) - (2)].ast); }
    break;

  case 300:

    { (yyvsp[(3) - (6)].ast)->attr = 1; (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN, (yyvsp[(3) - (6)].ast), (yyvsp[(6) - (6)].ast)); }
    break;

  case 301:

    { (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN, (yyvsp[(2) - (5)].ast), (yyvsp[(5) - (5)].ast)); }
    break;

  case 302:

    { (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 303:

    { (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN_REF, (yyvsp[(1) - (4)].ast), (yyvsp[(4) - (4)].ast)); }
    break;

  case 304:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CLONE, (yyvsp[(2) - (2)].ast)); }
    break;

  case 305:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_ADD, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 306:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_SUB, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 307:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_MUL, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 308:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_POW, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 309:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_DIV, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 310:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_CONCAT, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 311:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_MOD, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 312:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_BW_AND, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 313:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_BW_OR, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 314:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_BW_XOR, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 315:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_SL, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 316:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_SR, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 317:

    { (yyval.ast) = zend_ast_create(ZEND_AST_POST_INC, (yyvsp[(1) - (2)].ast)); }
    break;

  case 318:

    { (yyval.ast) = zend_ast_create(ZEND_AST_PRE_INC, (yyvsp[(2) - (2)].ast)); }
    break;

  case 319:

    { (yyval.ast) = zend_ast_create(ZEND_AST_POST_DEC, (yyvsp[(1) - (2)].ast)); }
    break;

  case 320:

    { (yyval.ast) = zend_ast_create(ZEND_AST_PRE_DEC, (yyvsp[(2) - (2)].ast)); }
    break;

  case 321:

    { (yyval.ast) = zend_ast_create(ZEND_AST_OR, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 322:

    { (yyval.ast) = zend_ast_create(ZEND_AST_AND, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 323:

    { (yyval.ast) = zend_ast_create(ZEND_AST_OR, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 324:

    { (yyval.ast) = zend_ast_create(ZEND_AST_AND, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 325:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_BOOL_XOR, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 326:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_BW_OR, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 327:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_BW_AND, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 328:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_BW_XOR, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 329:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_CONCAT, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 330:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_ADD, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 331:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_SUB, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 332:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_MUL, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 333:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_POW, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 334:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_DIV, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 335:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_MOD, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 336:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_SL, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 337:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_SR, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 338:

    { (yyval.ast) = zend_ast_create(ZEND_AST_UNARY_PLUS, (yyvsp[(2) - (2)].ast)); }
    break;

  case 339:

    { (yyval.ast) = zend_ast_create(ZEND_AST_UNARY_MINUS, (yyvsp[(2) - (2)].ast)); }
    break;

  case 340:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_UNARY_OP, ZEND_BOOL_NOT, (yyvsp[(2) - (2)].ast)); }
    break;

  case 341:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_UNARY_OP, ZEND_BW_NOT, (yyvsp[(2) - (2)].ast)); }
    break;

  case 342:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_IDENTICAL, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 343:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_NOT_IDENTICAL, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 344:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_EQUAL, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 345:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_NOT_EQUAL, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 346:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_SMALLER, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 347:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_SMALLER_OR_EQUAL, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 348:

    { (yyval.ast) = zend_ast_create(ZEND_AST_GREATER, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 349:

    { (yyval.ast) = zend_ast_create(ZEND_AST_GREATER_EQUAL, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 350:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_SPACESHIP, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 351:

    { (yyval.ast) = zend_ast_create(ZEND_AST_INSTANCEOF, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 352:

    { (yyval.ast) = (yyvsp[(2) - (3)].ast); }
    break;

  case 353:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 354:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CONDITIONAL, (yyvsp[(1) - (5)].ast), (yyvsp[(3) - (5)].ast), (yyvsp[(5) - (5)].ast)); }
    break;

  case 355:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CONDITIONAL, (yyvsp[(1) - (4)].ast), NULL, (yyvsp[(4) - (4)].ast)); }
    break;

  case 356:

    { (yyval.ast) = zend_ast_create(ZEND_AST_COALESCE, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 357:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 358:

    { (yyval.ast) = zend_ast_create_cast(IS_LONG, (yyvsp[(2) - (2)].ast)); }
    break;

  case 359:

    { (yyval.ast) = zend_ast_create_cast(IS_DOUBLE, (yyvsp[(2) - (2)].ast)); }
    break;

  case 360:

    { (yyval.ast) = zend_ast_create_cast(IS_STRING, (yyvsp[(2) - (2)].ast)); }
    break;

  case 361:

    { (yyval.ast) = zend_ast_create_cast(IS_ARRAY, (yyvsp[(2) - (2)].ast)); }
    break;

  case 362:

    { (yyval.ast) = zend_ast_create_cast(IS_OBJECT, (yyvsp[(2) - (2)].ast)); }
    break;

  case 363:

    { (yyval.ast) = zend_ast_create_cast(_IS_BOOL, (yyvsp[(2) - (2)].ast)); }
    break;

  case 364:

    { (yyval.ast) = zend_ast_create_cast(IS_NULL, (yyvsp[(2) - (2)].ast)); }
    break;

  case 365:

    { (yyval.ast) = zend_ast_create(ZEND_AST_EXIT, (yyvsp[(2) - (2)].ast)); }
    break;

  case 366:

    { (yyval.ast) = zend_ast_create(ZEND_AST_SILENCE, (yyvsp[(2) - (2)].ast)); }
    break;

  case 367:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 368:

    { (yyval.ast) = zend_ast_create(ZEND_AST_SHELL_EXEC, (yyvsp[(2) - (3)].ast)); }
    break;

  case 369:

    { (yyval.ast) = zend_ast_create(ZEND_AST_PRINT, (yyvsp[(2) - (2)].ast)); }
    break;

  case 370:

    { (yyval.ast) = zend_ast_create(ZEND_AST_YIELD, NULL, NULL); CG(extra_fn_flags) |= ZEND_ACC_GENERATOR; }
    break;

  case 371:

    { (yyval.ast) = zend_ast_create(ZEND_AST_YIELD, (yyvsp[(2) - (2)].ast), NULL); CG(extra_fn_flags) |= ZEND_ACC_GENERATOR; }
    break;

  case 372:

    { (yyval.ast) = zend_ast_create(ZEND_AST_YIELD, (yyvsp[(4) - (4)].ast), (yyvsp[(2) - (4)].ast)); CG(extra_fn_flags) |= ZEND_ACC_GENERATOR; }
    break;

  case 373:

    { (yyval.ast) = zend_ast_create(ZEND_AST_YIELD_FROM, (yyvsp[(2) - (2)].ast)); CG(extra_fn_flags) |= ZEND_ACC_GENERATOR; }
    break;

  case 374:

    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLOSURE, (yyvsp[(2) - (13)].num) | (yyvsp[(13) - (13)].num), (yyvsp[(1) - (13)].num), (yyvsp[(3) - (13)].str),
				  zend_string_init("{closure}", sizeof("{closure}") - 1, 0),
			      (yyvsp[(5) - (13)].ast), (yyvsp[(7) - (13)].ast), (yyvsp[(11) - (13)].ast), (yyvsp[(8) - (13)].ast)); CG(extra_fn_flags) = (yyvsp[(9) - (13)].num); }
    break;

  case 375:

    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLOSURE, (yyvsp[(3) - (14)].num) | (yyvsp[(14) - (14)].num) | ZEND_ACC_STATIC, (yyvsp[(2) - (14)].num), (yyvsp[(4) - (14)].str),
			      zend_string_init("{closure}", sizeof("{closure}") - 1, 0),
			      (yyvsp[(6) - (14)].ast), (yyvsp[(8) - (14)].ast), (yyvsp[(12) - (14)].ast), (yyvsp[(9) - (14)].ast)); CG(extra_fn_flags) = (yyvsp[(10) - (14)].num); }
    break;

  case 376:

    { (yyval.num) = CG(zend_lineno); }
    break;

  case 377:

    { (yyval.str) = CG(doc_comment); CG(doc_comment) = NULL; }
    break;

  case 378:

    { (yyval.num) = CG(extra_fn_flags); CG(extra_fn_flags) = 0; }
    break;

  case 379:

    { (yyval.num) = 0; }
    break;

  case 380:

    { (yyval.num) = ZEND_ACC_RETURN_REFERENCE; }
    break;

  case 381:

    { (yyval.ast) = NULL; }
    break;

  case 382:

    { (yyval.ast) = (yyvsp[(3) - (4)].ast); }
    break;

  case 383:

    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 384:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_CLOSURE_USES, (yyvsp[(1) - (1)].ast)); }
    break;

  case 385:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 386:

    { (yyval.ast) = (yyvsp[(2) - (2)].ast); (yyval.ast)->attr = 1; }
    break;

  case 387:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CALL, (yyvsp[(1) - (2)].ast), (yyvsp[(2) - (2)].ast)); }
    break;

  case 388:

    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_CALL, (yyvsp[(1) - (4)].ast), (yyvsp[(3) - (4)].ast), (yyvsp[(4) - (4)].ast)); }
    break;

  case 389:

    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_CALL, (yyvsp[(1) - (4)].ast), (yyvsp[(3) - (4)].ast), (yyvsp[(4) - (4)].ast)); }
    break;

  case 390:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CALL, (yyvsp[(1) - (2)].ast), (yyvsp[(2) - (2)].ast)); }
    break;

  case 391:

    { zval zv; ZVAL_INTERNED_STR(&zv, CG(known_strings)[ZEND_STR_STATIC]);
			  (yyval.ast) = zend_ast_create_zval_ex(&zv, ZEND_NAME_NOT_FQ); }
    break;

  case 392:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 393:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 394:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 395:

    { (yyval.ast) = NULL; }
    break;

  case 396:

    { (yyval.ast) = (yyvsp[(2) - (3)].ast); }
    break;

  case 397:

    { (yyval.ast) = zend_ast_create_zval_from_str(ZSTR_EMPTY_ALLOC()); }
    break;

  case 398:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 399:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 400:

    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_ARG_LIST); }
    break;

  case 401:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 402:

    { (yyval.ast) = (yyvsp[(3) - (4)].ast); }
    break;

  case 403:

    { (yyval.ast) = (yyvsp[(2) - (3)].ast); }
    break;

  case 404:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 405:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 406:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 407:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_LINE); }
    break;

  case 408:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_FILE); }
    break;

  case 409:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_DIR); }
    break;

  case 410:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_TRAIT_C); }
    break;

  case 411:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_METHOD_C); }
    break;

  case 412:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_FUNC_C); }
    break;

  case 413:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_NS_C); }
    break;

  case 414:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_CLASS_C); }
    break;

  case 415:

    { (yyval.ast) = (yyvsp[(2) - (3)].ast); }
    break;

  case 416:

    { (yyval.ast) = zend_ast_create_zval_from_str(ZSTR_EMPTY_ALLOC()); }
    break;

  case 417:

    { (yyval.ast) = (yyvsp[(2) - (3)].ast); }
    break;

  case 418:

    { (yyval.ast) = (yyvsp[(2) - (3)].ast); }
    break;

  case 419:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 420:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 421:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CONST, (yyvsp[(1) - (1)].ast)); }
    break;

  case 422:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CLASS_CONST, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 423:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CLASS_CONST, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 424:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 425:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 426:

    { (yyval.ast) = NULL; }
    break;

  case 427:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 428:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 429:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 430:

    { (yyval.ast) = (yyvsp[(2) - (3)].ast); }
    break;

  case 431:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 432:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 433:

    { (yyval.ast) = (yyvsp[(2) - (3)].ast); }
    break;

  case 434:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 435:

    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[(1) - (1)].ast)); }
    break;

  case 436:

    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM, (yyvsp[(1) - (4)].ast), (yyvsp[(3) - (4)].ast)); }
    break;

  case 437:

    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM, (yyvsp[(1) - (4)].ast), (yyvsp[(3) - (4)].ast)); }
    break;

  case 438:

    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM, (yyvsp[(1) - (4)].ast), (yyvsp[(3) - (4)].ast)); }
    break;

  case 439:

    { (yyval.ast) = zend_ast_create(ZEND_AST_METHOD_CALL, (yyvsp[(1) - (4)].ast), (yyvsp[(3) - (4)].ast), (yyvsp[(4) - (4)].ast)); }
    break;

  case 440:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 441:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 442:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 443:

    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 444:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 445:

    { (yyval.ast) = (yyvsp[(3) - (4)].ast); }
    break;

  case 446:

    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[(2) - (2)].ast)); }
    break;

  case 447:

    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_PROP, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 448:

    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_PROP, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 449:

    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[(1) - (1)].ast)); }
    break;

  case 450:

    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM, (yyvsp[(1) - (4)].ast), (yyvsp[(3) - (4)].ast)); }
    break;

  case 451:

    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM, (yyvsp[(1) - (4)].ast), (yyvsp[(3) - (4)].ast)); }
    break;

  case 452:

    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 453:

    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_PROP, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 454:

    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_PROP, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 455:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 456:

    { (yyval.ast) = (yyvsp[(2) - (3)].ast); }
    break;

  case 457:

    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[(1) - (1)].ast)); }
    break;

  case 458:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 459:

    { (yyval.ast) = (yyvsp[(2) - (3)].ast); }
    break;

  case 460:

    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[(1) - (1)].ast)); }
    break;

  case 461:

    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_ARRAY); }
    break;

  case 462:

    { /* allow single trailing comma */ zend_ast_list *list = zend_ast_get_list((yyval.ast) = (yyvsp[(1) - (1)].ast)); if (list->child[list->children - 1] == NULL) { list->children--; } }
    break;

  case 463:

    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 464:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_ARRAY, (yyvsp[(1) - (1)].ast)); }
    break;

  case 465:

    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (2)].ast), NULL); }
    break;

  case 466:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_ARRAY, NULL); }
    break;

  case 467:

    { (yyval.ast) = zend_ast_create_list(2, ZEND_AST_ARRAY, NULL, (yyvsp[(2) - (2)].ast)); }
    break;

  case 468:

    { (yyval.ast) = zend_ast_create(ZEND_AST_ARRAY_ELEM, (yyvsp[(3) - (3)].ast), (yyvsp[(1) - (3)].ast)); }
    break;

  case 469:

    { (yyval.ast) = zend_ast_create(ZEND_AST_ARRAY_ELEM, (yyvsp[(1) - (1)].ast), NULL); }
    break;

  case 470:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_ARRAY_ELEM, 1, (yyvsp[(4) - (4)].ast), (yyvsp[(1) - (4)].ast)); }
    break;

  case 471:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_ARRAY_ELEM, 1, (yyvsp[(2) - (2)].ast), NULL); }
    break;

  case 472:

    { (yyvsp[(5) - (6)].ast)->attr = 1; (yyval.ast) = zend_ast_create(ZEND_AST_ARRAY_ELEM, (yyvsp[(5) - (6)].ast), (yyvsp[(1) - (6)].ast)); }
    break;

  case 473:

    { (yyvsp[(3) - (4)].ast)->attr = 1; (yyval.ast) = zend_ast_create(ZEND_AST_ARRAY_ELEM, (yyvsp[(3) - (4)].ast), NULL); }
    break;

  case 474:

    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (2)].ast), (yyvsp[(2) - (2)].ast)); }
    break;

  case 475:

    { (yyval.ast) = zend_ast_list_add((yyvsp[(1) - (2)].ast), (yyvsp[(2) - (2)].ast)); }
    break;

  case 476:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_ENCAPS_LIST, (yyvsp[(1) - (1)].ast)); }
    break;

  case 477:

    { (yyval.ast) = zend_ast_create_list(2, ZEND_AST_ENCAPS_LIST, (yyvsp[(1) - (2)].ast), (yyvsp[(2) - (2)].ast)); }
    break;

  case 478:

    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[(1) - (1)].ast)); }
    break;

  case 479:

    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM,
			      zend_ast_create(ZEND_AST_VAR, (yyvsp[(1) - (4)].ast)), (yyvsp[(3) - (4)].ast)); }
    break;

  case 480:

    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP,
			      zend_ast_create(ZEND_AST_VAR, (yyvsp[(1) - (3)].ast)), (yyvsp[(3) - (3)].ast)); }
    break;

  case 481:

    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[(2) - (3)].ast)); }
    break;

  case 482:

    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[(2) - (3)].ast)); }
    break;

  case 483:

    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM,
			      zend_ast_create(ZEND_AST_VAR, (yyvsp[(2) - (6)].ast)), (yyvsp[(4) - (6)].ast)); }
    break;

  case 484:

    { (yyval.ast) = (yyvsp[(2) - (3)].ast); }
    break;

  case 485:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 486:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 487:

    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[(1) - (1)].ast)); }
    break;

  case 488:

    { (yyval.ast) = (yyvsp[(3) - (4)].ast); }
    break;

  case 489:

    { (yyval.ast) = zend_ast_create(ZEND_AST_EMPTY, (yyvsp[(3) - (4)].ast)); }
    break;

  case 490:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_INCLUDE, (yyvsp[(2) - (2)].ast)); }
    break;

  case 491:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_INCLUDE_ONCE, (yyvsp[(2) - (2)].ast)); }
    break;

  case 492:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_EVAL, (yyvsp[(3) - (4)].ast)); }
    break;

  case 493:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_REQUIRE, (yyvsp[(2) - (2)].ast)); }
    break;

  case 494:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_REQUIRE_ONCE, (yyvsp[(2) - (2)].ast)); }
    break;

  case 495:

    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 496:

    { (yyval.ast) = zend_ast_create(ZEND_AST_AND, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 497:

    { (yyval.ast) = zend_ast_create(ZEND_AST_ISSET, (yyvsp[(1) - (1)].ast)); }
    break;



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
	/* CG(parse_error) states:
	 * 0 => yyres = NULL, yystr is the unexpected token
	 * 1 => yyres = NULL, yystr is one of the expected tokens
	 * 2 => yyres != NULL, yystr is the unexpected token
	 * 3 => yyres != NULL, yystr is one of the expected tokens
	 */
	if (yyres && CG(parse_error) < 2) {
		CG(parse_error) = 2;
	}

	if (CG(parse_error) % 2 == 0) {
		/* The unexpected token */
		char buffer[120];
		const unsigned char *end, *str, *tok1 = NULL, *tok2 = NULL;
		unsigned int len = 0, toklen = 0, yystr_len;

		CG(parse_error)++;

		if (LANG_SCNG(yy_text)[0] == 0 &&
			LANG_SCNG(yy_leng) == 1 &&
			memcmp(yystr, "\"end of file\"", sizeof("\"end of file\"") - 1) == 0) {
			if (yyres) {
				yystpcpy(yyres, "end of file");
			}
			return sizeof("end of file")-1;
		}

		str = LANG_SCNG(yy_text);
		end = memchr(str, '\n', LANG_SCNG(yy_leng));
		yystr_len = (unsigned int)yystrlen(yystr);

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
		if (yyres) {
			if (toklen) {
				snprintf(buffer, sizeof(buffer), "'%.*s' %.*s", len, str, toklen, tok1);
			} else {
				snprintf(buffer, sizeof(buffer), "'%.*s'", len, str);
			}
			yystpcpy(yyres, buffer);
		}
		return len + (toklen ? toklen + 1 : 0) + 2;
	}

	/* One of the expected tokens */
	if (!yyres) {
		return yystrlen(yystr) - (*yystr == '"' ? 2 : 0);
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
