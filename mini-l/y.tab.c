/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#line 1 "mini_l.y" /* yacc.c:339  */

	#include <stdio.h>
	#include <stdlib.h>
  #include "symbol_table.h"
  #include "codegen.h"
	void yyerror(const char *message);
  extern int yylineno;
  extern int yycolumno;
  FILE* yyin;
  FILE* yyout;
  int verbose = 0;
  int sout = 0;
  int errcount = 0;
  char program[2048];

#line 82 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NUMBER = 258,
    IDENT = 259,
    SEMICOLON = 260,
    BEGIN_PROGRAM = 261,
    END_PROGRAM = 262,
    ASSIGN = 263,
    L_PAREN = 264,
    R_PAREN = 265,
    COLON = 266,
    INTEGER = 267,
    PROGRAM = 268,
    L_BRACKET = 269,
    R_BRACKET = 270,
    ARRAY = 271,
    OF = 272,
    IF = 273,
    THEN = 274,
    ENDIF = 275,
    ELSE = 276,
    ELSEIF = 277,
    WHILE = 278,
    DO = 279,
    BEGINLOOP = 280,
    BREAK = 281,
    CONTINUE = 282,
    ENDLOOP = 283,
    EXIT = 284,
    READ = 285,
    WRITE = 286,
    COMMA = 287,
    QUESTION = 288,
    TRUE = 289,
    FALSE = 290,
    AND = 291,
    OR = 292,
    NOT = 293,
    EQ = 294,
    NEQ = 295,
    LT = 296,
    GT = 297,
    LTE = 298,
    GTE = 299,
    ADD = 300,
    SUB = 301,
    MULT = 302,
    DIV = 303,
    MOD = 304
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 17 "mini_l.y" /* yacc.c:355  */

	int intval;
  char strval[64];
  struct variable {
    char strval[16];
    char code[512];
  } variable;
  struct expr {
    char place[8];
    char code[512];
  } expr;
  struct stmt {
    char begin[16];
    char code[2048];
    char after[256];
    char continue_to[256]; // inherit test address of nearest enclosing loop
    char break_to[256]; // inherit end of nearest enclosing loop
  } stmt; 
  struct strlist {
    char list[64][64];
    int length;
    char code[64];
  } strlist;


#line 198 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 215 "y.tab.c" /* yacc.c:358  */

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   161

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  59
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  123

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    71,    71,    77,    92,   104,   114,   126,   145,   171,
     178,   193,   212,   234,   257,   267,   281,   290,   311,   329,
     343,   357,   399,   440,   462,   489,   528,   604,   623,   645,
     666,   674,   688,   696,   711,   724,   732,   740,   750,   762,
     772,   779,   786,   793,   800,   807,   816,   824,   837,   850,
     864,   869,   882,   898,   909,   920,   933,   944,   968,   978
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "IDENT", "SEMICOLON",
  "BEGIN_PROGRAM", "END_PROGRAM", "ASSIGN", "L_PAREN", "R_PAREN", "COLON",
  "INTEGER", "PROGRAM", "L_BRACKET", "R_BRACKET", "ARRAY", "OF", "IF",
  "THEN", "ENDIF", "ELSE", "ELSEIF", "WHILE", "DO", "BEGINLOOP", "BREAK",
  "CONTINUE", "ENDLOOP", "EXIT", "READ", "WRITE", "COMMA", "QUESTION",
  "TRUE", "FALSE", "AND", "OR", "NOT", "EQ", "NEQ", "LT", "GT", "LTE",
  "GTE", "ADD", "SUB", "MULT", "DIV", "MOD", "$accept", "input", "Program",
  "block", "decl_list", "declaration", "id_list", "elif_list", "stmt_list",
  "var_list", "statement", "bool_exp", "relation_and_exp", "relation_expA",
  "relation_exp", "comp", "m_exp", "expression", "var", "term", "termA", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304
};
# endif

#define YYPACT_NINF -50

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-50)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      10,    24,    56,   -50,    25,   -50,    61,    45,    72,    77,
      84,    83,    61,   -50,   112,    61,     9,   -50,    81,    13,
      13,    71,   -50,   -50,   -50,    93,    93,   -50,    94,    92,
     -50,   -50,    88,     6,   -50,    13,   -50,   -50,    41,    30,
      -6,    67,   -50,   -50,    20,   105,   -50,   -50,   -50,    -5,
     112,   -50,    73,   -50,   112,    13,   101,     6,    12,    -2,
      68,   -50,   -50,   112,    13,    13,     6,     6,     6,   -50,
     -50,   -50,   -50,   -50,   -50,     6,     6,     6,   112,    89,
      93,   -50,     4,   105,   103,    -3,   -50,   -50,   -50,    52,
      67,   -50,   -50,   -50,   -50,    20,    20,    16,    91,    99,
     -50,     6,   108,   -50,   112,    13,   109,   -50,    13,     8,
     119,   113,    97,   -50,    95,     6,   -50,   -50,    64,    16,
     112,   -50,   -50
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     0,     1,     0,     9,     0,     0,
       0,     0,     0,     3,     0,     5,     0,    10,    54,     0,
       0,     0,    19,    20,    18,     0,     0,     4,     0,     0,
       6,     7,     0,     0,    58,     0,    35,    36,     0,     0,
       0,    30,    39,    32,    50,     0,    57,    46,    56,     0,
       0,    21,    16,    22,    14,     0,     0,     0,     0,     0,
       0,    38,    55,     0,     0,     0,     0,     0,     0,    40,
      41,    44,    45,    42,    43,     0,     0,     0,     0,     0,
       0,    15,     0,    25,     0,     0,    53,    37,    59,     0,
      31,    33,    47,    48,    49,    51,    52,    34,     0,     0,
      17,     0,     0,    27,     0,     0,     0,    24,     0,     0,
       0,     0,     0,    29,    23,     0,     8,    28,    11,    26,
       0,    13,    12
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -50,   -50,   -50,   -50,   122,   -50,   128,    34,   -49,   -20,
     -50,   -17,    90,   115,    96,   -50,    17,   -31,   -14,    14,
     116
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     8,     9,    10,    11,   106,    27,    51,
      28,    40,    41,    42,    43,    77,    44,    45,    46,    47,
      48
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      29,    79,    58,    49,    60,    81,    53,    88,    87,    34,
      18,    52,    52,    63,    89,    57,    34,    18,    59,   115,
      78,    31,    35,     1,    83,    32,    85,    86,     4,    98,
       6,    64,    64,    34,    18,    64,    29,   101,    82,    57,
      29,    64,    75,    76,    34,    18,    97,    36,    37,    29,
      35,    38,    39,    75,    76,   111,     5,    75,    76,    39,
     100,    75,    76,   118,    29,     7,    52,    66,    67,    68,
     109,   122,   103,   104,   105,    36,    37,    12,    88,    13,
      92,    93,    94,    14,   119,   120,   105,    39,   112,    15,
      29,   114,    95,    96,    16,    33,    50,    18,    29,    54,
      55,    18,    56,    65,    84,    80,    29,    69,    70,    71,
      72,    73,    74,    75,    76,    19,    18,    99,   102,   107,
      20,    21,   108,    22,    23,   110,    24,    25,    26,   113,
      19,   116,    64,   117,    64,    20,    21,    30,    22,    23,
      17,    24,    25,    26,    69,    70,    71,    72,    73,    74,
      75,    76,   121,    61,    90,    62,     0,     0,     0,     0,
       0,    91
};

