/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 17 "mini_l.y" /* yacc.c:1909  */

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


#line 130 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
