/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 16 "grammar.y"

    #include <stdlib.h>
    #include <stdio.h>
    #include <string>
    #include <fstream>
    #include <cstring>
    #include <string.h>
    #include <iostream>
    #include "../in.h"
    #include "../common/util/AsmGenerator.h"
    #include "../common/util/InterMediate.h"
    #include "../common/tools.h"
    class ASTNode; // 数据类型定义：定义语义动作使用到的数据类型
    extern int yylex(); 
    int yyerror(char* s);
    extern char* yytext;// 外部变量和全局变量定义
    extern FILE* yyin;
    ASTNode* root;

#line 91 "./output/grammar.tab.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "grammar.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ASSIGN = 3,                     /* ASSIGN  */
  YYSYMBOL_NOT = 4,                        /* NOT  */
  YYSYMBOL_UMINUS = 5,                     /* UMINUS  */
  YYSYMBOL_ADDR = 6,                       /* ADDR  */
  YYSYMBOL_ADD = 7,                        /* ADD  */
  YYSYMBOL_SUBTRACT = 8,                   /* SUBTRACT  */
  YYSYMBOL_MULTIPLY = 9,                   /* MULTIPLY  */
  YYSYMBOL_DIVIDE = 10,                    /* DIVIDE  */
  YYSYMBOL_MOD = 11,                       /* MOD  */
  YYSYMBOL_POW = 12,                       /* POW  */
  YYSYMBOL_AND = 13,                       /* AND  */
  YYSYMBOL_OR = 14,                        /* OR  */
  YYSYMBOL_RELOP = 15,                     /* RELOP  */
  YYSYMBOL_LBRAKET = 16,                   /* LBRAKET  */
  YYSYMBOL_RBRAKET = 17,                   /* RBRAKET  */
  YYSYMBOL_LP = 18,                        /* LP  */
  YYSYMBOL_RP = 19,                        /* RP  */
  YYSYMBOL_LBRACE = 20,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 21,                    /* RBRACE  */
  YYSYMBOL_SEMICOLON = 22,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 23,                     /* COMMA  */
  YYSYMBOL_GETMEMBER = 24,                 /* GETMEMBER  */
  YYSYMBOL_RETURN = 25,                    /* RETURN  */
  YYSYMBOL_IF = 26,                        /* IF  */
  YYSYMBOL_ELSE = 27,                      /* ELSE  */
  YYSYMBOL_ID = 28,                        /* ID  */
  YYSYMBOL_INT = 29,                       /* INT  */
  YYSYMBOL_TYPE = 30,                      /* TYPE  */
  YYSYMBOL_MAIN = 31,                      /* MAIN  */
  YYSYMBOL_FOR = 32,                       /* FOR  */
  YYSYMBOL_WHILE = 33,                     /* WHILE  */
  YYSYMBOL_PRINTF = 34,                    /* PRINTF  */
  YYSYMBOL_YYACCEPT = 35,                  /* $accept  */
  YYSYMBOL_prog = 36,                      /* prog  */
  YYSYMBOL_extDefList = 37,                /* extDefList  */
  YYSYMBOL_extDef = 38,                    /* extDef  */
  YYSYMBOL_extDecList = 39,                /* extDecList  */
  YYSYMBOL_specifier = 40,                 /* specifier  */
  YYSYMBOL_varDec = 41,                    /* varDec  */
  YYSYMBOL_compd = 42,                     /* compd  */
  YYSYMBOL_43_1 = 43,                      /* $@1  */
  YYSYMBOL_stmts = 44,                     /* stmts  */
  YYSYMBOL_initFor = 45,                   /* initFor  */
  YYSYMBOL_stmt = 46,                      /* stmt  */
  YYSYMBOL_def = 47,                       /* def  */
  YYSYMBOL_decList = 48,                   /* decList  */
  YYSYMBOL_dec = 49,                       /* dec  */
  YYSYMBOL_expr = 50                       /* expr  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   510

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  16
/* YYNRULES -- Number of rules.  */
#define YYNRULES  65
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  143

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   289


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   160,   160,   176,   179,   191,   196,   197,   207,   214,
     217,   224,   227,   233,   244,   262,   262,   276,   282,   289,
     295,   298,   304,   309,   314,   317,   322,   332,   346,   349,
     352,   355,   358,   361,   364,   367,   370,   373,   376,   379,
     385,   390,   396,   399,   406,   409,   416,   434,   442,   448,
     454,   461,   468,   475,   481,   487,   493,   499,   502,   507,
     510,   517,   523,   529,   541,   544
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ASSIGN", "NOT",
  "UMINUS", "ADDR", "ADD", "SUBTRACT", "MULTIPLY", "DIVIDE", "MOD", "POW",
  "AND", "OR", "RELOP", "LBRAKET", "RBRAKET", "LP", "RP", "LBRACE",
  "RBRACE", "SEMICOLON", "COMMA", "GETMEMBER", "RETURN", "IF", "ELSE",
  "ID", "INT", "TYPE", "MAIN", "FOR", "WHILE", "PRINTF", "$accept", "prog",
  "extDefList", "extDef", "extDecList", "specifier", "varDec", "compd",
  "$@1", "stmts", "initFor", "stmt", "def", "decList", "dec", "expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-54)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-42)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       3,   -11,     5,    16,    17,   -54,    -9,   -54,   -54,   -54,
     -54,   -54,     7,     8,    38,   -54,    20,    13,   -54,    23,
      37,     0,   -54,   -54,    47,   -54,   -54,   -54,   -54,    75,
      36,   234,    42,   247,   234,   -54,   141,    55,    62,   -54,
      67,    88,    92,    23,   -54,   -54,    94,   270,   -54,   102,
      95,   486,   -54,    62,    51,   334,   -54,   286,   234,   234,
     111,   234,   234,   125,   -54,   109,   -54,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   -54,   -54,
     -54,   348,   446,   -13,   156,   112,   -54,   476,   362,   376,
     234,    23,   476,   494,   494,    51,    51,    51,    76,   115,
     115,   119,   461,    93,   -54,   -54,     6,   302,   171,    93,
     114,   476,   -54,   -54,   110,    93,   390,   186,   202,   318,
     -54,   -54,    93,   -54,    93,    93,   404,    93,   418,   218,
     -54,   -54,   -54,    93,   -54,    93,    93,   432,   -54,   -54,
     -54,    93,   -54
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,    11,     0,     0,     3,     0,     8,    12,     1,
       4,     6,    13,     0,     0,     9,     0,     0,     5,     0,
       0,     0,    10,    14,     0,    15,     7,    17,    19,     0,
       0,     0,     0,     0,     0,    16,     0,     0,    63,    64,
       0,     0,     0,     0,    24,    18,     0,     0,    65,    39,
       0,    58,    61,    62,    56,     0,    26,     0,     0,     0,
       0,     0,     0,    44,    40,    42,    23,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    22,    57,
      27,     0,     0,     0,     0,     0,    20,    21,     0,     0,
       0,     0,    46,    50,    51,    52,    53,    54,    55,    47,
      48,    49,     0,     0,    60,    41,     0,     0,     0,     0,
       0,    45,    43,    59,    28,     0,     0,     0,     0,     0,
      30,    25,     0,    31,     0,     0,     0,     0,     0,     0,
      29,    34,    33,     0,    32,     0,     0,     0,    37,    36,
      35,     0,    38
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -54,   -54,   -54,   134,   -54,    48,     2,   122,   -54,   -54,
     -54,   -53,    84,    57,   -54,   -31
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,     5,    14,    43,    63,    44,    28,    29,
      85,    45,    46,    64,    65,    47
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      51,    24,    54,    55,     1,    57,    48,    50,    15,   105,
      31,     7,    32,    11,     8,    33,     9,    -2,     1,    12,
      25,    22,    13,    16,    34,   115,    17,    81,    82,    87,
      88,    89,    21,     2,    38,    39,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,     2,     6,    20,
     114,    12,     6,   107,    23,    48,   120,    27,    49,   111,
      18,    19,   123,    73,    74,    75,    76,    77,    27,   130,
      52,   131,   132,    58,   134,   116,    30,   119,    59,    31,
     138,    32,   139,   140,    33,    60,   126,   128,   142,    74,
      75,    76,    77,    34,    30,    25,    35,    31,   137,    32,
      36,    37,    33,    38,    39,     2,    61,    40,    41,    42,
      62,    34,    83,    25,    48,    31,    66,    32,    36,    37,
      33,    38,    39,     2,   -41,    40,    41,    42,    90,    34,
      76,    77,    91,    84,   108,    77,   121,   122,    10,    38,
      39,     2,    50,    26,    86,    31,     0,    32,   112,     0,
      33,     0,     0,     0,     0,     0,     0,    50,     0,    34,
      31,     0,    32,    56,     0,    33,     0,     0,     0,    38,
      39,     0,    50,     0,    34,    31,     0,    32,   106,     0,
      33,     0,     0,     0,    38,    39,     0,    50,     0,    34,
      31,     0,    32,   118,     0,    33,     0,     0,     0,    38,
      39,     0,     0,    50,    34,   125,    31,     0,    32,     0,
       0,    33,     0,     0,    38,    39,     0,     0,     0,    50,
      34,   127,    31,     0,    32,     0,     0,    33,     0,     0,
      38,    39,     0,     0,     0,    50,    34,   136,    31,     0,
      32,     0,     0,    33,     0,     0,    38,    39,    50,     0,
       0,    31,    34,    32,     0,     0,    33,     0,     0,     0,
       0,     0,    38,    39,     0,    34,     0,     0,     0,     0,
       0,     0,     0,    67,     0,    53,    39,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,     0,     0,    67,
       0,     0,    78,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,     0,     0,    67,     0,     0,    80,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,     0,
       0,    67,     0,     0,   117,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,     0,     0,    67,     0,     0,
     129,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    67,     0,    79,     0,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    67,     0,   103,     0,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    67,
       0,   109,     0,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    67,     0,   110,     0,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    67,     0,   124,
       0,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    67,     0,   133,     0,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    67,     0,   135,     0,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    67,
       0,   141,     0,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,   104,    67,     0,     0,     0,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,   113,    67,
       0,     0,     0,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    70,    71,    72,    73,    74,    75,    76,
      77
};

