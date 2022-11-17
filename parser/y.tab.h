/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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
