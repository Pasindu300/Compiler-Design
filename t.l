%{
#include "y.tab.h"
%}

%option noyywrap

%%

";"              { printf("SEMICOLON\tLexeme: %s\tLocation: Line %d, Column %d\n", yytext, yylineno, yyleng); return SEMICOLON; }
"+"              { printf("PLUS\tLexeme: %s\tLocation: Line %d, Column %d\n", yytext, yylineno, yyleng); return PLUS; }
"=="             { printf("EQUALS\tLexeme: %s\tLocation: Line %d, Column %d\n", yytext, yylineno, yyleng); return EQUALS; }
"attribute"      { printf("ATTRIBUTE\tLexeme: %s\tLocation: Line %d, Column %d\n", yytext, yylineno, yyleng); return ATTRIBUTE; }
"if"             { printf("IF\tLexeme: %s\tLocation: Line %d, Column %d\n", yytext, yylineno, yyleng); return IF; }
"read"           { printf("READ\tLexeme: %s\tLocation: Line %d, Column %d\n", yytext, yylineno, yyleng); return READ; }
"("              { printf("LPAREN\tLexeme: %s\tLocation: Line %d, Column %d\n", yytext, yylineno, yyleng); return LPAREN; }
")"              { printf("RPAREN\tLexeme: %s\tLocation: Line %d, Column %d\n", yytext, yylineno, yyleng); return RPAREN; }
","              { printf("COMMA\tLexeme: %s\tLocation: Line %d, Column %d\n", yytext, yylineno, yyleng); return COMMA; }
"–"              { printf("MINUS\tLexeme: %s\tLocation: Line %d, Column %d\n", yytext, yylineno, yyleng); return MINUS; }
"="              { printf("ASSIGN\tLexeme: %s\tLocation: Line %d, Column %d\n", yytext, yylineno, yyleng); return ASSIGN; }
"class"          { printf("CLASS\tLexeme: %s\tLocation: Line %d, Column %d\n", yytext, yylineno, yyleng); return CLASS; }
"integer"        { printf("INTEGER\tLexeme: %s\tLocation: Line %d, Column %d\n", yytext, yylineno, yyleng); return INTEGER; }
"return"         { printf("RETURN\tLexeme: %s\tLocation: Line %d, Column %d\n", yytext, yylineno, yyleng); return RETURN; }
"{"              { printf("LBRACE\tLexeme: %s\tLocation: Line %d, Column %d\n", yytext, yylineno, yyleng); return LBRACE; }
"."              { printf("DOT\tLexeme: %s\tLocation: Line %d, Column %d\n", yytext, yylineno, yyleng); return DOT; }
"*"              { printf("ASTERISK\tLexeme: %s\tLocation: Line %d, Column %d\n", yytext, yylineno, yyleng); return ASTERISK; }
"<"              { printf("LESS_THAN\tLexeme: %s\tLocation: Line %d, Column %d\n", yytext, yylineno, yyleng); return LESS_THAN; }
"constructor"    { printf("CONSTRUCTOR\tLexeme: %s\tLocation: Line %d, Column %d\n", yytext, yylineno, yyleng); return CONSTRUCTOR; }
"isa"            { printf("ISA\tLexeme: %s\tLocation: Line %d, Column %d\n", yytext, yylineno, yyleng); return ISA; }
"self"           { printf("SELF\tLexeme: %s\tLocation: Line %d, Column %d\n", yytext, yylineno, yyleng); return SELF; }
"}"              { printf("RBRACE\tLexeme: %s\tLocation: Line %d, Column %d\n", yytext, yylineno, yyleng); return RBRACE; }
":"              { printf("COLON\tLexeme: %s\tLocation: Line %d, Column %d\n", yytext, yylineno, yyleng); return COLON; }
"/"              { printf("SLASH\tLexeme: %s\tLocation: Line %d, Column %d\n", yytext, yylineno, yyleng); return SLASH; }
">"              { printf("GREATER_THAN\tLexeme: %s\tLocation: Line %d, Column %d\n", yytext, yylineno, yyleng); return GREATER_THAN; }
"else"           { printf("ELSE\tLexeme: %s\tLocation: Line %d, Column %d\n", yytext, yylineno, yyleng); return ELSE; }
"localvar"       { printf("LOCALVAR\tLexeme: %s\tLocation: Line %d, Column %d\n", yytext, yylineno, yyleng); return LOCALVAR; }
"then"           { printf("THEN\tLexeme: %s\tLocation: Line %d, Column %d\n", yytext, yylineno, yyleng); return THEN; }
"["              { printf("LBRACKET\tLexeme: %s\tLocation: Line %d, Column %d\n", yytext, yylineno, yyleng); return LBRACKET; }
"or"             { printf("OR\tLexeme: %s\tLocation: Line %d, Column %d\n", yytext, yylineno, yyleng); return OR; }
"<="             { printf("LESS_THAN_EQUALS\tLexeme: %s\tLocation: Line %d, Column %d\n", yytext, yylineno, yyleng); return LESS_THAN_EQUALS; }
"float"          { printf("FLOAT\tLexeme: %s\tLocation: Line %d, Column %d\n", yytext, yylineno, yyleng); return FLOAT; }
"private"        { printf("PRIVATE\tLexeme: %s\tLocation: Line %d, Column %d\n", yytext, yylineno, yyleng); return PRIVATE; }
"void"           { printf("VOID\tLexeme: %s\tLocation: Line %d, Column %d\n", yytext, yylineno, yyleng); return VOID; }
"]"              { printf("RBRACKET\tLexeme: %s\tLocation: Line %d, Column %d\n", yytext, yylineno, yyleng); return RBRACKET; }
"and"            { printf("AND\tLexeme: %s\tLocation: Line %d, Column %d\n", yytext, yylineno, yyleng); return AND; }
">="             { printf("GREATER_THAN_EQUALS\tLexeme: %s\tLocation: Line %d, Column %d\n", yytext, yylineno, yyleng); return GREATER_THAN_EQUALS; }
"function"       { printf("FUNCTION\tLexeme: %s\tLocation: Line %d, Column %d\n", yytext, yylineno, yyleng); return FUNCTION; }
"public"         { printf("PUBLIC\tLexeme: %s\tLocation: Line %d, Column %d\n", yytext, yylineno, yyleng); return PUBLIC; }
"while"          { printf("WHILE\tLexeme: %s\tLocation: Line %d, Column %d\n", yytext, yylineno, yyleng); return WHILE; }
"not"            { printf("NOT\tLexeme: %s\tLocation: Line %d, Column %d\n", yytext, yylineno, yyleng); return NOT; }
"<>"             { printf("NOT_EQUALS\tLexeme: %s\tLocation: Line %d, Column %d\n", yytext, yylineno, yyleng); return NOT_EQUALS; }
"write"          { printf("WRITE\tLexeme: %s\tLocation: Line %d, Column %d\n", yytext, yylineno, yyleng); return WRITE; }