static const yytype_int8 yycheck[] =
{
      14,    50,    33,    20,    35,    54,    26,    10,    10,     3,
       4,    25,    26,    19,    63,     9,     3,     4,    35,    11,
      25,    12,     9,    13,    55,    16,    57,    15,     4,    78,
       5,    37,    37,     3,     4,    37,    50,    33,    55,     9,
      54,    37,    45,    46,     3,     4,    77,    34,    35,    63,
       9,    38,    46,    45,    46,   104,     0,    45,    46,    46,
      80,    45,    46,   112,    78,     4,    80,    47,    48,    49,
     101,   120,    20,    21,    22,    34,    35,    32,    10,     7,
      66,    67,    68,     6,   115,    21,    22,    46,   105,     5,
     104,   108,    75,    76,    11,    14,    25,     4,   112,     5,
       8,     4,    14,    36,     3,    32,   120,    39,    40,    41,
      42,    43,    44,    45,    46,    18,     4,    28,    15,    28,
      23,    24,    23,    26,    27,    17,    29,    30,    31,    20,
      18,    12,    37,    20,    37,    23,    24,    15,    26,    27,
      12,    29,    30,    31,    39,    40,    41,    42,    43,    44,
      45,    46,   118,    38,    64,    39,    -1,    -1,    -1,    -1,
      -1,    65
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    13,    51,    52,     4,     0,     5,     4,    53,    54,
      55,    56,    32,     7,     6,     5,    11,    56,     4,    18,
      23,    24,    26,    27,    29,    30,    31,    58,    60,    68,
      54,    12,    16,    14,     3,     9,    34,    35,    38,    46,
      61,    62,    63,    64,    66,    67,    68,    69,    70,    61,
      25,    59,    68,    59,     5,     8,    14,     9,    67,    61,
      67,    63,    70,    19,    37,    36,    47,    48,    49,    39,
      40,    41,    42,    43,    44,    45,    46,    65,    25,    58,
      32,    58,    61,    67,     3,    67,    15,    10,    10,    58,
      62,    64,    69,    69,    69,    66,    66,    67,    58,    28,
      59,    33,    15,    20,    21,    22,    57,    28,    23,    67,
      17,    58,    61,    20,    61,    11,    12,    20,    58,    67,
      21,    57,    58
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    52,    53,    54,    54,    55,    55,    56,
      56,    57,    57,    57,    58,    58,    59,    59,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      61,    61,    62,    62,    63,    63,    63,    63,    64,    64,
      65,    65,    65,    65,    65,    65,    66,    66,    66,    66,
      67,    67,    67,    68,    68,    69,    69,    70,    70,    70
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     5,     3,     2,     3,     3,     8,     1,
       3,     3,     5,     4,     2,     3,     1,     3,     1,     1,
       1,     2,     2,     6,     5,     3,     7,     5,     7,     6,
       1,     3,     1,     3,     3,     1,     1,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       1,     3,     3,     4,     1,     2,     1,     1,     1,     3
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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
  YYUSE (yytype);
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
        case 2:
#line 71 "mini_l.y" /* yacc.c:1646  */
    {
          strcpy(program, (yyvsp[0].stmt).code);
          if (verbose) {printf("input -> Program\n");}
        }
#line 1387 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 77 "mini_l.y" /* yacc.c:1646  */
    {
          
          declare_temps((yyval.stmt).code); // declaration statements for temporaries
          
          strcat((yyval.stmt).code, (yyvsp[-1].stmt).code);
          char end[16];
          gen2(end, ":", "ENDLABEL");
          strcat((yyval.stmt).code, end); // concat declaration of endlabel
            if (verbose || sout) {
              printf("Program -> program ident ; block endprogram\n");
              printf("%s\n\n", (yyval.stmt).code);
            }
          }
#line 1405 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 92 "mini_l.y" /* yacc.c:1646  */
    {
          strcpy((yyval.stmt).begin, (yyvsp[-2].stmt).begin);
          strcpy((yyval.stmt).after, (yyvsp[0].stmt).after);
          strcpy((yyval.stmt).code, (yyvsp[-2].stmt).code);
          strcat((yyval.stmt).code, (yyvsp[0].stmt).code);
          if (verbose) {
            printf("block -> decl_list beginprogram stmt_list\n");
            printf("%s\n\n", (yyval.stmt).code);
          }
        }
#line 1420 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 104 "mini_l.y" /* yacc.c:1646  */
    {
              strcpy((yyval.stmt).begin, (yyvsp[-1].stmt).begin);
              strcpy((yyval.stmt).after, (yyvsp[-1].stmt).after);
              strcpy((yyval.stmt).code, (yyvsp[-1].stmt).code);
              
              if (verbose) {
                printf("decl_list -> declaration ;\n");
                printf("%s\n\n", (yyval.stmt).code);
              }
            }
#line 1435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 114 "mini_l.y" /* yacc.c:1646  */
    {
              strcpy((yyval.stmt).begin, (yyvsp[-2].stmt).begin);
              strcpy((yyval.stmt).after, (yyvsp[0].stmt).after);
              strcpy((yyval.stmt).code, (yyvsp[-2].stmt).code);
              strcat((yyval.stmt).code, (yyvsp[0].stmt).code);
              if (verbose) {
                printf("decl_list -> declaration ; decl_list\n");
                printf("%s\n\n", (yyval.stmt).code);
              }
            }
#line 1450 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 126 "mini_l.y" /* yacc.c:1646  */
    {
                
                char declare[32];

                int i = 0;
                while(i < (yyvsp[-2].strlist).length) {
                  gen2(declare, ".", (yyvsp[-2].strlist).list[i]);
                  strcat((yyval.stmt).code, declare);
                  if (symtab_put((yyvsp[-2].strlist).list[i], 0, 0)) { // name, type int, not temp
                    yyerror("Attempted to redeclare a declared variable\n");
                  } 
                  i++;
                }

                if (verbose) {
                  printf("declaration -> id_list : integer\n");
                  printf("%s\n\n", (yyval.stmt).code);
                }
              }
#line 1474 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 145 "mini_l.y" /* yacc.c:1646  */
    {

                char declare[32];

                int i = 0;
                while(i < (yyvsp[-7].strlist).length) {

                  if ((yyvsp[-3].intval) == 0) {
                    yyerror("Arrays must have positive nonzero size\n");
                  }

                  gen3i(declare, ".[]", (yyvsp[-7].strlist).list[i], (yyvsp[-3].intval));
                  strcat((yyval.stmt).code, declare);
                  if (symtab_put((yyvsp[-7].strlist).list[i], 1, 0)) { // name, type int, not temp
                    yyerror("Attempted to redeclare a declared variable\n");
                  } 
                  i++;
                }

                if (verbose) {
                  printf("declaration -> id_list : array [number] of integer\n");
                  printf("%s\n\n", (yyval.stmt).code);
                }
              }
#line 1503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 171 "mini_l.y" /* yacc.c:1646  */
    {
            (yyval.strlist).length = 1;
            strcpy((yyval.strlist).list[0], (yyvsp[0].strval));
            if (verbose) {
              printf("id_list -> ident\n");
            }
          }
#line 1515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 178 "mini_l.y" /* yacc.c:1646  */
    { // something fishy happening
            (yyval.strlist).length = (yyvsp[0].strlist).length + 1;
            strcpy((yyval.strlist).list[0], (yyvsp[-2].strval));
            int i = 1;
            while (i <= (yyvsp[0].strlist).length) { 
              // doesn't matter what order they're in, could be changed
              strcpy((yyval.strlist).list[i], (yyvsp[0].strlist).list[i-1]);
              i++;
            }
            if (verbose) {
              printf("id_list -> ident, id_list\n");
            }
          }
#line 1533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 193 "mini_l.y" /* yacc.c:1646  */
    {
              newlabel((yyval.stmt).begin);
              newlabel((yyval.stmt).after);
              gen2((yyval.stmt).code, ":", (yyval.stmt).begin); // declare label first
              strcat((yyval.stmt).code, (yyvsp[-1].expr).code); // add code to compute expression
              char ifthen[64], gotoend[64], end[64];
              gen3(ifthen, "?:=", (yyvsp[0].stmt).begin, (yyvsp[-1].expr).place );
              gen2(gotoend, ":=", (yyval.stmt).after);
              strcat((yyval.stmt).code, ifthen);
              strcat((yyval.stmt).code, gotoend);
              strcat((yyval.stmt).code, (yyvsp[0].stmt).code);
              gen2(end, ":", (yyval.stmt).after);
              strcat((yyval.stmt).code, end);             

              if (verbose) {
                printf("elif_list -> elseif bool_exp stmt_list\n");
                printf("%s\n\n", (yyval.stmt).code);
              }
            }
#line 1557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 212 "mini_l.y" /* yacc.c:1646  */
    {
              newlabel((yyval.stmt).begin);
              newlabel((yyval.stmt).after);
              gen2((yyval.stmt).code, ":", (yyval.stmt).begin);
              strcat((yyval.stmt).code, (yyvsp[-3].expr).code);
              char ifthen[64], elsethen[64], gotoend[64], end[64];
              gen3(ifthen, "?:=", (yyvsp[-2].stmt).begin, (yyvsp[-3].expr).place);
              strcat((yyval.stmt).code, ifthen);
              gen2(elsethen, ":=", (yyvsp[0].stmt).begin);
              strcat((yyval.stmt).code, elsethen);
              strcat((yyval.stmt).code, (yyvsp[-2].stmt).code);
              gen2(gotoend, ":=", (yyval.stmt).after);
              strcat((yyval.stmt).code, gotoend);
              strcat((yyval.stmt).code, (yyvsp[0].stmt).code);
              gen2(end, ":", (yyval.stmt).after);
              strcat((yyval.stmt).code, end);

              if (verbose) {
                printf("elif_list -> elseif bool_exp stmt_list ELSE stmt_list\n");
                printf("%s\n\n", (yyval.stmt).code);
              } 
            }
#line 1584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 234 "mini_l.y" /* yacc.c:1646  */
    {
              newlabel((yyval.stmt).begin);
              strcpy((yyval.stmt).after, (yyvsp[0].stmt).after);
              gen2((yyval.stmt).code, ":", (yyval.stmt).begin); // declare label first
              strcat((yyval.stmt).code, (yyvsp[-2].expr).code); // add code to compute expression
              char ifthen[64], gotonext[64], gotoend[64];
              gen3(ifthen, "?:=", (yyvsp[-1].stmt).begin, (yyvsp[-2].expr).place );
              strcat((yyval.stmt).code, ifthen); // if its a hit, execute stmt_list and go to the very end
              gen2(gotonext, ":=", (yyvsp[0].stmt).begin); 
              strcat((yyval.stmt).code, gotonext); // if not a hit, skip to next elif
              strcat((yyval.stmt).code, (yyvsp[-1].stmt).code); // code for statement list
              gen2(gotoend, ":=", (yyval.stmt).after);
              strcat((yyval.stmt).code, gotoend); // skip to the very end when done
              strcat((yyval.stmt).code, (yyvsp[0].stmt).code); // rest of the list
              
              if (verbose) {
                printf("elif_list -> elseif bool_exp stmt_list elif_list\n");
                printf("%s\n\n", (yyval.stmt).code);
              }
            }
#line 1609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 257 "mini_l.y" /* yacc.c:1646  */
    {
              strcpy((yyval.stmt).begin, (yyvsp[-1].stmt).begin);
              strcpy((yyval.stmt).after, (yyvsp[-1].stmt).after);
              strcpy((yyval.stmt).code, (yyvsp[-1].stmt).code);

              if (verbose) {
                printf("stmt_list -> statement;\n");
                printf("%s\n\n", (yyval.stmt).code);
              }
            }
#line 1624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 267 "mini_l.y" /* yacc.c:1646  */
    {
              strcpy((yyval.stmt).begin, (yyvsp[-2].stmt).begin);
              strcpy((yyval.stmt).after, (yyvsp[0].stmt).after);
              strcpy((yyval.stmt).code, (yyvsp[-2].stmt).code);
              strcat((yyval.stmt).code, (yyvsp[0].stmt).code);

              if (verbose) {
                printf("stmt_list -> statement; stmt_list\n");
                printf("%s\n\n", (yyval.stmt).code);
              }
          }
#line 1640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 281 "mini_l.y" /* yacc.c:1646  */
    {
            (yyval.strlist).length = 1;
            strcpy((yyval.strlist).list[0], (yyvsp[0].variable).strval);
            strcpy((yyval.strlist).code, (yyvsp[0].variable).code);
            if (verbose) {
              printf("var_list -> var\n");
              printf("%s\n", (yyval.strlist).list[0]);
            }
          }
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 290 "mini_l.y" /* yacc.c:1646  */
    {
            (yyval.strlist).length = (yyvsp[0].strlist).length + 1;
            strcpy((yyval.strlist).list[0], (yyvsp[-2].variable).strval);
            int i = 1;
            while (i <= (yyvsp[0].strlist).length) { 
              // transfers inorder for the  id_list, should hold for this as well
              strcpy((yyval.strlist).list[i], (yyvsp[0].strlist).list[i-1]);
              i++;
            }

            strcat((yyval.strlist).code, (yyvsp[-2].variable).code);
            if (verbose) {
              printf("var_list -> var, var_list\n");
              int j = 0;
              while(i < (yyval.strlist).length) {
                printf("%s\n", (yyval.strlist).list[j]); ++j;
              }
            }
          }
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 311 "mini_l.y" /* yacc.c:1646  */
    {
              newlabel((yyval.stmt).begin);
              newlabel((yyval.stmt).after);
              gen2((yyval.stmt).code, ":", (yyval.stmt).begin);
              
              char kill[8];
              gen2(kill, ":=", "ENDLABEL");
              strcat((yyval.stmt).code, kill);

              char end[8];
              gen2(end, ":", (yyval.stmt).after);
              strcat((yyval.stmt).code, end);
              
              if (verbose) {
                printf("statement -> exit\n");
                printf("%s\n\n", (yyval.stmt).code);
              }
            }
#line 1701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 329 "mini_l.y" /* yacc.c:1646  */
    {
            newlabel((yyval.stmt).begin);
            newlabel((yyval.stmt).after);
            gen2((yyval.stmt).code, ":", (yyval.stmt).begin);
            char end[8];
            gen2(end, ":", (yyval.stmt).after);
            strcat((yyval.stmt).code, end);

            yyerror("Break and Continue not supported\n");

            if (verbose) {
              printf("statement -> break\n");
            }
          }
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 343 "mini_l.y" /* yacc.c:1646  */
    {
              newlabel((yyval.stmt).begin);
              newlabel((yyval.stmt).after);
              gen2((yyval.stmt).code, ":", (yyval.stmt).begin);
              char end[8];
              gen2(end, ":", (yyval.stmt).after);
              strcat((yyval.stmt).code, end);

              yyerror("Break and Continue not supported\n");

              if (verbose) {
                printf("statement -> continue\n");
              }
            }
#line 1739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 357 "mini_l.y" /* yacc.c:1646  */
    {
              newlabel((yyval.stmt).begin);
              newlabel((yyval.stmt).after);
              gen2((yyval.stmt).code, ":", (yyval.stmt).begin);
              strcat((yyval.stmt).code, (yyvsp[0].strlist).code);

              char io[32];
              int i = 0;
              while(i < (yyvsp[0].strlist).length) {
                int index = symtab_get((yyvsp[0].strlist).list[i]); // have to delimit on comma in case of array
                if (index == -1) {
                  yyerror("attempted to retrieve a symbol not in table\n");
                  printf("offending symbol: %s", (yyvsp[0].strlist).list[i]);
                }

                int comma_loc = strcspn((yyvsp[0].strlist).list[i], ",");
                int length = strlen((yyvsp[0].strlist).list[i]);

                if (symtab_entry_is_int(index)) {
                  if (length > comma_loc) {
                    yyerror("Specified index for non-array variable\n");
                  }  
                  gen2(io, ".<", (yyvsp[0].strlist).list[i]);
                } else {
                  
                  if (comma_loc == length) { 
                    yyerror("Attempted array access without index\n");
                  }
                  gen2(io, ".[]<", (yyvsp[0].strlist).list[i]); // should have dst,index
                }
                strcat((yyval.stmt).code, io);
                ++i;
              }

              char end[8];
              gen2(end, ":", (yyval.stmt).after);
              strcat((yyval.stmt).code, end);
              if (verbose) {
                printf("statement -> read var_list\n");
                printf("%s\n\n", (yyval.stmt).code);
              }
            }
#line 1786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 399 "mini_l.y" /* yacc.c:1646  */
    {
              newlabel((yyval.stmt).begin);
              newlabel((yyval.stmt).after);
              gen2((yyval.stmt).code, ":", (yyval.stmt).begin);
              strcat((yyval.stmt).code, (yyvsp[0].strlist).code);

              char io[32];
              int i = 0;
              while(i < (yyvsp[0].strlist).length) {
                int index = symtab_get((yyvsp[0].strlist).list[i]); // have to delimit on comma in case of array
                if (index == -1) {
                  yyerror("attempted to retrieve a symbol not in table\n");
                  printf("offending symbol: %s", (yyvsp[0].strlist).list[i]);
                }

                int comma_loc = strcspn((yyvsp[0].strlist).list[i], ",");
                int length = strlen((yyvsp[0].strlist).list[i]);
                
                if (symtab_entry_is_int(index)) {
                  if (length > comma_loc) {
                    yyerror("Specified index for non-array variable\n");
                  }  
                  gen2(io, ".>", (yyvsp[0].strlist).list[i]);
                } else {
                  if (comma_loc == length) { 
                    yyerror("Attempted array access without index\n");
                  }
                  gen2(io, ".[]>", (yyvsp[0].strlist).list[i]); // should have dst,index
                }
                strcat((yyval.stmt).code, io);
                ++i;
              }

              char end[8];
              gen2(end, ":", (yyval.stmt).after);
              strcat((yyval.stmt).code, end);
              if (verbose) {
                printf("statement -> write var_list\n");
                printf("%s\n\n", (yyval.stmt).code);
              }
            }
#line 1832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 440 "mini_l.y" /* yacc.c:1646  */
    {
              newlabel((yyval.stmt).begin);
              newlabel((yyval.stmt).after);

              gen2((yyval.stmt).code, ":", (yyval.stmt).begin);

              strcat((yyval.stmt).code, (yyvsp[-3].stmt).code);
              strcat((yyval.stmt).code, (yyvsp[0].expr).code);

              char loop[64], end[64];
              gen3(loop, "?:=", (yyval.stmt).begin, (yyvsp[0].expr).place);
              strcat((yyval.stmt).code, loop);
              
              gen2(end, ":", (yyval.stmt).after);
              strcat((yyval.stmt).code, end);

              if (verbose) {
                printf("statement -> do beginloop stmt_list endloop while bool_exp\n");
                printf("%s\n\n", (yyval.stmt).code);
              }
            }
#line 1858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 462 "mini_l.y" /* yacc.c:1646  */
    {
              newlabel((yyval.stmt).begin);
              newlabel((yyval.stmt).after);
              gen2((yyval.stmt).code, ":", (yyval.stmt).begin);
              strcat((yyval.stmt).code, (yyvsp[-3].expr).code);
              char decide[64], loopback[64], gotoend[64], end[64];

              // skip around gotoend if yes, fall into gotoend if no
              gen3(decide, "?:=", (yyvsp[-1].stmt).begin, (yyvsp[-3].expr).place);
              strcat((yyval.stmt).code, decide);

              gen2(gotoend, ":=" , (yyval.stmt).after);
              strcat((yyval.stmt).code, gotoend);

              strcat((yyval.stmt).code, (yyvsp[-1].stmt).code);

              gen2(loopback, ":=", (yyval.stmt).begin); // evaluate bool again
              strcat((yyval.stmt).code, loopback);
              
              gen2(end, ":", (yyval.stmt).after);
              strcat((yyval.stmt).code, end);

              if (verbose) {
                printf("statement -> while bool_exp beginloop stmt_list endloop\n");
                printf("%s\n\n", (yyval.stmt).code);
              }
            }
#line 1890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 489 "mini_l.y" /* yacc.c:1646  */
    {
              newlabel((yyval.stmt).begin);
              newlabel((yyval.stmt).after);
              gen2((yyval.stmt).code, ":", (yyval.stmt).begin);
              
              int index = symtab_get((yyvsp[-2].variable).strval); // have to delimit on comma in case of array
              strcat((yyval.stmt).code, (yyvsp[0].expr).code);
              if (index >= 0) {
                char assign[64];
                
                int comma_loc = strcspn((yyvsp[-2].variable).strval, ",");
                int length = strlen((yyvsp[-2].variable).strval);
                if (symtab_entry_is_int(index)) {
                  if (length > comma_loc) {
                    yyerror("Specified index for non-array variable\n");
                  }  
                  gen3(assign, "=", (yyvsp[-2].variable).strval, (yyvsp[0].expr).place);
                } else {
                  if (comma_loc == length) { 
                    yyerror("Attempted array access without index\n");
                  }
                  strcat((yyval.stmt).code, (yyvsp[-2].variable).code);

                  gen3(assign, "[]=", (yyvsp[-2].variable).strval, (yyvsp[0].expr).place); 
                }
                strcat((yyval.stmt).code, assign);
              } else {
                yyerror("attempted to retrieve a symbol not in table\n");
                printf("offending symbol: %s\n", (yyvsp[-2].variable) );
              }

              char end[8];
              gen2(end, ":", (yyval.stmt).after);
              strcat((yyval.stmt).code, end);
              if (verbose) {
                printf("statement -> var := expression\n");
                printf("%s\n\n", (yyval.stmt).code);
              }
            }
#line 1934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 528 "mini_l.y" /* yacc.c:1646  */
    {
              
              int index = symtab_get((yyvsp[-6].variable).strval); // have to delimit on comma in case of array
              strcpy((yyval.stmt).code, (yyvsp[-4].expr).code);

              newlabel((yyval.stmt).begin);
              newlabel((yyval.stmt).after);
              gen2((yyval.stmt).code, ":", (yyval.stmt).begin);

              if (index >= 0) {
                char optionA[8], optionB[8], assign[32];
                newlabel(optionA);
                newlabel(optionB);
                
                strcat((yyval.stmt).code, (yyvsp[-4].expr).code); // compute expr
                char ifthen[32], elsethen[32], toend[32], A[8], B[8], end[32];  
                gen3(ifthen, "?:=", optionA, (yyvsp[-4].expr).place);
                strcat((yyval.stmt).code, ifthen);
                gen2(elsethen, ":=", optionB);
                strcat((yyval.stmt).code, elsethen);
                gen2(A, ":", optionA);
                strcat((yyval.stmt).code, A);
                strcat((yyval.stmt).code, (yyvsp[-2].expr).code);
                
                int comma_loc = strcspn((yyvsp[-6].variable).strval, ",");
                int length = strlen((yyvsp[-6].variable).strval);

                if (symtab_entry_is_int(index)) {
                  if (length > comma_loc) {
                    yyerror("Specified index for non-array variable\n");
                  }  
                  gen3(assign, "=", (yyvsp[-6].variable).strval, (yyvsp[-2].expr).place);
                } else {
                  if (comma_loc == length) { 
                    yyerror("Attempted array access without index\n");
                  }
                  strcat((yyval.stmt).code, (yyvsp[-6].variable).code);
                  gen3(assign, "[]=", (yyvsp[-6].variable).strval, (yyvsp[-2].expr).place);
                }
                
                strcat((yyval.stmt).code, assign);
                gen2(toend, ":=", (yyval.stmt).after);
                strcat((yyval.stmt).code, toend);
                gen2(B, ":", optionB);
                strcat((yyval.stmt).code, B);
                strcat((yyval.stmt).code, (yyvsp[0].expr).code);
                if (symtab_entry_is_int(index)) {
                  if (length > comma_loc) {
                    yyerror("Specified index for non-array variable\n");
                  }  
                  gen3(assign, "=", (yyvsp[-6].variable).strval, (yyvsp[0].expr).place);
                } else {
                  if (comma_loc == length) { 
                    yyerror("Attempted array access without index\n");
                  }
                  strcat((yyval.stmt).code, (yyvsp[-6].variable).code);
                  gen3(assign, "[]=", (yyvsp[-6].variable).strval, (yyvsp[0].expr).place);
                }
                strcat((yyval.stmt).code, assign);
                gen2(end, ":", (yyval.stmt).after);
                strcat((yyval.stmt).code, end);

              } else {
                yyerror("attempted to retrieve a symbol not in table\n");
                printf("offending symbol: %s\n", (yyvsp[-6].variable).strval );
              }

              char end[8];
              gen2(end, ":", (yyval.stmt).after);
              strcat((yyval.stmt).code, end);

              if (verbose) {
                printf("statement -> var := bool_exp ? expression : expression\n");
                printf("%s\n\n", (yyval.stmt).code);
              }
            }
#line 2015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 604 "mini_l.y" /* yacc.c:1646  */
    {
              newlabel((yyval.stmt).begin);
              newlabel((yyval.stmt).after);
              gen2((yyval.stmt).code, ":", (yyval.stmt).begin); // declare label first
              strcat((yyval.stmt).code, (yyvsp[-3].expr).code); // add code to compute expression
              char ifthen[64], gotoend[64], end[64];
              gen3(ifthen, "?:=", (yyvsp[-1].stmt).begin, (yyvsp[-3].expr).place); // if true then statementlist
              gen2(gotoend, ":=", (yyval.stmt).after); // else goto end
              strcat((yyval.stmt).code, ifthen); // add the if
              strcat((yyval.stmt).code, gotoend);// add the branch around
              strcat((yyval.stmt).code, (yyvsp[-1].stmt).code); // add the code for if
              gen2(end, ":", (yyval.stmt).after); // declare ending label and add it
              strcat((yyval.stmt).code, end);

              if (verbose) {
                printf("statement -> if bool_exp then stmt_list endif\n");
                printf("%s\n\n", (yyval.stmt).code);
              }
            }
#line 2039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 623 "mini_l.y" /* yacc.c:1646  */
    {
              newlabel((yyval.stmt).begin); // stick with the convention of begin/place being names
              newlabel((yyval.stmt).after); 
              gen2((yyval.stmt).code, ":", (yyval.stmt).begin); // start with the new label
              strcat((yyval.stmt).code, (yyvsp[-5].expr).code); // add code to compute the boolean
              char ifthen[64], elsethen[64], gotoend[64], end[64];
              gen3(ifthen, "?:=", (yyvsp[-3].stmt).begin, (yyvsp[-5].expr).place); // brances
              gen2(elsethen, ":=", (yyvsp[-1].stmt).begin);
              gen2(gotoend, ":=", (yyval.stmt).after);
              strcat((yyval.stmt).code, ifthen);
              strcat((yyval.stmt).code, elsethen);
              strcat((yyval.stmt).code, (yyvsp[-3].stmt).code);
              strcat((yyval.stmt).code, gotoend);
              strcat((yyval.stmt).code, (yyvsp[-1].stmt).code);
              gen2(end, ":", (yyval.stmt).after);
              strcat((yyval.stmt).code, end);

              if (verbose) {
                printf("statement -> if bool_exp then stmt_list else stmt_list endif\n");
                printf("%s\n\n", (yyval.stmt).code);
              }
            }
#line 2066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 645 "mini_l.y" /* yacc.c:1646  */
    {
              newlabel((yyval.stmt).begin);
              strcpy((yyval.stmt).after, (yyvsp[-1].stmt).after);
              gen2((yyval.stmt).code, ":", (yyval.stmt).begin); // start with the new label
              strcat((yyval.stmt).code, (yyvsp[-4].expr).code); // add code to compute the boolean
              char ifthen[64], gotonext[64], gotoend[64];
              gen3(ifthen, "?:=", (yyvsp[-2].stmt).begin, (yyvsp[-4].expr).place);
              strcat((yyval.stmt).code, ifthen);
              gen2(gotonext, ":=", (yyvsp[-1].stmt).begin);
              strcat((yyval.stmt).code, gotonext);
              strcat((yyval.stmt).code, (yyvsp[-2].stmt).code);
              gen2(gotoend, ":=", (yyval.stmt).after);
              strcat((yyval.stmt).code, gotoend);
              strcat((yyval.stmt).code, (yyvsp[-1].stmt).code);
              if (verbose) {
                printf("statement -> if bool_exp then stmt_list elif_list endif\n");
                printf("%s\n\n", (yyval.stmt).code);
              }
            }
#line 2090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 666 "mini_l.y" /* yacc.c:1646  */
    {
            strcpy((yyval.expr).place, (yyvsp[0].expr).place);
            strcpy((yyval.expr).code, (yyvsp[0].expr).code);
            if (verbose) {
              printf("bool_exp -> relation_and_exp\n");
              printf("%s\n\n", (yyval.expr).code);
            }
           }
#line 2103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 674 "mini_l.y" /* yacc.c:1646  */
    {
            newtemp((yyval.expr).place);
            char quad[16];
            gen4(quad, "||", (yyval.expr).place, (yyvsp[-2].expr).place, (yyvsp[0].expr).place);
            strcpy((yyval.expr).code, (yyvsp[-2].expr).code);
            strcat((yyval.expr).code, (yyvsp[0].expr).code);
            strcat((yyval.expr).code, quad);
            if (verbose) {
              printf("bool_exp -> bool_exp OR relation_and_exp\n");
              printf("%s\n\n", (yyval.expr).code);
            }
           }
#line 2120 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 688 "mini_l.y" /* yacc.c:1646  */
    {
                    strcpy((yyval.expr).place, (yyvsp[0].expr).place);
                    strcpy((yyval.expr).code, (yyvsp[0].expr).code);
                    if (verbose) {
                      printf("relation_and_exp -> relation_exp\n");
                      printf("%s\n\n", (yyval.expr).code);
                    }
                   }
#line 2133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 696 "mini_l.y" /* yacc.c:1646  */
    {
                    newtemp((yyval.expr).place);
                    char quad[16];
                    gen4(quad, "&&", (yyval.expr).place, (yyvsp[-2].expr).place, (yyvsp[0].expr).place);
                    strcpy((yyval.expr).code, (yyvsp[-2].expr).code);
                    strcat((yyval.expr).code, (yyvsp[0].expr).code);
                    strcat((yyval.expr).code, quad);

                    if (verbose) {
                      printf("relation_and_exp -> relation_and_exp AND relation_exp\n");
                      printf("%s\n\n", (yyval.expr).code);
                    }
                   }
#line 2151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 711 "mini_l.y" /* yacc.c:1646  */
    {
                  newtemp((yyval.expr).place);
                  char quad[16];
                  gen4(quad, (yyvsp[-1].strval), (yyval.expr).place, (yyvsp[-2].expr).place, (yyvsp[0].expr).place);
                  strcpy((yyval.expr).code, (yyvsp[-2].expr).code);
                  strcat((yyval.expr).code, (yyvsp[0].expr).code);
                  strcat((yyval.expr).code, quad);

                  if (verbose) {
                    printf("relation_exp' -> expression comp expression\n");
                    printf("%s\n\n", (yyval.expr).code);
                  }
                }
#line 2169 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 724 "mini_l.y" /* yacc.c:1646  */
    {
                  newtemp((yyval.expr).place);
                  gen3i((yyval.expr).code, "=", (yyval.expr).place, 1);
                  if (verbose) {
                    printf("relation_exp' -> TRUE\n");
                    printf("%s\n\n", (yyval.expr).code);
                  }
                }
#line 2182 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 732 "mini_l.y" /* yacc.c:1646  */
    { 
                newtemp((yyval.expr).place);
                gen3i((yyval.expr).code, "=", (yyval.expr).place, 0);
                if (verbose) {
                  printf("relation_exp' -> FALSE\n");
                  printf("%s\n\n", (yyval.expr).code);
                }
              }
#line 2195 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 740 "mini_l.y" /* yacc.c:1646  */
    { 
                  strcpy((yyval.expr).place, (yyvsp[-1].expr).place);
                  strcpy((yyval.expr).code, (yyvsp[-1].expr).code);
                  if (verbose) {
                    printf("relation_exp' -> (bool_exp)\n");
                    printf("%s\n\n", (yyval.expr).code);
                  }
                }
#line 2208 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 750 "mini_l.y" /* yacc.c:1646  */
    { 
                strcpy((yyval.expr).place, (yyvsp[0].expr).place);
                strcpy((yyval.expr).code, (yyvsp[0].expr).code);
                char signswitch[16];
                gen3(signswitch, "!", (yyval.expr).place, (yyval.expr).place);
                strcat((yyval.expr).code, signswitch);
                
                if (verbose) {
                  printf("relation_exp -> not relation_exp'\n");
                  printf("%s\n\n", (yyval.expr).code);
                }
               }
#line 2225 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 762 "mini_l.y" /* yacc.c:1646  */
    {
                strcpy((yyval.expr).place, (yyvsp[0].expr).place);
                strcpy((yyval.expr).code, (yyvsp[0].expr).code);
                if (verbose) {
                  printf("relation_exp -> relation_exp'\n");
                  printf("%s\n\n", (yyval.expr).code);
                }
               }
#line 2238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 772 "mini_l.y" /* yacc.c:1646  */
    {
        strcpy((yyval.strval), "=="); 
        if (verbose) {
          printf("comp -> ==\n");
          printf("%s\n\n", (yyval.strval));
        }
       }
#line 2250 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 779 "mini_l.y" /* yacc.c:1646  */
    {
        strcpy((yyval.strval), "!="); 
        if (verbose) {
          printf("comp -> <>\n");
          printf("%s\n\n", (yyval.strval));
        }
       }
#line 2262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 786 "mini_l.y" /* yacc.c:1646  */
    {
        strcpy((yyval.strval), "<="); 
        if (verbose) {
          printf("comp -> <=\n");
          printf("%s\n\n", (yyval.strval));
        }
       }
#line 2274 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 793 "mini_l.y" /* yacc.c:1646  */
    {
        strcpy((yyval.strval), ">="); 
        if (verbose) {
          printf("comp -> >=\n");
          printf("%s\n\n", (yyval.strval));
        }
       }
#line 2286 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 800 "mini_l.y" /* yacc.c:1646  */
    {
        strcpy((yyval.strval), "<"); 
        if (verbose) {
          printf("comp-> < \n");
          printf("%s\n\n", (yyval.strval));
        }
       }
#line 2298 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 807 "mini_l.y" /* yacc.c:1646  */
    {
        strcpy((yyval.strval), ">"); 
        if (verbose) {
          printf("comp-> > \n");
          printf("%s\n\n", (yyval.strval));
        }
       }
#line 2310 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 816 "mini_l.y" /* yacc.c:1646  */
    { 
          strcpy((yyval.expr).place, (yyvsp[0].expr).place);
          strcpy((yyval.expr).code, (yyvsp[0].expr).code);
          if (verbose) {
            printf("multiplicative_exp -> term\n");
            printf("%s\n\n", (yyval.expr).code);
          }
        }
#line 2323 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 824 "mini_l.y" /* yacc.c:1646  */
    { 
          newtemp((yyval.expr).place);
          char quad[16];
          gen4(quad, "*", (yyval.expr).place, (yyvsp[-2].expr).place, (yyvsp[0].expr).place);
          strcpy((yyval.expr).code, (yyvsp[-2].expr).code);
          strcat((yyval.expr).code, (yyvsp[0].expr).code);
          strcat((yyval.expr).code, quad);

          if (verbose) {
            printf("multiplicative_exp -> multiplicative_exp * term\n");
            printf("%s\n\n", (yyval.expr).code);
          }
        }
#line 2341 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 837 "mini_l.y" /* yacc.c:1646  */
    { 
          newtemp((yyval.expr).place);
          char quad[16];
          gen4(quad, "/", (yyval.expr).place, (yyvsp[-2].expr).place, (yyvsp[0].expr).place);
          strcpy((yyval.expr).code, (yyvsp[-2].expr).code);
          strcat((yyval.expr).code, (yyvsp[0].expr).code);
          strcat((yyval.expr).code, quad);
          
          if (verbose) {
            printf("multiplicative_exp -> multiplicative_exp / term\n");
            printf("%s\n\n", (yyval.expr).code);
          }
        }
#line 2359 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 850 "mini_l.y" /* yacc.c:1646  */
    { 
          newtemp((yyval.expr).place);
          char quad[16];
          gen4(quad, "%", (yyval.expr).place, (yyvsp[-2].expr).place, (yyvsp[0].expr).place);
          strcpy((yyval.expr).code, (yyvsp[-2].expr).code);
          strcat((yyval.expr).code, (yyvsp[0].expr).code);
          strcat((yyval.expr).code, quad);
          if (verbose) {
            printf("multiplicative_exp -> multiplicative_exp modulo term\n");
            printf("%s\n\n", (yyval.expr).code);
          }
        }
#line 2376 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 864 "mini_l.y" /* yacc.c:1646  */
    { 
              strcpy((yyval.expr).place, (yyvsp[0].expr).place);
              strcpy((yyval.expr).code, (yyvsp[0].expr).code);
              if (verbose) {printf("expression -> multiplicative_exp\n");}
             }
#line 2386 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 869 "mini_l.y" /* yacc.c:1646  */
    {
              newtemp((yyval.expr).place);
              char quad[16];
              gen4(quad, "+", (yyval.expr).place, (yyvsp[-2].expr).place, (yyvsp[0].expr).place); 
              strcpy((yyval.expr).code, (yyvsp[-2].expr).code);
              strcat((yyval.expr).code, (yyvsp[0].expr).code);
              strcat((yyval.expr).code, quad);
              
              if (verbose) {
                printf("expression -> expression + multiplicative_exp\n");
                printf("%s\n\n", (yyval.expr).code);
              }
             }
#line 2404 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 882 "mini_l.y" /* yacc.c:1646  */
    {
                newtemp((yyval.expr).place);
                char quad[16];
                gen4(quad, "-", (yyval.expr).place, (yyvsp[-2].expr).place, (yyvsp[0].expr).place); 
                strcpy((yyval.expr).code, (yyvsp[-2].expr).code);
                strcat((yyval.expr).code, (yyvsp[0].expr).code);
                strcat((yyval.expr).code, quad);
                
                if (verbose) {
                  printf("expression -> expression - multiplicative_exp\n");
                  printf("%s\n\n", (yyval.expr).code);
                }
             }
#line 2422 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 898 "mini_l.y" /* yacc.c:1646  */
    {
        // name and type will already be in symtab, pass (name,index) along as string
        sprintf((yyval.variable).strval, "%s,%s", (yyvsp[-3].strval), (yyvsp[-1].expr).place); // id, index
        strcpy((yyval.variable).code, (yyvsp[-1].expr).code);
        
        if (verbose) {
          printf("var -> ident[expression]\n");
          printf("%s\n\n",(yyval.variable));
        }
      }
#line 2437 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 909 "mini_l.y" /* yacc.c:1646  */
    {
        // name and type will already be in symtab, pass name along
        strcpy((yyval.variable).strval, (yyvsp[0].strval));
        strcpy((yyval.variable).code, "");
        if (verbose) {
          printf("var -> ident %s\n", (yyvsp[0].strval));
          printf("%s\n\n",(yyval.variable)); // id
        } 
      }
#line 2451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 920 "mini_l.y" /* yacc.c:1646  */
    {
          strcpy((yyval.expr).place, (yyvsp[0].expr).place);
          // code to calculate the term plus `concat` sign switch
          strcpy((yyval.expr).code, (yyvsp[0].expr).code);
          char signswitch[16];
          gen4i(signswitch, "*", (yyval.expr).place, (yyval.expr).place, -1);
          strcat((yyval.expr).code, signswitch);

          if (verbose) {
            printf("term -> SUB term'\n");
            printf("%s\n\n", (yyval.expr).code);
          }
       }
#line 2469 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 933 "mini_l.y" /* yacc.c:1646  */
    {
          strcpy((yyval.expr).place, (yyvsp[0].expr).place);
          strcpy((yyval.expr).code, (yyvsp[0].expr).code);
          
          if (verbose) {
            printf("term -> term'\n");
            printf("%s\n\n", (yyval.expr).code);
          }
       }
#line 2483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 944 "mini_l.y" /* yacc.c:1646  */
    { // when var becomes a term, we only want the value currently in it
          int index = symtab_get((yyvsp[0].variable).strval);
          // handle both the int and array cases
          if (index >= 0) {
            if (symtab_entry_is_int(index)) {
              // avoid making new temp since variable already declared
              strcpy((yyval.expr).place,(yyvsp[0].variable).strval);
              strcpy((yyval.expr).code,"");
            } else {
              // newtemp to extract value at index
              newtemp((yyval.expr).place);
              gen3((yyval.expr).code, "=[]", (yyval.expr).place, (yyvsp[0].variable).strval ); // $1 has "name,index"
            }
          } else {
            yyerror("attempted to retrieve a symbol not in table\n");
            printf("offending symbol: %s\n", (yyvsp[0].variable).strval);
          }

          if (verbose) {
            printf("term' -> var \n");
            printf("%s\n\n", (yyval.expr).code);
          }
        }
#line 2511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 968 "mini_l.y" /* yacc.c:1646  */
    {
          int imm = (yyvsp[0].intval);
          newtemp((yyval.expr).place);
          gen3i((yyval.expr).code, "=", (yyval.expr).place, imm);
          
          if (verbose) {
            printf("term' -> NUMBER \n");
            printf("%s\n\n", (yyval.expr).code);
          }
        }
#line 2526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 978 "mini_l.y" /* yacc.c:1646  */
    {
          strcpy((yyval.expr).place, (yyvsp[-1].expr).place);
          strcpy((yyval.expr).code,(yyvsp[-1].expr).code);
          if (verbose) {
            printf("term' -> (expression)\n\n");
            printf("%s\n\n", (yyval.expr).code);
          }
        }
#line 2539 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2543 "y.tab.c" /* yacc.c:1646  */
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
#line 987 "mini_l.y" /* yacc.c:1906  */


int main (const int argc, const char** argv) {  
  if (argc > 1) {
    yyin = fopen(argv[1], "r");
    if (yyin == NULL) {
      printf("Could not locate file: %s\n", argv[0]);
      exit(1);
    }
  }
  
  symtab_init();
  yyparse(); // completed code resides in array 'program'


  if (errcount == 0) {
    char outname[32];
    int dot_loc = strcspn(argv[1], ".");
    snprintf(outname, dot_loc+1, "%s", argv[1]);
    strcat(outname, ".mil");
    printf("%s\n", outname);
    
    yyout = fopen(outname, "w");    
    
    if (yyout == NULL) {
      printf("File Output Failed\n");
      fclose(yyout);
      exit(1);
    }
    
    fprintf(yyout, "%s\n", program);  
    fclose(yyout);
  }
  
  
  
  return 0; 
}

void yyerror(const char* msg) {
    printf("** Line %d, position %d: %s\n", yylineno, yycolumno, msg);  
    ++errcount;
}