static const yytype_int16 yycheck[] =
{
      31,     1,    33,    34,     1,    36,    19,     1,     6,    22,
       4,    22,     6,    22,     9,     9,     0,     0,     1,    28,
      20,    19,    31,    16,    18,    19,    18,    58,    59,    60,
      61,    62,    19,    30,    28,    29,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    30,     0,    29,
     103,    28,     4,    84,    17,    19,   109,    21,    22,    90,
      22,    23,   115,    12,    13,    14,    15,    16,    21,   122,
      28,   124,   125,    18,   127,   106,     1,   108,    16,     4,
     133,     6,   135,   136,     9,    18,   117,   118,   141,    13,
      14,    15,    16,    18,     1,    20,    21,     4,   129,     6,
      25,    26,     9,    28,    29,    30,    18,    32,    33,    34,
      18,    18,     1,    20,    19,     4,    22,     6,    25,    26,
       9,    28,    29,    30,    22,    32,    33,    34,     3,    18,
      15,    16,    23,    22,    22,    16,    22,    27,     4,    28,
      29,    30,     1,    21,    60,     4,    -1,     6,    91,    -1,
       9,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    18,
       4,    -1,     6,    22,    -1,     9,    -1,    -1,    -1,    28,
      29,    -1,     1,    -1,    18,     4,    -1,     6,    22,    -1,
       9,    -1,    -1,    -1,    28,    29,    -1,     1,    -1,    18,
       4,    -1,     6,    22,    -1,     9,    -1,    -1,    -1,    28,
      29,    -1,    -1,     1,    18,    19,     4,    -1,     6,    -1,
      -1,     9,    -1,    -1,    28,    29,    -1,    -1,    -1,     1,
      18,    19,     4,    -1,     6,    -1,    -1,     9,    -1,    -1,
      28,    29,    -1,    -1,    -1,     1,    18,    19,     4,    -1,
       6,    -1,    -1,     9,    -1,    -1,    28,    29,     1,    -1,
      -1,     4,    18,     6,    -1,    -1,     9,    -1,    -1,    -1,
      -1,    -1,    28,    29,    -1,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,    28,    29,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    -1,    -1,     3,
      -1,    -1,    22,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    -1,    -1,     3,    -1,    -1,    22,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    -1,
      -1,     3,    -1,    -1,    22,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    -1,    -1,     3,    -1,    -1,
      22,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,     3,    -1,    19,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,     3,    -1,    19,    -1,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,     3,
      -1,    19,    -1,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,     3,    -1,    19,    -1,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,     3,    -1,    19,
      -1,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,     3,    -1,    19,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,     3,    -1,    19,    -1,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,     3,
      -1,    19,    -1,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,     3,    -1,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,     3,
      -1,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,     9,    10,    11,    12,    13,    14,    15,
      16
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    30,    36,    37,    38,    40,    22,     9,     0,
      38,    22,    28,    31,    39,    41,    16,    18,    22,    23,
      29,    19,    41,    17,     1,    20,    42,    21,    43,    44,
       1,     4,     6,     9,    18,    21,    25,    26,    28,    29,
      32,    33,    34,    40,    42,    46,    47,    50,    19,    22,
       1,    50,    28,    28,    50,    50,    22,    50,    18,    16,
      18,    18,    18,    41,    48,    49,    22,     3,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    22,    19,
      22,    50,    50,     1,    22,    45,    47,    50,    50,    50,
       3,    23,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    19,    17,    22,    22,    50,    22,    19,
      19,    50,    48,    17,    46,    19,    50,    22,    22,    50,
      46,    22,    27,    46,    19,    19,    50,    19,    50,    22,
      46,    46,    46,    19,    46,    19,    19,    50,    46,    46,
      46,    19,    46
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    35,    36,    37,    37,    38,    38,    38,    38,    39,
      39,    40,    40,    41,    41,    43,    42,    42,    44,    44,
      45,    45,    46,    46,    46,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    46,    46,    46,    46,    46,    46,
      47,    47,    48,    48,    49,    49,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     3,     2,     5,     2,     1,
       3,     1,     2,     1,     4,     0,     4,     2,     2,     0,
       1,     1,     2,     2,     1,     5,     2,     3,     5,     7,
       5,     6,     7,     7,     7,     8,     8,     8,     9,     2,
       2,     2,     1,     3,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     3,     2,     4,
       4,     2,     2,     1,     1,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* prog: extDefList  */
#line 160 "grammar.y"
                  {
            root = new RootNode();
            root -> addChildNode((yyvsp[0].astNode));
        }
#line 1289 "./output/grammar.tab.cpp"
    break;

  case 3: /* extDefList: extDef  */
#line 176 "grammar.y"
              {
            (yyval.astNode) = (yyvsp[0].astNode);
        }
#line 1297 "./output/grammar.tab.cpp"
    break;

  case 4: /* extDefList: extDefList extDef  */
#line 179 "grammar.y"
                           {
            if((yyvsp[-1].astNode)==NULL)
                (yyval.astNode) = (yyvsp[0].astNode);
            else{
                if((yyvsp[0].astNode)!=NULL)
                    (yyvsp[-1].astNode)->getLastBrother()->addBrother((yyvsp[0].astNode));
                (yyval.astNode) = (yyvsp[-1].astNode);
            }
        }
#line 1311 "./output/grammar.tab.cpp"
    break;

  case 5: /* extDef: specifier extDecList SEMICOLON  */
#line 191 "grammar.y"
                                       {
            DefVarASTNode* var = (DefVarASTNode*)(yyvsp[-1].astNode);
            var->setSymbolType((yyvsp[-2].str));
            (yyval.astNode) = var;
        }
#line 1321 "./output/grammar.tab.cpp"
    break;

  case 6: /* extDef: specifier SEMICOLON  */
#line 196 "grammar.y"
                              {}
#line 1327 "./output/grammar.tab.cpp"
    break;

  case 7: /* extDef: specifier MAIN LP RP compd  */
#line 197 "grammar.y"
                                     {
            Symbol* main = tempTable->insertSymbol("MAIN", Type::MAIN);
            if(main!=NULL){
                MainASTNode* var = new MainASTNode("main",(yyvsp[0].astNode));
                (yyval.astNode) = var;
            }
            else{
                yyerror((char*)"multi used MAIN");
            }
        }
#line 1342 "./output/grammar.tab.cpp"
    break;

  case 8: /* extDef: error SEMICOLON  */
#line 207 "grammar.y"
                          {
            yyerrok;
            (yyval.astNode) = NULL;
        }
#line 1351 "./output/grammar.tab.cpp"
    break;

  case 9: /* extDecList: varDec  */
#line 214 "grammar.y"
               {
            (yyval.astNode) = (yyvsp[0].astNode);
        }
#line 1359 "./output/grammar.tab.cpp"
    break;

  case 10: /* extDecList: extDecList COMMA varDec  */
#line 217 "grammar.y"
                                  {
            (yyvsp[-2].astNode)->getLastBrother()->addBrother((yyvsp[0].astNode));
            (yyval.astNode) = (yyvsp[-2].astNode);
        }
#line 1368 "./output/grammar.tab.cpp"
    break;

  case 11: /* specifier: TYPE  */
#line 224 "grammar.y"
            {
            (yyval.str) = (char*)"integer";
        }
#line 1376 "./output/grammar.tab.cpp"
    break;

  case 12: /* specifier: TYPE MULTIPLY  */
#line 227 "grammar.y"
                        {
            (yyval.str) = (char*)"pointer";
        }
#line 1384 "./output/grammar.tab.cpp"
    break;

  case 13: /* varDec: ID  */
#line 233 "grammar.y"
           {
            Symbol* result = tempTable->insertSymbol((yyvsp[0].str),Type::integer);
            if(result!=NULL){
                DefVarASTNode* var = new DefVarASTNode((yyvsp[0].str));
                var->setTheTable(tempTable);
                (yyval.astNode) = var;
            } 
            else{
                yyerror((char*)"multi defined");
            } 
        }
#line 1400 "./output/grammar.tab.cpp"
    break;

  case 14: /* varDec: ID LBRAKET INT RBRAKET  */
#line 244 "grammar.y"
                                 {
            ASTNode* node = new DefVarASTNode((yyvsp[-3].str));
            Symbol* result = tempTable->insertArraySymbol((yyvsp[-3].str), atoi((yyvsp[-1].str)));
            if(result!=NULL){
                DefVarASTNode* var = (DefVarASTNode*) node;
                var -> setSymbolType((char*)"array",(yyvsp[-1].str));
                var -> setTheTable(tempTable);
                (yyval.astNode) = var;
            } 
            else {
                yyerror((char*)"multi defined");
            }
        }
#line 1418 "./output/grammar.tab.cpp"
    break;

  case 15: /* $@1: %empty  */
#line 262 "grammar.y"
              {
            // tempTable: 指向当前符号表
            // flagTable: 找a具体在哪个table 
            tempTable = tempTable->createChildTable(false);
            flagTable = tempTable;
        }
#line 1429 "./output/grammar.tab.cpp"
    break;

  case 16: /* compd: LBRACE $@1 stmts RBRACE  */
#line 268 "grammar.y"
                    {
           ASTNode* node = new StmtASTNode(stmtType::compoundStmt);
           node -> addChildNode((yyvsp[-1].astNode));
           (yyval.astNode) = node;
           rootTable->setTotalOffsetFromRoot(tempTable->getTotalOffset());
           tempTable = tempTable->getFather();
           flagTable = tempTable;
        }
#line 1442 "./output/grammar.tab.cpp"
    break;

  case 17: /* compd: error RBRACE  */
#line 276 "grammar.y"
                      {
           yyerrok;
       }
#line 1450 "./output/grammar.tab.cpp"
    break;

  case 18: /* stmts: stmts stmt  */
#line 282 "grammar.y"
                   {
            if((yyvsp[-1].astNode)==NULL)
                (yyval.astNode) = (yyvsp[0].astNode);
            else{
                (yyvsp[-1].astNode) -> getLastBrother() -> addBrother((yyvsp[0].astNode));
            }
        }
#line 1462 "./output/grammar.tab.cpp"
    break;

  case 19: /* stmts: %empty  */
#line 289 "grammar.y"
          {
            (yyval.astNode) = NULL;
        }
#line 1470 "./output/grammar.tab.cpp"
    break;

  case 20: /* initFor: def  */
#line 295 "grammar.y"
            {
            (yyval.astNode) = (yyvsp[0].astNode);
        }
#line 1478 "./output/grammar.tab.cpp"
    break;

  case 21: /* initFor: expr  */
#line 298 "grammar.y"
               {
            (yyval.astNode) = (yyvsp[0].astNode);
        }
#line 1486 "./output/grammar.tab.cpp"
    break;

  case 22: /* stmt: expr SEMICOLON  */
#line 304 "grammar.y"
                       {
            ASTNode* temp = new StmtASTNode(stmtType::expStmt);
            temp -> addChildNode((yyvsp[-1].astNode));
            (yyval.astNode) = temp;
        }
#line 1496 "./output/grammar.tab.cpp"
    break;

  case 23: /* stmt: def SEMICOLON  */
#line 309 "grammar.y"
                        {
            ASTNode* temp = new StmtASTNode(stmtType::defStmt);
            temp -> addChildNode((yyvsp[-1].astNode));
            (yyval.astNode) = temp;
        }
#line 1506 "./output/grammar.tab.cpp"
    break;

  case 24: /* stmt: compd  */
#line 314 "grammar.y"
                {
            (yyval.astNode) = (yyvsp[0].astNode);
        }
#line 1514 "./output/grammar.tab.cpp"
    break;

  case 25: /* stmt: PRINTF LP expr RP SEMICOLON  */
#line 317 "grammar.y"
                                     {
            ASTNode* temp = new StmtASTNode(stmtType::printStmt);
            temp->addChildNode((yyvsp[-2].astNode));
            (yyval.astNode)=temp;
        }
#line 1524 "./output/grammar.tab.cpp"
    break;

  case 26: /* stmt: RETURN SEMICOLON  */
#line 322 "grammar.y"
                           {
            // $$ = new StmtASTNode(stmtType::returnStmt);
            Symbol* sr = tempTable -> insertSymbol(std::string("RETURN"), Type::RETURN);
            if(sr!=NULL){
                (yyval.astNode) = new StmtASTNode(stmtType::returnStmt);
            } 
            else{
                yyerror((char*)"multi used RETURN");
            }
        }
#line 1539 "./output/grammar.tab.cpp"
    break;

  case 27: /* stmt: RETURN expr SEMICOLON  */
#line 332 "grammar.y"
                                {
            // ASTNode* temp = new StmtASTNode(stmtType::returnStmt);
            // temp->addChildNode($2);
            // $$ = temp;
            Symbol* sr = tempTable -> insertSymbol("RETURN", Type::RETURN);
            if(sr!=NULL){
                ASTNode* temp = new StmtASTNode(stmtType::returnStmt);
                temp->addChildNode((yyvsp[-1].astNode));
                (yyval.astNode) = temp;
            } 
            else{
                yyerror((char*)"multi used RETURN");
            }
        }
#line 1558 "./output/grammar.tab.cpp"
    break;

  case 28: /* stmt: IF LP expr RP stmt  */
#line 346 "grammar.y"
                             {
            (yyval.astNode) = new ConditionalASTNode((char*)"", conditionalType::IF, (yyvsp[-2].astNode), (yyvsp[0].astNode));
        }
#line 1566 "./output/grammar.tab.cpp"
    break;

  case 29: /* stmt: IF LP expr RP stmt ELSE stmt  */
#line 349 "grammar.y"
                                       {
            (yyval.astNode) = new ConditionalASTNode((char*)"", conditionalType::IF, (yyvsp[-4].astNode), (yyvsp[-2].astNode), (yyvsp[0].astNode));
        }
#line 1574 "./output/grammar.tab.cpp"
    break;

  case 30: /* stmt: WHILE LP expr RP stmt  */
#line 352 "grammar.y"
                                {
            (yyval.astNode) = new LoopASTNode((char*)"", LoopType::WHILE, (yyvsp[0].astNode), (yyvsp[-2].astNode));
        }
#line 1582 "./output/grammar.tab.cpp"
    break;

  case 31: /* stmt: FOR LP SEMICOLON SEMICOLON RP stmt  */
#line 355 "grammar.y"
                                            {
            (yyval.astNode) = new LoopASTNode((char*)"", LoopType::FOR, (yyvsp[0].astNode), NULL, NULL, NULL);
        }
#line 1590 "./output/grammar.tab.cpp"
    break;

  case 32: /* stmt: FOR LP initFor SEMICOLON SEMICOLON RP stmt  */
#line 358 "grammar.y"
                                                     {
            (yyval.astNode) = new LoopASTNode((char*)"", LoopType::FOR, (yyvsp[0].astNode), (yyvsp[-4].astNode), NULL, NULL);
        }
#line 1598 "./output/grammar.tab.cpp"
    break;

  case 33: /* stmt: FOR LP SEMICOLON expr SEMICOLON RP stmt  */
#line 361 "grammar.y"
                                                  {
            (yyval.astNode) = new LoopASTNode((char*)"", LoopType::FOR, (yyvsp[0].astNode), NULL, (yyvsp[-3].astNode), NULL);
        }
#line 1606 "./output/grammar.tab.cpp"
    break;

  case 34: /* stmt: FOR LP SEMICOLON SEMICOLON expr RP stmt  */
#line 364 "grammar.y"
                                                  {
            (yyval.astNode) = new LoopASTNode((char*)"", LoopType::FOR, (yyvsp[0].astNode), NULL, NULL, (yyvsp[-2].astNode));
        }
#line 1614 "./output/grammar.tab.cpp"
    break;

  case 35: /* stmt: FOR LP initFor SEMICOLON expr SEMICOLON RP stmt  */
#line 367 "grammar.y"
                                                          {
            (yyval.astNode) = new LoopASTNode((char*)"", LoopType::FOR, (yyvsp[0].astNode), (yyvsp[-5].astNode), (yyvsp[-3].astNode), NULL);
        }
#line 1622 "./output/grammar.tab.cpp"
    break;

  case 36: /* stmt: FOR LP initFor SEMICOLON SEMICOLON expr RP stmt  */
#line 370 "grammar.y"
                                                          {
            (yyval.astNode) = new LoopASTNode((char*)"", LoopType::FOR, (yyvsp[0].astNode), (yyvsp[-5].astNode), NULL, (yyvsp[-2].astNode));
        }
#line 1630 "./output/grammar.tab.cpp"
    break;

  case 37: /* stmt: FOR LP SEMICOLON expr SEMICOLON expr RP stmt  */
#line 373 "grammar.y"
                                                       {
            (yyval.astNode) = new LoopASTNode((char*)"", LoopType::FOR, (yyvsp[0].astNode), NULL, (yyvsp[-4].astNode), (yyvsp[-2].astNode));
        }
#line 1638 "./output/grammar.tab.cpp"
    break;

  case 38: /* stmt: FOR LP initFor SEMICOLON expr SEMICOLON expr RP stmt  */
#line 376 "grammar.y"
                                                               {
            (yyval.astNode) = new LoopASTNode((char*)"", LoopType::FOR, (yyvsp[0].astNode), (yyvsp[-6].astNode), (yyvsp[-4].astNode), (yyvsp[-2].astNode));
        }
#line 1646 "./output/grammar.tab.cpp"
    break;

  case 39: /* stmt: error SEMICOLON  */
#line 379 "grammar.y"
                         {
            yyerrok;
        }
#line 1654 "./output/grammar.tab.cpp"
    break;

  case 40: /* def: specifier decList  */
#line 385 "grammar.y"
                         {
            DefVarASTNode* temp = (DefVarASTNode*)(yyvsp[0].astNode);
            temp->setSymbolType((yyvsp[-1].str));
            (yyval.astNode) = temp;
        }
#line 1664 "./output/grammar.tab.cpp"
    break;

  case 41: /* def: error SEMICOLON  */
#line 390 "grammar.y"
                         {
            yyerrok;
        }
#line 1672 "./output/grammar.tab.cpp"
    break;

  case 42: /* decList: dec  */
#line 396 "grammar.y"
            {
            (yyval.astNode) = (yyvsp[0].astNode);
        }
#line 1680 "./output/grammar.tab.cpp"
    break;

  case 43: /* decList: dec COMMA decList  */
#line 399 "grammar.y"
                            {
            (yyvsp[-2].astNode) -> getLastBrother() -> addBrother((yyvsp[0].astNode));
            (yyval.astNode) = (yyvsp[-2].astNode);
        }
#line 1689 "./output/grammar.tab.cpp"
    break;

  case 44: /* dec: varDec  */
#line 406 "grammar.y"
               {
            (yyval.astNode) = (yyvsp[0].astNode);
        }
#line 1697 "./output/grammar.tab.cpp"
    break;

  case 45: /* dec: varDec ASSIGN expr  */
#line 409 "grammar.y"
                             {
            (yyvsp[-2].astNode) -> addChildNode((yyvsp[0].astNode));
            (yyval.astNode) = (yyvsp[-2].astNode);
        }
#line 1706 "./output/grammar.tab.cpp"
    break;

  case 46: /* expr: expr ASSIGN expr  */
#line 416 "grammar.y"
                        {
            ASTNode* temp=NULL;
            if((yyvsp[-2].astNode)->getNodeType()==ASTNodeType::op){
                OpASTNode* left=(OpASTNode*)(yyvsp[-2].astNode);
                if(left->getType()==opType::getArrayValue){
                    temp = new OpASTNode((char*)"=", opType::assignArrayValue);
                }
                else{
                    temp = new OpASTNode((char*)"=", opType::assign);
                }
            }
            else{
                temp = new OpASTNode((char*)"=", opType::assign);
            }
            temp->addChildNode((yyvsp[-2].astNode));
            (yyvsp[-2].astNode)->addBrother((yyvsp[0].astNode));
            (yyval.astNode)=temp;
        }
#line 1729 "./output/grammar.tab.cpp"
    break;

  case 47: /* expr: expr AND expr  */
#line 434 "grammar.y"
                        {
            ASTNode* temp = new OpASTNode((char*)"&&",opType::andop);
            temp->addChildNode((yyvsp[-2].astNode));
            (yyvsp[-2].astNode)->addBrother((yyvsp[0].astNode));
            (yyvsp[0].astNode)->setParent(temp);
            (yyval.astNode)=temp;

        }
#line 1742 "./output/grammar.tab.cpp"
    break;

  case 48: /* expr: expr OR expr  */
#line 442 "grammar.y"
                       {
            ASTNode* temp = new OpASTNode((char*)"||",opType::orop);
            temp->addChildNode((yyvsp[-2].astNode));
            (yyvsp[-2].astNode)->addBrother((yyvsp[0].astNode));
            (yyval.astNode)=temp;
        }
#line 1753 "./output/grammar.tab.cpp"
    break;

  case 49: /* expr: expr RELOP expr  */
#line 448 "grammar.y"
                          {
            ASTNode* temp=new OpASTNode((yyvsp[-1].str),opType::relop);
            temp->addChildNode((yyvsp[-2].astNode));
            (yyvsp[-2].astNode)->addBrother((yyvsp[0].astNode));
            (yyval.astNode)=temp;
        }
#line 1764 "./output/grammar.tab.cpp"
    break;

  case 50: /* expr: expr ADD expr  */
#line 454 "grammar.y"
                        {
            ASTNode* temp = new OpASTNode((char*)"+",opType::add);
            temp->addChildNode((yyvsp[-2].astNode));
            (yyvsp[-2].astNode)->addBrother((yyvsp[0].astNode));
            (yyval.astNode)=temp;

        }
#line 1776 "./output/grammar.tab.cpp"
    break;

  case 51: /* expr: expr SUBTRACT expr  */
#line 461 "grammar.y"
                             {
            ASTNode* temp = new OpASTNode((char*)"-",opType::subtract);
            temp->addChildNode((yyvsp[-2].astNode));
            (yyvsp[-2].astNode)->addBrother((yyvsp[0].astNode));
            (yyval.astNode)=temp;

        }
#line 1788 "./output/grammar.tab.cpp"
    break;

  case 52: /* expr: expr MULTIPLY expr  */
#line 468 "grammar.y"
                             {
            ASTNode* temp = new OpASTNode((char*)"*",opType::multiply);
            temp->addChildNode((yyvsp[-2].astNode));
            (yyvsp[-2].astNode)->addBrother((yyvsp[0].astNode));
            (yyval.astNode)=temp;

        }
#line 1800 "./output/grammar.tab.cpp"
    break;

  case 53: /* expr: expr DIVIDE expr  */
#line 475 "grammar.y"
                           {
            ASTNode* temp = new OpASTNode((char*)"/",opType::divide);
            temp->addChildNode((yyvsp[-2].astNode));
            (yyvsp[-2].astNode)->addBrother((yyvsp[0].astNode));
            (yyval.astNode)=temp;
        }
#line 1811 "./output/grammar.tab.cpp"
    break;

  case 54: /* expr: expr MOD expr  */
#line 481 "grammar.y"
                        {
            ASTNode* temp = new OpASTNode((char*)"%",opType::mod);
            temp->addChildNode((yyvsp[-2].astNode));
            (yyvsp[-2].astNode)->addBrother((yyvsp[0].astNode));
            (yyval.astNode)=temp;
        }
#line 1822 "./output/grammar.tab.cpp"
    break;

  case 55: /* expr: expr POW expr  */
#line 487 "grammar.y"
                        {
            ASTNode* temp = new OpASTNode((char*)"^",opType::pow);
            temp->addChildNode((yyvsp[-2].astNode));
            (yyvsp[-2].astNode)->addBrother((yyvsp[0].astNode));
            (yyval.astNode)=temp;
        }
#line 1833 "./output/grammar.tab.cpp"
    break;

  case 56: /* expr: MULTIPLY expr  */
#line 493 "grammar.y"
                        {
            ASTNode* temp = new OpASTNode((char*)"-",opType::negative);
            temp->addChildNode((yyvsp[0].astNode));
            (yyval.astNode)=temp;

        }
#line 1844 "./output/grammar.tab.cpp"
    break;

  case 57: /* expr: LP expr RP  */
#line 499 "grammar.y"
                    {
            (yyval.astNode)=(yyvsp[-1].astNode);
        }
#line 1852 "./output/grammar.tab.cpp"
    break;

  case 58: /* expr: NOT expr  */
#line 502 "grammar.y"
                   {
            ASTNode* temp = new OpASTNode((char*)"!",opType::notop);
            temp->addChildNode((yyvsp[0].astNode));
            (yyval.astNode)=temp;
        }
#line 1862 "./output/grammar.tab.cpp"
    break;

  case 59: /* expr: expr LBRAKET expr RBRAKET  */
#line 507 "grammar.y"
                                   {
            (yyval.astNode)=NULL;
        }
#line 1870 "./output/grammar.tab.cpp"
    break;

  case 60: /* expr: ID LBRAKET expr RBRAKET  */
#line 510 "grammar.y"
                                 {
            ASTNode* temp = new OpASTNode((char*)"[]",opType::getArrayValue);
            ASTNode* var = new VarASTNode((char*)(yyvsp[-3].str));
            temp->addChildNode(var);
            var->addBrother((yyvsp[-1].astNode));
            (yyval.astNode)=temp;
        }
#line 1882 "./output/grammar.tab.cpp"
    break;

  case 61: /* expr: ADDR ID  */
#line 517 "grammar.y"
                 {
            ASTNode* temp = new OpASTNode((char*)"&", opType::signaland);
            ASTNode* child = new VarASTNode((char*)(yyvsp[0].str));
            temp -> addChildNode(child);
            (yyval.astNode) = temp;
        }
#line 1893 "./output/grammar.tab.cpp"
    break;

  case 62: /* expr: MULTIPLY ID  */
#line 523 "grammar.y"
                     {
            ASTNode* temp = new OpASTNode((char*)"*",opType::getvalue);
            ASTNode* var = new VarASTNode((char*)(yyvsp[0].str));
            temp->addChildNode(var);
            (yyval.astNode)=temp;
        }
#line 1904 "./output/grammar.tab.cpp"
    break;

  case 63: /* expr: ID  */
#line 529 "grammar.y"
             {
            flagTable = tempTable->findSymbol((yyvsp[0].str));
            if(flagTable!=NULL){
                VarASTNode* var = new VarASTNode((yyvsp[0].str));
                var -> setTheTable(flagTable);
                (yyval.astNode) = var;
                flagTable = tempTable;
            }
            else{
                yyerror((char*)"use variable undifined");
            }
        }
#line 1921 "./output/grammar.tab.cpp"
    break;

  case 64: /* expr: INT  */
#line 541 "grammar.y"
              {
            (yyval.astNode) = new LiteralASTNode((yyvsp[0].str));
        }
#line 1929 "./output/grammar.tab.cpp"
    break;

  case 65: /* expr: error RP  */
#line 544 "grammar.y"
                  {
            yyerrok;
        }
#line 1937 "./output/grammar.tab.cpp"
    break;


#line 1941 "./output/grammar.tab.cpp"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 549 "grammar.y"


int yyerror(char* s){
    printf("Syntax error: %s\n", s);
    exit(1);
}

std::string replaceExtName(char* fileName) {
    int dotIndex = 0;
    int nameLength = strlen(fileName);
    for (int i = nameLength - 1; i >= 0; i--) {
        if (fileName[i] == '.') {
            dotIndex = i;
            break;
        }
    }
    char* buf = new char[dotIndex];
    strncpy(buf, fileName, dotIndex);
    std::string rev(buf);
    rev += ".asm";
    return rev;
}
/* 
YACC源程序的程序部分包括：
主程序 main()
错误信息执行程序 yyerror(s)
词法分析程序yylex(),可以与LEX进行整合
用户在语义动作中用到的子程序
YACC约定：
传递词法分析程序token属性值的全程变量名：yylval
生成的语法分析程序名为：yyparse();
 */

// 暂时没有那么多可选参数，只能从头开始运行
int main(int argc, char* argv[]){
    char* filename = NULL;
    InterMediate* im;
    /* printf(argv[1]); */
    if(argc>=2){
        //printf(argv[1]);
        filename = argv[1];
    }
    //printf("%s\n",filename);
    //printf("begin1.\n");
    FILE* file = fopen(filename, "r");
    //printf("begin2.\n");
    yyin = file;
    //printf("begin3.\n");
    while(!feof(yyin))
    {
        yyparse();
    }
    root->printTree();
    std::cout << "root->printTree();" << std::endl;
}