[ \t\n]          ;   // Skip whitespace and newline characters

[A-Za-z][A-Za-z0-9_]*  { yylval = ID; printf("ID\tLexeme: %s\tLocation: Line %d, Column %d\n", yytext, yylineno, yyleng); return ID; }

[0-9]+           { yylval = atoi(yytext); printf("INT_LITERAL\tLexeme: %s\tLocation: Line %d, Column %d\n", yytext, yylineno, yyleng); return INT_LITERAL; }

[1-9][0-9]*      { yylval = atoi(yytext); printf("NONZERO\tLexeme: %s\tLocation: Line %d, Column %d\n", yytext, yylineno, yyleng); return NONZERO; }

[0-9]*\.([0-9]*[1-9])?  { yylval = atof(yytext); printf("FLOAT_LITERAL\tLexeme: %s\tLocation: Line %d, Column %d\n", yytext, yylineno, yyleng); return FLOAT_LITERAL; }

"/*"([^*]|[\r\n]|(\*+([^*/]|[\r\n])))*\*+"/" { /* Ignore block comments */ }

"//".*           ;   // Ignore inline comments

.                { printf("Unrecognized character: %s\tLocation: Line %d, Column %d\n", yytext, yylineno, yyleng); /* Handle unrecognized characters or errors */ }

%%


