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
#line 1 "parser.y"

#include <stdio.h>
extern FILE* yyout;
void yyerror(const char* msg) {}
int yylex();

#line 78 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    STR = 258,                     /* STR  */
    CHARACTER = 259,               /* CHARACTER  */
    CONST = 260,                   /* CONST  */
    INT = 261,                     /* INT  */
    CHAR = 262,                    /* CHAR  */
    VOID = 263,                    /* VOID  */
    MAIN = 264,                    /* MAIN  */
    IF = 265,                      /* IF  */
    ELSE = 266,                    /* ELSE  */
    DO = 267,                      /* DO  */
    WHILE = 268,                   /* WHILE  */
    FOR = 269,                     /* FOR  */
    SCAN = 270,                    /* SCAN  */
    PRINT = 271,                   /* PRINT  */
    RETURN = 272,                  /* RETURN  */
    ID = 273,                      /* ID  */
    NUMBER = 274,                  /* NUMBER  */
    ZERO = 275,                    /* ZERO  */
    LPARENT = 276,                 /* LPARENT  */
    RPARENT = 277,                 /* RPARENT  */
    LBRACE = 278,                  /* LBRACE  */
    RBRACE = 279,                  /* RBRACE  */
    RBRACK = 280,                  /* RBRACK  */
    LBRACK = 281,                  /* LBRACK  */
    SEMICOLON = 282,               /* SEMICOLON  */
    COMMA = 283,                   /* COMMA  */
    ASSIGN = 284,                  /* ASSIGN  */
    NEQ = 285,                     /* NEQ  */
    EQL = 286,                     /* EQL  */
    LSS = 287,                     /* LSS  */
    GRE = 288,                     /* GRE  */
    LEQ = 289,                     /* LEQ  */
    GEQ = 290,                     /* GEQ  */
    ADD = 291,                     /* ADD  */
    SUB = 292,                     /* SUB  */
    MUL = 293,                     /* MUL  */
    DIV = 294                      /* DIV  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define STR 258
#define CHARACTER 259
#define CONST 260
#define INT 261
#define CHAR 262
#define VOID 263
#define MAIN 264
#define IF 265
#define ELSE 266
#define DO 267
#define WHILE 268
#define FOR 269
#define SCAN 270
#define PRINT 271
#define RETURN 272
#define ID 273
#define NUMBER 274
#define ZERO 275
#define LPARENT 276
#define RPARENT 277
#define LBRACE 278
#define RBRACE 279
#define RBRACK 280
#define LBRACK 281
#define SEMICOLON 282
#define COMMA 283
#define ASSIGN 284
#define NEQ 285
#define EQL 286
#define LSS 287
#define GRE 288
#define LEQ 289
#define GEQ 290
#define ADD 291
#define SUB 292
#define MUL 293
#define DIV 294

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;

int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_STR = 3,                        /* STR  */
  YYSYMBOL_CHARACTER = 4,                  /* CHARACTER  */
  YYSYMBOL_CONST = 5,                      /* CONST  */
  YYSYMBOL_INT = 6,                        /* INT  */
  YYSYMBOL_CHAR = 7,                       /* CHAR  */
  YYSYMBOL_VOID = 8,                       /* VOID  */
  YYSYMBOL_MAIN = 9,                       /* MAIN  */
  YYSYMBOL_IF = 10,                        /* IF  */
  YYSYMBOL_ELSE = 11,                      /* ELSE  */
  YYSYMBOL_DO = 12,                        /* DO  */
  YYSYMBOL_WHILE = 13,                     /* WHILE  */
  YYSYMBOL_FOR = 14,                       /* FOR  */
  YYSYMBOL_SCAN = 15,                      /* SCAN  */
  YYSYMBOL_PRINT = 16,                     /* PRINT  */
  YYSYMBOL_RETURN = 17,                    /* RETURN  */
  YYSYMBOL_ID = 18,                        /* ID  */
  YYSYMBOL_NUMBER = 19,                    /* NUMBER  */
  YYSYMBOL_ZERO = 20,                      /* ZERO  */
  YYSYMBOL_LPARENT = 21,                   /* LPARENT  */
  YYSYMBOL_RPARENT = 22,                   /* RPARENT  */
  YYSYMBOL_LBRACE = 23,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 24,                    /* RBRACE  */
  YYSYMBOL_RBRACK = 25,                    /* RBRACK  */
  YYSYMBOL_LBRACK = 26,                    /* LBRACK  */
  YYSYMBOL_SEMICOLON = 27,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 28,                     /* COMMA  */
  YYSYMBOL_ASSIGN = 29,                    /* ASSIGN  */
  YYSYMBOL_NEQ = 30,                       /* NEQ  */
  YYSYMBOL_EQL = 31,                       /* EQL  */
  YYSYMBOL_LSS = 32,                       /* LSS  */
  YYSYMBOL_GRE = 33,                       /* GRE  */
  YYSYMBOL_LEQ = 34,                       /* LEQ  */
  YYSYMBOL_GEQ = 35,                       /* GEQ  */
  YYSYMBOL_ADD = 36,                       /* ADD  */
  YYSYMBOL_SUB = 37,                       /* SUB  */
  YYSYMBOL_MUL = 38,                       /* MUL  */
  YYSYMBOL_DIV = 39,                       /* DIV  */
  YYSYMBOL_YYACCEPT = 40,                  /* $accept  */
  YYSYMBOL_s = 41,                         /* s  */
  YYSYMBOL_add_cal = 42,                   /* add_cal  */
  YYSYMBOL_mul_cal = 43,                   /* mul_cal  */
  YYSYMBOL_relation_cal = 44,              /* relation_cal  */
  YYSYMBOL_character = 45,                 /* character  */
  YYSYMBOL_type = 46,                      /* type  */
  YYSYMBOL_string = 47,                    /* string  */
  YYSYMBOL_program = 48,                   /* program  */
  YYSYMBOL_declaration = 49,               /* declaration  */
  YYSYMBOL_const_declaration = 50,         /* const_declaration  */
  YYSYMBOL_const_definition = 51,          /* const_definition  */
  YYSYMBOL_const_assign = 52,              /* const_assign  */
  YYSYMBOL_unsigned_number = 53,           /* unsigned_number  */
  YYSYMBOL_signed_number = 54,             /* signed_number  */
  YYSYMBOL_num_with_sign = 55,             /* num_with_sign  */
  YYSYMBOL_num_without_sign = 56,          /* num_without_sign  */
  YYSYMBOL_variable_declaration = 57,      /* variable_declaration  */
  YYSYMBOL_variable_definition = 58,       /* variable_definition  */
  YYSYMBOL_variable_assign = 59,           /* variable_assign  */
  YYSYMBOL_variable = 60,                  /* variable  */
  YYSYMBOL_function = 61,                  /* function  */
  YYSYMBOL_void = 62,                      /* void  */
  YYSYMBOL_general = 63,                   /* general  */
  YYSYMBOL_main = 64,                      /* main  */
  YYSYMBOL_declaration_head = 65,          /* declaration_head  */
  YYSYMBOL_param_list = 66,                /* param_list  */
  YYSYMBOL_param = 67,                     /* param  */
  YYSYMBOL_complex_sentence = 68,          /* complex_sentence  */
  YYSYMBOL_expression = 69,                /* expression  */
  YYSYMBOL_expr = 70,                      /* expr  */
  YYSYMBOL_item = 71,                      /* item  */
  YYSYMBOL_fact = 72,                      /* fact  */
  YYSYMBOL_sentence = 73,                  /* sentence  */
  YYSYMBOL_assign_sentence = 74,           /* assign_sentence  */
  YYSYMBOL_condition_sentence = 75,        /* condition_sentence  */
  YYSYMBOL_condition = 76,                 /* condition  */
  YYSYMBOL_circle_sentence = 77,           /* circle_sentence  */
  YYSYMBOL_step = 78,                      /* step  */
  YYSYMBOL_call_with_return = 79,          /* call_with_return  */
  YYSYMBOL_call_without_return = 80,       /* call_without_return  */
  YYSYMBOL_value_param_list = 81,          /* value_param_list  */
  YYSYMBOL_table = 82,                     /* table  */
  YYSYMBOL_sentence_list = 83,             /* sentence_list  */
  YYSYMBOL_read_sentence = 84,             /* read_sentence  */
  YYSYMBOL_id_list = 85,                   /* id_list  */
  YYSYMBOL_write_sentence = 86,            /* write_sentence  */
  YYSYMBOL_return_sentence = 87            /* return_sentence  */
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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  21
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   263

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  103
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  218

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   294


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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    50,    50,    51,    55,    56,    60,    61,    65,    66,
      67,    68,    69,    70,    74,    78,    79,    83,    88,    89,
      93,    94,    98,    99,   103,   104,   108,   109,   110,   111,
     116,   120,   124,   125,   126,   130,   131,   135,   136,   140,
     144,   145,   149,   150,   156,   157,   158,   162,   166,   170,
     174,   178,   179,   183,   184,   188,   192,   193,   197,   198,
     202,   203,   207,   208,   209,   210,   211,   212,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   229,   230,
     234,   235,   239,   240,   244,   245,   246,   250,   254,   258,
     262,   263,   267,   268,   272,   273,   277,   281,   282,   286,
     287,   288,   292,   293
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
  "\"end of file\"", "error", "\"invalid token\"", "STR", "CHARACTER",
  "CONST", "INT", "CHAR", "VOID", "MAIN", "IF", "ELSE", "DO", "WHILE",
  "FOR", "SCAN", "PRINT", "RETURN", "ID", "NUMBER", "ZERO", "LPARENT",
  "RPARENT", "LBRACE", "RBRACE", "RBRACK", "LBRACK", "SEMICOLON", "COMMA",
  "ASSIGN", "NEQ", "EQL", "LSS", "GRE", "LEQ", "GEQ", "ADD", "SUB", "MUL",
  "DIV", "$accept", "s", "add_cal", "mul_cal", "relation_cal", "character",
  "type", "string", "program", "declaration", "const_declaration",
  "const_definition", "const_assign", "unsigned_number", "signed_number",
  "num_with_sign", "num_without_sign", "variable_declaration",
  "variable_definition", "variable_assign", "variable", "function", "void",
  "general", "main", "declaration_head", "param_list", "param",
  "complex_sentence", "expression", "expr", "item", "fact", "sentence",
  "assign_sentence", "condition_sentence", "condition", "circle_sentence",
  "step", "call_with_return", "call_without_return", "value_param_list",
  "table", "sentence_list", "read_sentence", "id_list", "write_sentence",
  "return_sentence", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-125)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-51)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     145,   112,  -125,  -125,    20,   127,    -8,  -125,  -125,    27,
       1,   112,    34,  -125,  -125,  -125,  -125,    81,    87,    94,
     115,  -125,  -125,    39,   119,  -125,   129,   155,   143,   144,
    -125,   112,   158,   146,   150,   112,   106,   143,   155,   112,
     147,  -125,   170,   167,    22,   172,   169,   171,  -125,  -125,
     179,  -125,  -125,    87,  -125,   177,   183,  -125,   106,   106,
    -125,  -125,  -125,  -125,   165,    27,   184,  -125,   146,   112,
      27,  -125,  -125,    22,   138,   185,    27,   190,   186,  -125,
    -125,   112,  -125,   187,  -125,  -125,   168,  -125,   191,   168,
     192,   193,   194,   195,    23,    80,  -125,  -125,  -125,   196,
     197,   198,   199,   200,   201,   202,   203,    92,   204,    92,
     213,   214,    36,    92,  -125,    92,    92,    92,   152,  -125,
    -125,  -125,  -125,  -125,  -125,  -125,  -125,    48,    92,   106,
     106,   103,  -125,  -125,   166,  -125,   116,  -125,   211,  -125,
     215,   212,   189,  -125,    -1,  -125,    62,    -6,    -2,   122,
     216,   207,     0,   122,   210,    92,    92,    26,   116,  -125,
    -125,  -125,  -125,  -125,  -125,  -125,  -125,   103,    92,  -125,
    -125,   103,   168,    92,   168,    92,  -125,   221,  -125,    92,
    -125,  -125,  -125,    92,   217,  -125,   218,    55,  -125,   116,
     122,  -125,   208,   219,  -125,    41,  -125,    45,   122,    92,
    -125,  -125,   168,  -125,    92,  -125,   122,  -125,   220,   224,
     222,   225,   122,   106,  -125,   223,   168,  -125
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,    15,    16,     0,     0,     0,     3,    18,    20,
       0,    21,     0,    19,    44,    45,    46,     0,     0,     0,
       0,     1,     2,    42,    39,    41,     0,    23,     0,     0,
      38,    52,     0,    25,     0,    52,     0,     0,    22,     0,
      42,    37,     0,     0,     0,     0,     0,     0,    35,    36,
       0,    30,    40,     0,    53,    51,     0,    14,     0,     0,
      29,    32,    27,    31,     0,     0,     0,    43,    24,     0,
       0,    33,    34,     0,     0,     0,     0,     0,     0,    28,
      26,    95,    49,     0,    54,    48,    55,    47,     0,     0,
       0,     0,     0,     0,     0,     0,    95,    76,    94,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   102,    91,     0,     0,     0,    73,
      68,    69,    71,    72,    74,    75,    77,    62,     0,     4,
       5,     0,    66,    65,    83,    57,    59,    61,     0,    67,
       0,     0,     0,    97,     0,    17,     0,     0,     0,    92,
       0,    90,     0,    78,     0,    91,     0,     0,    58,     8,
       9,    10,    11,    12,    13,     4,     5,     0,     0,     6,
       7,     0,     0,     0,     0,     0,    96,     0,   100,     0,
     101,   103,    88,     0,     0,    70,     0,     0,    64,    56,
      82,    60,    80,     0,    84,     0,    98,     0,    93,     0,
      88,    63,     0,    85,     0,    99,    79,    81,     0,     0,
       0,     0,     0,     0,    87,     0,     0,    86
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -125,  -125,   -49,  -125,  -125,   -27,    14,  -125,   239,  -125,
     137,    -4,   205,   -36,   -26,  -125,  -125,   148,    -5,  -125,
     226,  -125,  -125,  -125,  -125,  -125,   227,  -125,    44,  -104,
    -125,  -124,    49,   -86,  -125,  -125,  -107,  -125,  -125,   -85,
    -125,    66,  -125,   153,  -125,  -125,  -125,  -125
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,   131,   171,   168,   132,    28,   146,     7,     8,
      74,    10,    33,    61,   133,    63,    51,    11,    12,    24,
      25,    13,    14,    15,    16,    17,    43,    55,    75,   134,
     135,   136,   137,    98,    99,   100,   138,   101,   215,   139,
     103,   150,   151,    86,   104,   144,   105,   106
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      50,   102,   141,   108,   102,    26,    29,   158,   147,   148,
      23,   149,   152,   153,     6,    18,   180,    60,    62,     6,
     181,   176,    71,    72,   157,   184,    57,   177,    27,    19,
     165,   166,     1,   102,   165,   166,   165,   166,    20,   145,
      57,    48,    49,   189,   113,    42,    79,    80,   188,    42,
     114,   149,   187,    53,   127,    48,    49,   128,    58,    59,
     -50,    30,   165,   166,   190,    36,   193,   205,   204,   155,
      26,   195,   129,   130,   156,   197,    29,   165,   166,   198,
     201,   165,   166,    77,   178,   167,   192,   102,   194,   102,
     179,   165,   166,    71,    72,   206,    57,   208,   167,   167,
     167,   115,    31,   167,   167,    32,   116,    57,   167,   117,
     127,    48,    49,   128,    78,    34,   207,   102,     2,     3,
      83,   127,    48,    49,   128,    48,    49,    21,   129,   130,
     217,   102,     1,     2,     3,     4,    35,     9,   167,    58,
      59,   167,     9,     1,     2,     3,   167,    37,   167,   167,
       1,     2,     3,     4,   169,   170,    38,   167,   165,   166,
      39,    40,    88,   213,    89,    90,    91,    92,    93,    94,
      95,    41,    46,    36,    45,    96,   154,   214,    88,    97,
      89,    90,    91,    92,    93,    94,    95,    44,    54,    56,
      64,    96,    65,    66,    73,    97,   159,   160,   161,   162,
     163,   164,   165,   166,    67,    69,    70,    76,    84,    82,
      85,    87,   107,   109,   110,   111,   112,   140,   175,   202,
     191,   186,    81,   119,   120,   121,   122,   123,   124,   125,
     126,   142,   143,   172,   174,   183,   173,   185,   182,   196,
     200,   203,   210,   212,    22,   216,   199,   209,     0,   118,
       0,   211,     0,     0,     0,     0,     0,     0,    68,     0,
       0,     0,    47,    52
};

