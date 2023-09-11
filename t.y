%{
#include <stdio.h>
#include <stdlib.h>
#include "y.tab.h"



FILE *derivation_file;

void write_to_derivation(char *str);

void yyerror(const char* msg) {
  printf("Parser error: %s\n", msg);
} 

%}

/* Declare tokens */
%token ID INT_LITERAL FLOAT_LITERAL NONZERO
%token SEMICOLON PLUS MINUS ASTERISK SLASH
%token EQUALS LESS_THAN GREATER_THAN LESS_THAN_EQUALS GREATER_THAN_EQUALS NOT_EQUALS 
%token LPAREN RPAREN LBRACKET RBRACKET LBRACE RBRACE
%token COMMA COLON DOT
%token ATTRIBUTE CLASS INTEGER FLOAT VOID
%token IF ELSE WHILE READ WRITE RETURN OR AND NOT
%token FUNCTION CONSTRUCTOR ISA SELF LOCALVAR PUBLIC PRIVATE THEN
%token ASSIGN
%%

program: 
    function_definition program { write_to_derivation("program -> function_definition program"); }
  | class_declaration program { write_to_derivation("program -> class_declaration program"); }
  | /* empty */ { write_to_derivation("program -> epsilon"); }
  ;

function_definition: 
    FUNCTION function_name LPAREN parameter_list RPAREN return_type function_body 
       { write_to_derivation("function_definition -> FUNCTION function_name LPAREN parameter_list RPAREN return_type function_body"); }
  ;
  
function_name:
    ID { write_to_derivation("function_name -> ID"); }
  ;
  
parameter_list:
    parameter_declaration COMMA parameter_list { write_to_derivation("parameter_list -> parameter_declaration COMMA parameter_list"); }
  | parameter_declaration { write_to_derivation("parameter_list -> parameter_declaration"); }
  | /* empty */ { write_to_derivation("parameter_list -> epsilon"); }
  ;
  
parameter_declaration:
    ID COLON type { write_to_derivation("parameter_declaration -> ID COLON type"); }
  ;
  
type:
    INTEGER { write_to_derivation("type -> INTEGER"); }
  | FLOAT { write_to_derivation("type -> FLOAT"); }
  | ID { write_to_derivation("type -> ID"); }
  ;
  
return_type: 
    type { write_to_derivation("return_type -> type"); }
  | VOID { write_to_derivation("return_type -> VOID"); }
  ;
  
function_body:
    LBRACE local_declarations statement_list RBRACE { write_to_derivation("function_body -> LBRACE local_declarations statement_list RBRACE"); }
  ;
  
local_declarations:
    local_variable_declaration local_declarations { write_to_derivation("local_declarations -> local_variable_declaration local_declarations"); }
  | /* empty */ { write_to_derivation("local_declarations -> epsilon"); }
  ;
  
local_variable_declaration:
    LOCALVAR ID COLON type SEMICOLON { write_to_derivation("local_variable_declaration -> LOCALVAR ID COLON type SEMICOLON"); }
  ;
  
statement_list:
    statement statement_list { write_to_derivation("statement_list -> statement statement_list"); }
  | /* empty */ { write_to_derivation("statement_list -> epsilon"); }
  ;
  
statement:
    variable ASSIGN expression SEMICOLON { write_to_derivation("statement -> variable ASSIGN expression SEMICOLON"); }
  | IF LPAREN condition RPAREN statement ELSE statement { write_to_derivation("statement -> IF LPAREN condition RPAREN statement ELSE statement"); } 
  | WHILE LPAREN condition RPAREN statement { write_to_derivation("statement -> WHILE LPAREN condition RPAREN statement"); }
  | READ LPAREN variable RPAREN SEMICOLON { write_to_derivation("statement -> READ LPAREN variable RPAREN SEMICOLON"); }
  | WRITE LPAREN expression RPAREN SEMICOLON { write_to_derivation("statement -> WRITE LPAREN expression RPAREN SEMICOLON"); }
  | RETURN expression SEMICOLON { write_to_derivation("statement -> RETURN expression SEMICOLON"); }
  | function_call SEMICOLON { write_to_derivation("statement -> function_call SEMICOLON"); }
  ;
  
