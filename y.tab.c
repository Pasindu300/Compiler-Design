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
#line 1 "t.y"

#include <stdio.h>
#include <stdlib.h>
#include "y.tab.h"



FILE *derivation_file;

void write_to_derivation(char *str);

void yyerror(const char* msg) {
  printf("Parser error: %s\n", msg);
} 


#line 88 "y.tab.c"

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
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_INT_LITERAL = 4,                /* INT_LITERAL  */
  YYSYMBOL_FLOAT_LITERAL = 5,              /* FLOAT_LITERAL  */
  YYSYMBOL_NONZERO = 6,                    /* NONZERO  */
  YYSYMBOL_SEMICOLON = 7,                  /* SEMICOLON  */
  YYSYMBOL_PLUS = 8,                       /* PLUS  */
  YYSYMBOL_MINUS = 9,                      /* MINUS  */
  YYSYMBOL_ASTERISK = 10,                  /* ASTERISK  */
  YYSYMBOL_SLASH = 11,                     /* SLASH  */
  YYSYMBOL_EQUALS = 12,                    /* EQUALS  */
  YYSYMBOL_LESS_THAN = 13,                 /* LESS_THAN  */
  YYSYMBOL_GREATER_THAN = 14,              /* GREATER_THAN  */
  YYSYMBOL_LESS_THAN_EQUALS = 15,          /* LESS_THAN_EQUALS  */
  YYSYMBOL_GREATER_THAN_EQUALS = 16,       /* GREATER_THAN_EQUALS  */
  YYSYMBOL_NOT_EQUALS = 17,                /* NOT_EQUALS  */
  YYSYMBOL_LPAREN = 18,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 19,                    /* RPAREN  */
  YYSYMBOL_LBRACKET = 20,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 21,                  /* RBRACKET  */
  YYSYMBOL_LBRACE = 22,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 23,                    /* RBRACE  */
  YYSYMBOL_COMMA = 24,                     /* COMMA  */
  YYSYMBOL_COLON = 25,                     /* COLON  */
  YYSYMBOL_DOT = 26,                       /* DOT  */
  YYSYMBOL_ATTRIBUTE = 27,                 /* ATTRIBUTE  */
  YYSYMBOL_CLASS = 28,                     /* CLASS  */
  YYSYMBOL_INTEGER = 29,                   /* INTEGER  */
  YYSYMBOL_FLOAT = 30,                     /* FLOAT  */
  YYSYMBOL_VOID = 31,                      /* VOID  */
  YYSYMBOL_IF = 32,                        /* IF  */
  YYSYMBOL_ELSE = 33,                      /* ELSE  */
  YYSYMBOL_WHILE = 34,                     /* WHILE  */
  YYSYMBOL_READ = 35,                      /* READ  */
  YYSYMBOL_WRITE = 36,                     /* WRITE  */
  YYSYMBOL_RETURN = 37,                    /* RETURN  */
  YYSYMBOL_OR = 38,                        /* OR  */
  YYSYMBOL_AND = 39,                       /* AND  */
  YYSYMBOL_NOT = 40,                       /* NOT  */
  YYSYMBOL_FUNCTION = 41,                  /* FUNCTION  */
  YYSYMBOL_CONSTRUCTOR = 42,               /* CONSTRUCTOR  */
  YYSYMBOL_ISA = 43,                       /* ISA  */
  YYSYMBOL_SELF = 44,                      /* SELF  */
  YYSYMBOL_LOCALVAR = 45,                  /* LOCALVAR  */
  YYSYMBOL_PUBLIC = 46,                    /* PUBLIC  */
  YYSYMBOL_PRIVATE = 47,                   /* PRIVATE  */
  YYSYMBOL_THEN = 48,                      /* THEN  */
  YYSYMBOL_ASSIGN = 49,                    /* ASSIGN  */
  YYSYMBOL_YYACCEPT = 50,                  /* $accept  */
  YYSYMBOL_program = 51,                   /* program  */
  YYSYMBOL_function_definition = 52,       /* function_definition  */
  YYSYMBOL_function_name = 53,             /* function_name  */
  YYSYMBOL_parameter_list = 54,            /* parameter_list  */
  YYSYMBOL_parameter_declaration = 55,     /* parameter_declaration  */
  YYSYMBOL_type = 56,                      /* type  */
  YYSYMBOL_return_type = 57,               /* return_type  */
  YYSYMBOL_function_body = 58,             /* function_body  */
  YYSYMBOL_local_declarations = 59,        /* local_declarations  */
  YYSYMBOL_local_variable_declaration = 60, /* local_variable_declaration  */
  YYSYMBOL_statement_list = 61,            /* statement_list  */
  YYSYMBOL_statement = 62,                 /* statement  */
  YYSYMBOL_variable = 63,                  /* variable  */
  YYSYMBOL_expression = 64,                /* expression  */
  YYSYMBOL_term = 65,                      /* term  */
  YYSYMBOL_factor = 66,                    /* factor  */
  YYSYMBOL_condition = 67,                 /* condition  */
  YYSYMBOL_relational_operator = 68,       /* relational_operator  */
  YYSYMBOL_function_call = 69,             /* function_call  */
  YYSYMBOL_argument_list = 70,             /* argument_list  */
  YYSYMBOL_class_declaration = 71,         /* class_declaration  */
  YYSYMBOL_ID_list = 72,                   /* ID_list  */
  YYSYMBOL_member_list = 73,               /* member_list  */
  YYSYMBOL_member_declaration = 74         /* member_declaration  */
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
#define YYLAST   162

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  65
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  149

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   304


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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    31,    31,    32,    33,    37,    42,    46,    47,    48,
      52,    56,    57,    58,    62,    63,    67,    71,    72,    76,
      80,    81,    85,    86,    87,    88,    89,    90,    91,    95,
      96,   100,   101,   102,   103,   107,   108,   109,   110,   114,
     115,   116,   117,   118,   119,   120,   124,   128,   129,   130,
     131,   132,   133,   137,   141,   142,   143,   147,   148,   152,
     153,   157,   158,   162,   163,   164
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
  "\"end of file\"", "error", "\"invalid token\"", "ID", "INT_LITERAL",
  "FLOAT_LITERAL", "NONZERO", "SEMICOLON", "PLUS", "MINUS", "ASTERISK",
  "SLASH", "EQUALS", "LESS_THAN", "GREATER_THAN", "LESS_THAN_EQUALS",
  "GREATER_THAN_EQUALS", "NOT_EQUALS", "LPAREN", "RPAREN", "LBRACKET",
  "RBRACKET", "LBRACE", "RBRACE", "COMMA", "COLON", "DOT", "ATTRIBUTE",
  "CLASS", "INTEGER", "FLOAT", "VOID", "IF", "ELSE", "WHILE", "READ",
  "WRITE", "RETURN", "OR", "AND", "NOT", "FUNCTION", "CONSTRUCTOR", "ISA",
  "SELF", "LOCALVAR", "PUBLIC", "PRIVATE", "THEN", "ASSIGN", "$accept",
  "program", "function_definition", "function_name", "parameter_list",
  "parameter_declaration", "type", "return_type", "function_body",
  "local_declarations", "local_variable_declaration", "statement_list",
  "statement", "variable", "expression", "term", "factor", "condition",
  "relational_operator", "function_call", "argument_list",
  "class_declaration", "ID_list", "member_list", "member_declaration", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-76)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -22,     4,    14,    33,   -22,   -22,   -13,   -76,    47,   -76,
     -76,   -76,    64,    53,    78,    90,   104,    57,    77,    64,
      92,    96,    94,   101,    98,   100,   103,    78,   116,   -76,
      53,    64,    65,    83,    78,    65,    78,   105,   -76,   -76,
     106,   -76,   -76,   -76,   -76,   -76,   -76,   108,   -76,   119,
     109,   120,   124,    87,   -76,   -76,    83,   -76,   -76,   130,
       0,    87,   127,   110,    97,   118,   121,   122,   123,    20,
     114,     0,    89,   135,   -76,   -76,    65,    20,    20,    20,
      20,   140,    20,   -76,   -76,    20,    20,    20,   -76,    19,
      72,   -76,   -76,   -76,   -76,    20,   -76,   137,    50,   126,
      40,    38,   128,   129,   131,   133,    58,   -76,    71,   -76,
     -76,    20,    20,    20,    20,    20,    20,    35,   -76,    20,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,    20,     0,
       0,   139,   142,   -76,    72,    72,    72,   -76,   -76,   -76,
     -76,   -76,    54,   117,   -76,   -76,   -76,     0,   -76
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     0,     0,     0,     4,     4,     0,     6,     0,     1,
       2,     3,    62,     0,     9,     0,     0,     0,     0,    62,
      60,     0,     0,     0,     8,     0,     0,     9,     0,    61,
       0,    62,     0,     0,     9,     0,     9,     0,    57,    59,
       0,    13,    11,    12,    10,    15,    14,     0,     7,     0,
       0,     0,     0,    18,     5,    63,     0,    65,    58,     0,
      21,    18,     0,     0,    29,     0,     0,     0,     0,     0,
       0,    21,     0,     0,    17,    64,     0,    56,     0,     0,
       0,     0,     0,    42,    43,     0,     0,     0,    40,     0,
      34,    38,    41,    16,    20,     0,    28,     0,    55,     0,
       0,     0,     0,     0,    29,     0,     0,    44,     0,    45,
      27,     0,     0,     0,     0,     0,     0,     0,    19,    56,
      53,    30,    51,    47,    48,    49,    50,    52,     0,     0,
       0,     0,     0,    39,    31,    32,    33,    35,    36,    37,
      22,    54,    46,     0,    24,    25,    26,     0,    23
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -76,    99,   -76,   -76,    74,   -76,   -31,   102,   -76,    93,
     -76,    82,   -45,   -60,   -64,   -14,   -75,    75,   -76,   -58,
      37,   -76,   132,   -11,   -76
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,     8,    23,    24,    46,    47,    54,    60,
      61,    70,    71,    88,    98,    90,    91,   102,   128,    92,
      99,     5,    21,    18,    19
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      72,    44,    73,    64,    49,    89,     1,     6,    29,    12,
     107,    72,   109,    73,   100,   101,   101,     7,   106,     2,
      40,   105,   108,    64,    83,    84,   110,   111,   112,    85,
      13,   117,    65,     9,    66,    67,    68,    69,    86,   137,
     138,   139,   140,   111,   112,    97,   111,   112,   111,   112,
     122,   123,   124,   125,   126,   127,    20,   113,   111,   112,
      87,   121,   111,   112,   142,    14,   111,   112,    41,    72,
      72,    73,    73,   113,   119,    27,   113,   132,   113,   111,
     112,    22,   114,   115,   143,   144,    41,    72,   113,    73,
     133,    15,   113,    25,    42,    43,   113,   134,   135,   136,
      28,    37,   148,    10,    11,    16,    17,    26,    48,   113,
      50,   116,    42,    43,    45,    77,    30,    78,    31,    32,
      33,    36,    34,    38,    51,    35,    55,    57,    56,    52,
      53,    58,    59,    63,    75,    76,    79,    93,    95,    80,
      81,    82,    96,   104,   118,   120,   145,   129,   130,   146,
     147,    78,   131,    94,    74,   103,   141,     0,    62,     0,
       0,     0,    39
};