static const yytype_int16 yycheck[] =
{
      36,    86,   109,    89,    89,     9,    11,   131,   112,   113,
      18,   115,   116,   117,     0,     1,    22,    44,    44,     5,
      22,    22,    58,    59,   128,    25,     4,    28,    27,     9,
      36,    37,     5,   118,    36,    37,    36,    37,    18,     3,
       4,    19,    20,   167,    21,    31,    73,    73,    22,    35,
      27,   155,   156,    39,    18,    19,    20,    21,    36,    37,
      21,    27,    36,    37,   168,    26,   173,    22,    27,    21,
      74,   175,    36,    37,    26,   179,    81,    36,    37,   183,
      25,    36,    37,    69,    22,   134,   172,   172,   174,   174,
      28,    36,    37,   129,   130,   199,     4,   204,   147,   148,
     149,    21,    21,   152,   153,    18,    26,     4,   157,    29,
      18,    19,    20,    21,    70,    21,   202,   202,     6,     7,
      76,    18,    19,    20,    21,    19,    20,     0,    36,    37,
     216,   216,     5,     6,     7,     8,    21,     0,   187,    36,
      37,   190,     5,     5,     6,     7,   195,    28,   197,   198,
       5,     6,     7,     8,    38,    39,    27,   206,    36,    37,
       5,    18,    10,   212,    12,    13,    14,    15,    16,    17,
      18,    27,    22,    26,    28,    23,    24,   213,    10,    27,
      12,    13,    14,    15,    16,    17,    18,    29,    18,    22,
      18,    23,    23,    22,    29,    27,    30,    31,    32,    33,
      34,    35,    36,    37,    25,    28,    23,    23,    18,    24,
      24,    24,    21,    21,    21,    21,    21,    13,    29,    11,
     171,   155,    74,    27,    27,    27,    27,    27,    27,    27,
      27,    18,    18,    22,    22,    28,    21,    27,    22,    18,
      22,    22,    18,    18,     5,    22,    29,    27,    -1,    96,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    35,    37
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,     6,     7,     8,    41,    46,    48,    49,    50,
      51,    57,    58,    61,    62,    63,    64,    65,    46,     9,
      18,     0,    48,    18,    59,    60,    51,    27,    46,    58,
      27,    21,    18,    52,    21,    21,    26,    28,    27,     5,
      18,    27,    46,    66,    29,    28,    22,    66,    19,    20,
      53,    56,    60,    46,    18,    67,    22,     4,    36,    37,
      45,    53,    54,    55,    18,    23,    22,    25,    52,    28,
      23,    53,    53,    29,    50,    68,    23,    46,    68,    45,
      54,    57,    24,    68,    18,    24,    83,    24,    10,    12,
      13,    14,    15,    16,    17,    18,    23,    27,    73,    74,
      75,    77,    79,    80,    84,    86,    87,    21,    73,    21,
      21,    21,    21,    21,    27,    21,    26,    29,    83,    27,
      27,    27,    27,    27,    27,    27,    27,    18,    21,    36,
      37,    42,    45,    54,    69,    70,    71,    72,    76,    79,
      13,    76,    18,    18,    85,     3,    47,    69,    69,    69,
      81,    82,    69,    69,    24,    21,    26,    69,    71,    30,
      31,    32,    33,    34,    35,    36,    37,    42,    44,    38,
      39,    43,    22,    21,    22,    29,    22,    28,    22,    28,
      22,    22,    22,    28,    25,    27,    81,    69,    22,    71,
      69,    72,    73,    76,    73,    69,    18,    69,    69,    29,
      22,    25,    11,    22,    27,    22,    69,    73,    76,    27,
      18,    29,    18,    42,    53,    78,    22,    73
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    40,    41,    41,    42,    42,    43,    43,    44,    44,
      44,    44,    44,    44,    45,    46,    46,    47,    48,    48,
      49,    49,    50,    50,    51,    51,    52,    52,    52,    52,
      53,    54,    55,    55,    55,    56,    56,    57,    57,    58,
      59,    59,    60,    60,    61,    61,    61,    62,    63,    64,
      65,    66,    66,    67,    67,    68,    69,    69,    70,    70,
      71,    71,    72,    72,    72,    72,    72,    72,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    74,    74,
      75,    75,    76,    76,    77,    77,    77,    78,    79,    80,
      81,    81,    82,    82,    83,    83,    84,    85,    85,    86,
      86,    86,    87,    87
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     5,     3,     5,     3,     5,     3,
       1,     1,     1,     2,     2,     1,     1,     3,     2,     2,
       3,     1,     1,     4,     1,     1,     1,     8,     7,     7,
       2,     2,     0,     1,     4,     3,     3,     1,     2,     1,
       3,     1,     1,     4,     3,     1,     1,     1,     2,     2,
       4,     2,     2,     2,     2,     2,     1,     2,     3,     6,
       5,     7,     3,     1,     5,     6,    15,     1,     4,     4,
       1,     0,     1,     3,     2,     0,     4,     1,     3,     6,
       4,     4,     2,     4
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

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
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
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
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
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
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

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yyerror_range[1] = yylloc;
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
  *++yylsp = yylloc;

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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* s: s program  */
#line 50 "parser.y"
                                        { fprintf(yyout, "<程序>\n"); }
#line 1557 "y.tab.c"
    break;

  case 17: /* string: STR  */
#line 83 "parser.y"
                                        { fprintf(yyout, "<字符串>\n"); }
#line 1563 "y.tab.c"
    break;

  case 20: /* declaration: const_declaration  */
#line 93 "parser.y"
                                        { fprintf(yyout, "<常量说明>\n"); }
#line 1569 "y.tab.c"
    break;

  case 21: /* declaration: variable_declaration  */
#line 94 "parser.y"
                                        { fprintf(yyout, "<变量说明>\n"); }
#line 1575 "y.tab.c"
    break;

  case 26: /* const_assign: const_assign COMMA ID ASSIGN signed_number  */
#line 108 "parser.y"
                                                 { fprintf(yyout, "<常量定义>\n"); }
#line 1581 "y.tab.c"
    break;

  case 27: /* const_assign: ID ASSIGN signed_number  */
#line 109 "parser.y"
                                                 { fprintf(yyout, "<常量定义>\n"); }
#line 1587 "y.tab.c"
    break;

  case 28: /* const_assign: const_assign COMMA ID ASSIGN character  */
#line 110 "parser.y"
                                                 { fprintf(yyout, "<常量定义>\n"); }
#line 1593 "y.tab.c"
    break;

  case 29: /* const_assign: ID ASSIGN character  */
#line 111 "parser.y"
                                                 { fprintf(yyout, "<常量定义>\n"); }
#line 1599 "y.tab.c"
    break;

  case 30: /* unsigned_number: num_without_sign  */
#line 116 "parser.y"
                                { fprintf(yyout, "<无符号整数>\n"); }
#line 1605 "y.tab.c"
    break;

  case 31: /* signed_number: num_with_sign  */
#line 120 "parser.y"
                                { fprintf(yyout, "<整数>\n"); }
#line 1611 "y.tab.c"
    break;

  case 42: /* variable: ID  */
#line 149 "parser.y"
                                        { fprintf(yyout, "<变量定义>\n"); }
#line 1617 "y.tab.c"
    break;

  case 43: /* variable: ID LBRACK unsigned_number RBRACK  */
#line 150 "parser.y"
                                        { fprintf(yyout, "<变量定义>\n"); }
#line 1623 "y.tab.c"
    break;

  case 44: /* function: void  */
#line 156 "parser.y"
                { fprintf(yyout, "<无返回值函数定义>\n"); }
#line 1629 "y.tab.c"
    break;

  case 45: /* function: general  */
#line 157 "parser.y"
                { fprintf(yyout, "<有返回值函数定义>\n"); }
#line 1635 "y.tab.c"
    break;

  case 46: /* function: main  */
#line 158 "parser.y"
                { fprintf(yyout, "<主函数>\n"); }
#line 1641 "y.tab.c"
    break;

  case 50: /* declaration_head: type ID  */
#line 174 "parser.y"
                                { fprintf(yyout, "<声明头部>\n"); }
#line 1647 "y.tab.c"
    break;

  case 51: /* param_list: type param  */
#line 178 "parser.y"
                                { fprintf(yyout, "<参数表>\n"); }
#line 1653 "y.tab.c"
    break;

  case 55: /* complex_sentence: const_declaration variable_declaration sentence_list  */
#line 188 "parser.y"
                                                              { fprintf(yyout, "<复合语句>\n"); }
#line 1659 "y.tab.c"
    break;

  case 56: /* expression: expression add_cal item  */
#line 192 "parser.y"
                                { fprintf(yyout, "<表达式>\n"); }
#line 1665 "y.tab.c"
    break;

  case 59: /* expr: item  */
#line 198 "parser.y"
                                { fprintf(yyout, "<项>\n"); }
#line 1671 "y.tab.c"
    break;

  case 61: /* item: fact  */
#line 203 "parser.y"
                                { fprintf(yyout, "<因子>\n"); }
#line 1677 "y.tab.c"
    break;

  case 62: /* fact: ID  */
#line 207 "parser.y"
                                        { /*fprintf(yyout, "<标识符>");*/ }
#line 1683 "y.tab.c"
    break;

  case 66: /* fact: character  */
#line 211 "parser.y"
                                        { /*fprintf(yyout, "<字符>");*/ }
#line 1689 "y.tab.c"
    break;

  case 67: /* fact: call_with_return  */
#line 212 "parser.y"
                                        { fprintf(yyout, "<有返回值函数调用语句>\n"); }
#line 1695 "y.tab.c"
    break;

  case 68: /* sentence: condition_sentence SEMICOLON  */
#line 216 "parser.y"
                                                { fprintf(yyout, "<条件语句>\n"); }
#line 1701 "y.tab.c"
    break;

  case 69: /* sentence: circle_sentence SEMICOLON  */
#line 217 "parser.y"
                                                { fprintf(yyout, "<循环语句>\n"); }
#line 1707 "y.tab.c"
    break;

  case 70: /* sentence: LBRACE sentence_list RBRACE SEMICOLON  */
#line 218 "parser.y"
                                                { fprintf(yyout, "<语句列>\n"); }
#line 1713 "y.tab.c"
    break;

  case 71: /* sentence: call_with_return SEMICOLON  */
#line 219 "parser.y"
                                                { fprintf(yyout, "<有返回值函数调用语句>\n"); }
#line 1719 "y.tab.c"
    break;

  case 72: /* sentence: call_without_return SEMICOLON  */
#line 220 "parser.y"
                                                { fprintf(yyout, "<无返回值函数调用语句>\n"); }
#line 1725 "y.tab.c"
    break;

  case 73: /* sentence: assign_sentence SEMICOLON  */
#line 221 "parser.y"
                                                { fprintf(yyout, "<赋值语句>\n"); }
#line 1731 "y.tab.c"
    break;

  case 74: /* sentence: read_sentence SEMICOLON  */
#line 222 "parser.y"
                                                { fprintf(yyout, "<读语句>\n"); }
#line 1737 "y.tab.c"
    break;

  case 75: /* sentence: write_sentence SEMICOLON  */
#line 223 "parser.y"
                                                { fprintf(yyout, "<写语句>\n"); }
#line 1743 "y.tab.c"
    break;

  case 77: /* sentence: return_sentence SEMICOLON  */
#line 225 "parser.y"
                                                { fprintf(yyout, "<返回语句>\n"); }
#line 1749 "y.tab.c"
    break;

  case 82: /* condition: expression relation_cal expression  */
#line 239 "parser.y"
                                         { fprintf(yyout, "<条件>\n"); }
#line 1755 "y.tab.c"
    break;

  case 83: /* condition: expression  */
#line 240 "parser.y"
                                         { fprintf(yyout, "<条件>\n"); }
#line 1761 "y.tab.c"
    break;

  case 87: /* step: unsigned_number  */
#line 250 "parser.y"
                                { fprintf(yyout, "<步长>\n"); }
#line 1767 "y.tab.c"
    break;

  case 90: /* value_param_list: table  */
#line 262 "parser.y"
                        { fprintf(yyout, "<值参数表>\n"); }
#line 1773 "y.tab.c"
    break;


#line 1777 "y.tab.c"

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
  *++yylsp = yyloc;

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

  yyerror_range[1] = yylloc;
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
                      yytoken, &yylval, &yylloc);
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 296 "parser.y"


int main() {
    extern FILE *yyin;
    //yyin = fopen("testfile.txt", "r");
    extern FILE *yyout;
    //yyout = fopen("output.txt", "w");
    while(yyparse()){}
    return 0;
}
