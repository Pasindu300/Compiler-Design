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
# define YYDEBUG 0
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
    ID = 258,                      /* ID  */
    INT_LITERAL = 259,             /* INT_LITERAL  */
    FLOAT_LITERAL = 260,           /* FLOAT_LITERAL  */
    NONZERO = 261,                 /* NONZERO  */
    SEMICOLON = 262,               /* SEMICOLON  */
    PLUS = 263,                    /* PLUS  */
    MINUS = 264,                   /* MINUS  */
    ASTERISK = 265,                /* ASTERISK  */
    SLASH = 266,                   /* SLASH  */
    EQUALS = 267,                  /* EQUALS  */
    LESS_THAN = 268,               /* LESS_THAN  */
    GREATER_THAN = 269,            /* GREATER_THAN  */
    LESS_THAN_EQUALS = 270,        /* LESS_THAN_EQUALS  */
    GREATER_THAN_EQUALS = 271,     /* GREATER_THAN_EQUALS  */
    NOT_EQUALS = 272,              /* NOT_EQUALS  */
    LPAREN = 273,                  /* LPAREN  */
    RPAREN = 274,                  /* RPAREN  */
    LBRACKET = 275,                /* LBRACKET  */
    RBRACKET = 276,                /* RBRACKET  */
    LBRACE = 277,                  /* LBRACE  */
    RBRACE = 278,                  /* RBRACE  */
    COMMA = 279,                   /* COMMA  */
    COLON = 280,                   /* COLON  */
    DOT = 281,                     /* DOT  */
    ATTRIBUTE = 282,               /* ATTRIBUTE  */
    CLASS = 283,                   /* CLASS  */
    INTEGER = 284,                 /* INTEGER  */
    FLOAT = 285,                   /* FLOAT  */
    VOID = 286,                    /* VOID  */
    IF = 287,                      /* IF  */
    ELSE = 288,                    /* ELSE  */
    WHILE = 289,                   /* WHILE  */
    READ = 290,                    /* READ  */
    WRITE = 291,                   /* WRITE  */
    RETURN = 292,                  /* RETURN  */
    OR = 293,                      /* OR  */
    AND = 294,                     /* AND  */
    NOT = 295,                     /* NOT  */
    FUNCTION = 296,                /* FUNCTION  */
    CONSTRUCTOR = 297,             /* CONSTRUCTOR  */
    ISA = 298,                     /* ISA  */
    SELF = 299,                    /* SELF  */
    LOCALVAR = 300,                /* LOCALVAR  */
    PUBLIC = 301,                  /* PUBLIC  */
    PRIVATE = 302,                 /* PRIVATE  */
    THEN = 303,                    /* THEN  */
    ASSIGN = 304                   /* ASSIGN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define ID 258
#define INT_LITERAL 259
#define FLOAT_LITERAL 260
#define NONZERO 261
#define SEMICOLON 262
#define PLUS 263
#define MINUS 264
#define ASTERISK 265
#define SLASH 266
#define EQUALS 267
#define LESS_THAN 268
#define GREATER_THAN 269
#define LESS_THAN_EQUALS 270
#define GREATER_THAN_EQUALS 271
#define NOT_EQUALS 272
#define LPAREN 273
#define RPAREN 274
#define LBRACKET 275
#define RBRACKET 276
#define LBRACE 277
#define RBRACE 278
#define COMMA 279
#define COLON 280
#define DOT 281
#define ATTRIBUTE 282
#define CLASS 283
#define INTEGER 284
#define FLOAT 285
#define VOID 286
#define IF 287
#define ELSE 288
#define WHILE 289
#define READ 290
#define WRITE 291
#define RETURN 292
#define OR 293
#define AND 294
#define NOT 295
#define FUNCTION 296
#define CONSTRUCTOR 297
#define ISA 298
#define SELF 299
#define LOCALVAR 300
#define PUBLIC 301
#define PRIVATE 302
#define THEN 303
#define ASSIGN 304

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
