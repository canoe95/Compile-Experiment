%{
#include <stdio.h>
void yyerror(const char* msg) {}
static FILE* yyout;
%}

%token NUMBER

%left '+' '-'
%left '*' '/'

%%

S   :   S E '\n'        { fprintf(yyout, "ans = %d\n", $2); }
    |   /* empty */     { /* empty */ }
    ;

E   :   E '+' E         { $$ = $1 + $3; }
    |   E '-' E         { $$ = $1 - $3; }
    |   E '*' E         { $$ = $1 * $3; }
    |   E '/' E         { $$ = $1 / $3; }
    |   NUMBER          { $$ = $1; }
    |   '(' E ')'       { $$ = $2; }
    ;

%%

int main() {
    extern FILE *yyin;
    yyin = fopen("testfile.txt", "r");
    extern FILE *yyout;
    yyout = fopen("output.txt", "w");
    yyparse();
    return 0;
}