variable: 
    ID { write_to_derivation("variable -> ID"); }
  | ID LBRACKET expression RBRACKET { write_to_derivation("variable -> ID LBRACKET expression RBRACKET"); }
  ;
  
expression:
    expression PLUS term { write_to_derivation("expression -> expression PLUS term"); }
  | expression MINUS term { write_to_derivation("expression -> expression MINUS term"); } 
  | expression OR term { write_to_derivation("expression -> expression OR term"); }
  | term { write_to_derivation("expression -> term"); }
  ;
  
term:
    term ASTERISK factor { write_to_derivation("term -> term ASTERISK factor"); }
  | term SLASH factor { write_to_derivation("term -> term SLASH factor"); }
  | term AND factor { write_to_derivation("term -> term AND factor"); }
  | factor { write_to_derivation("term -> factor"); }
  ;
  
factor:
    LPAREN expression RPAREN { write_to_derivation("factor -> LPAREN expression RPAREN"); }
  | variable { write_to_derivation("factor -> variable"); }
  | function_call { write_to_derivation("factor -> function_call"); } 
  | INT_LITERAL { write_to_derivation("factor -> INT_LITERAL"); }
  | FLOAT_LITERAL { write_to_derivation("factor -> FLOAT_LITERAL"); }
  | MINUS factor { write_to_derivation("factor -> MINUS factor"); } 
  | NOT factor { write_to_derivation("factor -> NOT factor"); }
  ;

condition:
    expression relational_operator expression { write_to_derivation("condition -> expression relational_operator expression"); }
  ;
  
relational_operator:
    LESS_THAN { write_to_derivation("relational_operator -> LESS_THAN"); }
  | GREATER_THAN { write_to_derivation("relational_operator -> GREATER_THAN"); }
  | LESS_THAN_EQUALS { write_to_derivation("relational_operator -> LESS_THAN_EQUALS"); }
  | GREATER_THAN_EQUALS { write_to_derivation("relational_operator -> GREATER_THAN_EQUALS"); }
  | EQUALS { write_to_derivation("relational_operator -> EQUALS"); } 
  | NOT_EQUALS { write_to_derivation("relational_operator -> NOT_EQUALS"); }
  ;
  
function_call:
    ID LPAREN argument_list RPAREN { write_to_derivation("function_call -> ID LPAREN argument_list RPAREN"); }
  ;
  
argument_list:
    expression COMMA argument_list { write_to_derivation("argument_list -> expression COMMA argument_list"); }
  | expression { write_to_derivation("argument_list -> expression"); }
  | /* empty */ { write_to_derivation("argument_list -> epsilon"); }
  ;

class_declaration:
    CLASS ID LBRACE member_list RBRACE SEMICOLON { write_to_derivation("class_declaration -> CLASS ID LBRACE member_list RBRACE SEMICOLON"); }
  | CLASS ID ISA ID_list LBRACE member_list RBRACE SEMICOLON { write_to_derivation("class_declaration -> CLASS ID ISA ID_list LBRACE member_list RBRACE SEMICOLON"); }
  ;
  
ID_list:
    ID COMMA ID_list { write_to_derivation("ID_list -> ID COMMA ID_list"); }
  | ID { write_to_derivation("ID_list -> ID"); }
  ;
  
member_list: 
    member_declaration member_list { write_to_derivation("member_list -> member_declaration member_list"); }
  | /* empty */ { write_to_derivation("member_list -> epsilon"); }
  ;
  
member_declaration:
    ATTRIBUTE ID COLON type SEMICOLON { write_to_derivation("member_declaration -> ATTRIBUTE ID COLON type SEMICOLON"); }
  | FUNCTION ID LPAREN parameter_list RPAREN return_type SEMICOLON { write_to_derivation("member_declaration -> FUNCTION ID LPAREN parameter_list RPAREN return_type SEMICOLON"); }
  | CONSTRUCTOR LPAREN parameter_list RPAREN SEMICOLON { write_to_derivation("member_declaration -> CONSTRUCTOR LPAREN parameter_list RPAREN SEMICOLON"); }
  ;
  
%%

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