static const yytype_int16 yycheck[] =
{
      60,    32,    60,     3,    35,    69,    28,     3,    19,    22,
      85,    71,    87,    71,    78,    79,    80,     3,    82,    41,
      31,    81,    86,     3,     4,     5,     7,     8,     9,     9,
      43,    95,    32,     0,    34,    35,    36,    37,    18,   114,
     115,   116,     7,     8,     9,    76,     8,     9,     8,     9,
      12,    13,    14,    15,    16,    17,     3,    38,     8,     9,
      40,    21,     8,     9,   128,    18,     8,     9,     3,   129,
     130,   129,   130,    38,    24,    18,    38,    19,    38,     8,
       9,     3,    10,    11,   129,   130,     3,   147,    38,   147,
      19,    27,    38,     3,    29,    30,    38,   111,   112,   113,
      23,    27,   147,     4,     5,    41,    42,     3,    34,    38,
      36,    39,    29,    30,    31,    18,    24,    20,    22,    25,
      19,    18,    24,     7,    19,    25,     7,     7,    19,    23,
      22,     7,    45,     3,     7,    25,    18,    23,    49,    18,
      18,    18,     7,     3,     7,    19,     7,    19,    19,     7,
      33,    20,    19,    71,    61,    80,   119,    -1,    56,    -1,
      -1,    -1,    30
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    28,    41,    51,    52,    71,     3,     3,    53,     0,
      51,    51,    22,    43,    18,    27,    41,    42,    73,    74,
       3,    72,     3,    54,    55,     3,     3,    18,    23,    73,
      24,    22,    25,    19,    24,    25,    18,    54,     7,    72,
      73,     3,    29,    30,    56,    31,    56,    57,    54,    56,
      54,    19,    23,    22,    58,     7,    19,     7,     7,    45,
      59,    60,    57,     3,     3,    32,    34,    35,    36,    37,
      61,    62,    63,    69,    59,     7,    25,    18,    20,    18,
      18,    18,    18,     4,     5,     9,    18,    40,    63,    64,
      65,    66,    69,    23,    61,    49,     7,    56,    64,    70,
      64,    64,    67,    67,     3,    63,    64,    66,    64,    66,
       7,     8,     9,    38,    10,    11,    39,    64,     7,    24,
      19,    21,    12,    13,    14,    15,    16,    17,    68,    19,
      19,    19,    19,    19,    65,    65,    65,    66,    66,    66,
       7,    70,    64,    62,    62,     7,     7,    33,    62
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    50,    51,    51,    51,    52,    53,    54,    54,    54,
      55,    56,    56,    56,    57,    57,    58,    59,    59,    60,
      61,    61,    62,    62,    62,    62,    62,    62,    62,    63,
      63,    64,    64,    64,    64,    65,    65,    65,    65,    66,
      66,    66,    66,    66,    66,    66,    67,    68,    68,    68,
      68,    68,    68,    69,    70,    70,    70,    71,    71,    72,
      72,    73,    73,    74,    74,    74
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     0,     7,     1,     3,     1,     0,
       3,     1,     1,     1,     1,     1,     4,     2,     0,     5,
       2,     0,     4,     7,     5,     5,     5,     3,     2,     1,
       4,     3,     3,     3,     1,     3,     3,     3,     1,     3,
       1,     1,     1,     1,     2,     2,     3,     1,     1,     1,
       1,     1,     1,     4,     3,     1,     0,     6,     8,     3,
       1,     2,     0,     5,     7,     5
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
  case 2: /* program: function_definition program  */
#line 31 "t.y"
                                { write_to_derivation("program -> function_definition program"); }
#line 1386 "y.tab.c"
    break;

  case 3: /* program: class_declaration program  */
#line 32 "t.y"
                              { write_to_derivation("program -> class_declaration program"); }
#line 1392 "y.tab.c"
    break;

  case 4: /* program: %empty  */
#line 33 "t.y"
                { write_to_derivation("program -> epsilon"); }
#line 1398 "y.tab.c"
    break;

  case 5: /* function_definition: FUNCTION function_name LPAREN parameter_list RPAREN return_type function_body  */
#line 38 "t.y"
       { write_to_derivation("function_definition -> FUNCTION function_name LPAREN parameter_list RPAREN return_type function_body"); }
#line 1404 "y.tab.c"
    break;

  case 6: /* function_name: ID  */
#line 42 "t.y"
       { write_to_derivation("function_name -> ID"); }
#line 1410 "y.tab.c"
    break;

  case 7: /* parameter_list: parameter_declaration COMMA parameter_list  */
#line 46 "t.y"
                                               { write_to_derivation("parameter_list -> parameter_declaration COMMA parameter_list"); }
#line 1416 "y.tab.c"
    break;

  case 8: /* parameter_list: parameter_declaration  */
#line 47 "t.y"
                          { write_to_derivation("parameter_list -> parameter_declaration"); }
#line 1422 "y.tab.c"
    break;

  case 9: /* parameter_list: %empty  */
#line 48 "t.y"
                { write_to_derivation("parameter_list -> epsilon"); }
#line 1428 "y.tab.c"
    break;

  case 10: /* parameter_declaration: ID COLON type  */
#line 52 "t.y"
                  { write_to_derivation("parameter_declaration -> ID COLON type"); }
#line 1434 "y.tab.c"
    break;

  case 11: /* type: INTEGER  */
#line 56 "t.y"
            { write_to_derivation("type -> INTEGER"); }
#line 1440 "y.tab.c"
    break;

  case 12: /* type: FLOAT  */
#line 57 "t.y"
          { write_to_derivation("type -> FLOAT"); }
#line 1446 "y.tab.c"
    break;

  case 13: /* type: ID  */
#line 58 "t.y"
       { write_to_derivation("type -> ID"); }
#line 1452 "y.tab.c"
    break;

  case 14: /* return_type: type  */
#line 62 "t.y"
         { write_to_derivation("return_type -> type"); }
#line 1458 "y.tab.c"
    break;

  case 15: /* return_type: VOID  */
#line 63 "t.y"
         { write_to_derivation("return_type -> VOID"); }
#line 1464 "y.tab.c"
    break;

  case 16: /* function_body: LBRACE local_declarations statement_list RBRACE  */
#line 67 "t.y"
                                                    { write_to_derivation("function_body -> LBRACE local_declarations statement_list RBRACE"); }
#line 1470 "y.tab.c"
    break;

  case 17: /* local_declarations: local_variable_declaration local_declarations  */
#line 71 "t.y"
                                                  { write_to_derivation("local_declarations -> local_variable_declaration local_declarations"); }
#line 1476 "y.tab.c"
    break;

  case 18: /* local_declarations: %empty  */
#line 72 "t.y"
                { write_to_derivation("local_declarations -> epsilon"); }
#line 1482 "y.tab.c"
    break;

  case 19: /* local_variable_declaration: LOCALVAR ID COLON type SEMICOLON  */
#line 76 "t.y"
                                     { write_to_derivation("local_variable_declaration -> LOCALVAR ID COLON type SEMICOLON"); }
#line 1488 "y.tab.c"
    break;

  case 20: /* statement_list: statement statement_list  */
#line 80 "t.y"
                             { write_to_derivation("statement_list -> statement statement_list"); }
#line 1494 "y.tab.c"
    break;

  case 21: /* statement_list: %empty  */
#line 81 "t.y"
                { write_to_derivation("statement_list -> epsilon"); }
#line 1500 "y.tab.c"
    break;

  case 22: /* statement: variable ASSIGN expression SEMICOLON  */
#line 85 "t.y"
                                         { write_to_derivation("statement -> variable ASSIGN expression SEMICOLON"); }
#line 1506 "y.tab.c"
    break;

  case 23: /* statement: IF LPAREN condition RPAREN statement ELSE statement  */
#line 86 "t.y"
                                                        { write_to_derivation("statement -> IF LPAREN condition RPAREN statement ELSE statement"); }
#line 1512 "y.tab.c"
    break;

  case 24: /* statement: WHILE LPAREN condition RPAREN statement  */
#line 87 "t.y"
                                            { write_to_derivation("statement -> WHILE LPAREN condition RPAREN statement"); }
#line 1518 "y.tab.c"
    break;

  case 25: /* statement: READ LPAREN variable RPAREN SEMICOLON  */
#line 88 "t.y"
                                          { write_to_derivation("statement -> READ LPAREN variable RPAREN SEMICOLON"); }
#line 1524 "y.tab.c"
    break;

  case 26: /* statement: WRITE LPAREN expression RPAREN SEMICOLON  */
#line 89 "t.y"
                                             { write_to_derivation("statement -> WRITE LPAREN expression RPAREN SEMICOLON"); }
#line 1530 "y.tab.c"
    break;

  case 27: /* statement: RETURN expression SEMICOLON  */
#line 90 "t.y"
                                { write_to_derivation("statement -> RETURN expression SEMICOLON"); }
#line 1536 "y.tab.c"
    break;

  case 28: /* statement: function_call SEMICOLON  */
#line 91 "t.y"
                            { write_to_derivation("statement -> function_call SEMICOLON"); }
#line 1542 "y.tab.c"
    break;

  case 29: /* variable: ID  */
#line 95 "t.y"
       { write_to_derivation("variable -> ID"); }
#line 1548 "y.tab.c"
    break;

  case 30: /* variable: ID LBRACKET expression RBRACKET  */
#line 96 "t.y"
                                    { write_to_derivation("variable -> ID LBRACKET expression RBRACKET"); }
#line 1554 "y.tab.c"
    break;

  case 31: /* expression: expression PLUS term  */
#line 100 "t.y"
                         { write_to_derivation("expression -> expression PLUS term"); }
#line 1560 "y.tab.c"
    break;

  case 32: /* expression: expression MINUS term  */
#line 101 "t.y"
                          { write_to_derivation("expression -> expression MINUS term"); }
#line 1566 "y.tab.c"
    break;

  case 33: /* expression: expression OR term  */
#line 102 "t.y"
                       { write_to_derivation("expression -> expression OR term"); }
#line 1572 "y.tab.c"
    break;

  case 34: /* expression: term  */
#line 103 "t.y"
         { write_to_derivation("expression -> term"); }
#line 1578 "y.tab.c"
    break;

  case 35: /* term: term ASTERISK factor  */
#line 107 "t.y"
                         { write_to_derivation("term -> term ASTERISK factor"); }
#line 1584 "y.tab.c"
    break;

  case 36: /* term: term SLASH factor  */
#line 108 "t.y"
                      { write_to_derivation("term -> term SLASH factor"); }
#line 1590 "y.tab.c"
    break;

  case 37: /* term: term AND factor  */
#line 109 "t.y"
                    { write_to_derivation("term -> term AND factor"); }
#line 1596 "y.tab.c"
    break;

  case 38: /* term: factor  */
#line 110 "t.y"
           { write_to_derivation("term -> factor"); }
#line 1602 "y.tab.c"
    break;

  case 39: /* factor: LPAREN expression RPAREN  */
#line 114 "t.y"
                             { write_to_derivation("factor -> LPAREN expression RPAREN"); }
#line 1608 "y.tab.c"
    break;

  case 40: /* factor: variable  */
#line 115 "t.y"
             { write_to_derivation("factor -> variable"); }
#line 1614 "y.tab.c"
    break;

  case 41: /* factor: function_call  */
#line 116 "t.y"
                  { write_to_derivation("factor -> function_call"); }
#line 1620 "y.tab.c"
    break;

  case 42: /* factor: INT_LITERAL  */
#line 117 "t.y"
                { write_to_derivation("factor -> INT_LITERAL"); }
#line 1626 "y.tab.c"
    break;

  case 43: /* factor: FLOAT_LITERAL  */
#line 118 "t.y"
                  { write_to_derivation("factor -> FLOAT_LITERAL"); }
#line 1632 "y.tab.c"
    break;

  case 44: /* factor: MINUS factor  */
#line 119 "t.y"
                 { write_to_derivation("factor -> MINUS factor"); }
#line 1638 "y.tab.c"
    break;

  case 45: /* factor: NOT factor  */
#line 120 "t.y"
               { write_to_derivation("factor -> NOT factor"); }
#line 1644 "y.tab.c"
    break;

  case 46: /* condition: expression relational_operator expression  */
#line 124 "t.y"
                                              { write_to_derivation("condition -> expression relational_operator expression"); }
#line 1650 "y.tab.c"
    break;

  case 47: /* relational_operator: LESS_THAN  */
#line 128 "t.y"
              { write_to_derivation("relational_operator -> LESS_THAN"); }
#line 1656 "y.tab.c"
    break;

  case 48: /* relational_operator: GREATER_THAN  */
#line 129 "t.y"
                 { write_to_derivation("relational_operator -> GREATER_THAN"); }
#line 1662 "y.tab.c"
    break;

  case 49: /* relational_operator: LESS_THAN_EQUALS  */
#line 130 "t.y"
                     { write_to_derivation("relational_operator -> LESS_THAN_EQUALS"); }
#line 1668 "y.tab.c"
    break;

  case 50: /* relational_operator: GREATER_THAN_EQUALS  */
#line 131 "t.y"
                        { write_to_derivation("relational_operator -> GREATER_THAN_EQUALS"); }
#line 1674 "y.tab.c"
    break;

  case 51: /* relational_operator: EQUALS  */
#line 132 "t.y"
           { write_to_derivation("relational_operator -> EQUALS"); }
#line 1680 "y.tab.c"
    break;

  case 52: /* relational_operator: NOT_EQUALS  */
#line 133 "t.y"
               { write_to_derivation("relational_operator -> NOT_EQUALS"); }
#line 1686 "y.tab.c"
    break;

  case 53: /* function_call: ID LPAREN argument_list RPAREN  */
#line 137 "t.y"
                                   { write_to_derivation("function_call -> ID LPAREN argument_list RPAREN"); }
#line 1692 "y.tab.c"
    break;

  case 54: /* argument_list: expression COMMA argument_list  */
#line 141 "t.y"
                                   { write_to_derivation("argument_list -> expression COMMA argument_list"); }
#line 1698 "y.tab.c"
    break;

  case 55: /* argument_list: expression  */
#line 142 "t.y"
               { write_to_derivation("argument_list -> expression"); }
#line 1704 "y.tab.c"
    break;

  case 56: /* argument_list: %empty  */
#line 143 "t.y"
                { write_to_derivation("argument_list -> epsilon"); }
#line 1710 "y.tab.c"
    break;

  case 57: /* class_declaration: CLASS ID LBRACE member_list RBRACE SEMICOLON  */
#line 147 "t.y"
                                                 { write_to_derivation("class_declaration -> CLASS ID LBRACE member_list RBRACE SEMICOLON"); }
#line 1716 "y.tab.c"
    break;

  case 58: /* class_declaration: CLASS ID ISA ID_list LBRACE member_list RBRACE SEMICOLON  */
#line 148 "t.y"
                                                             { write_to_derivation("class_declaration -> CLASS ID ISA ID_list LBRACE member_list RBRACE SEMICOLON"); }
#line 1722 "y.tab.c"
    break;

  case 59: /* ID_list: ID COMMA ID_list  */
#line 152 "t.y"
                     { write_to_derivation("ID_list -> ID COMMA ID_list"); }
#line 1728 "y.tab.c"
    break;

  case 60: /* ID_list: ID  */
#line 153 "t.y"
       { write_to_derivation("ID_list -> ID"); }
#line 1734 "y.tab.c"
    break;

  case 61: /* member_list: member_declaration member_list  */
#line 157 "t.y"
                                   { write_to_derivation("member_list -> member_declaration member_list"); }
#line 1740 "y.tab.c"
    break;

  case 62: /* member_list: %empty  */
#line 158 "t.y"
                { write_to_derivation("member_list -> epsilon"); }
#line 1746 "y.tab.c"
    break;

  case 63: /* member_declaration: ATTRIBUTE ID COLON type SEMICOLON  */
#line 162 "t.y"
                                      { write_to_derivation("member_declaration -> ATTRIBUTE ID COLON type SEMICOLON"); }
#line 1752 "y.tab.c"
    break;

  case 64: /* member_declaration: FUNCTION ID LPAREN parameter_list RPAREN return_type SEMICOLON  */
#line 163 "t.y"
                                                                   { write_to_derivation("member_declaration -> FUNCTION ID LPAREN parameter_list RPAREN return_type SEMICOLON"); }
#line 1758 "y.tab.c"
    break;

  case 65: /* member_declaration: CONSTRUCTOR LPAREN parameter_list RPAREN SEMICOLON  */
#line 164 "t.y"
                                                       { write_to_derivation("member_declaration -> CONSTRUCTOR LPAREN parameter_list RPAREN SEMICOLON"); }
#line 1764 "y.tab.c"
    break;


#line 1768 "y.tab.c"

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

#line 167 "t.y"


/* Function to write derivation steps to file */
void write_to_derivation(char *str) {
  fputs(str, derivation_file);
  fputs("\n", derivation_file);
}

int main(int argc, char **argv) {


  derivation_file = fopen("derivation.txt","w");
  yyparse();
  // parsing happens here 
  fclose(derivation_file);
 
  
  return 0;
}
