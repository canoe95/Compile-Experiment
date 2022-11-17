%{
#include <stdio.h>
extern FILE* yyout;
void yyerror(const char* msg) {}
int yylex();
%}

%debug

%locations

%token STR // 字符串
%token CHARACTER // 字符

%token CONST // const
%token INT // int
%token CHAR // char
%token VOID // void
%token MAIN // main
%token IF // if
%token ELSE // else
%token DO // do
%token WHILE // while
%token FOR // for
%token SCAN // scanf
%token PRINT // printf
%token RETURN // return

%token ID // 识别标识符
%token NUMBER // 整数
%token ZERO // 0

%token LPARENT // (
%token RPARENT // )
%token LBRACE RBRACE RBRACK LBRACK // {}, [] 
%token SEMICOLON // ;
%token COMMA // ,

%left ASSIGN // 赋值 =
%left NEQ EQL // 等，不等 == !=
%left LSS GRE LEQ GEQ // 比较 < > <= >=
%left ADD SUB // 加减 + -
%left MUL DIV // 乘除 * /

%start s
%%

/* 语法规则 */
s
    : s program				{ fprintf(yyout, "<程序>\n"); }
    | program				
    ;

add_cal
    : ADD
    | SUB
    ;

mul_cal
    : MUL
    | DIV
    ;

relation_cal
    : NEQ
    | EQL
    | LSS
    | GRE
    | LEQ
    | GEQ
    ;

character
    : CHARACTER
    ;

type
    : INT
    | CHAR
    ;

string
    : STR				{ fprintf(yyout, "<字符串>\n"); }
    ;


program
    : declaration
    | function
    ;

declaration
    : const_declaration			{ fprintf(yyout, "<常量说明>\n"); }
    | variable_declaration		{ fprintf(yyout, "<变量说明>\n"); }
    ;

const_declaration
    : const_declaration const_definition SEMICOLON 
    | const_definition SEMICOLON
    ;

const_definition
    : const_definition SEMICOLON CONST type const_assign  
    | CONST type const_assign  		  
    ;

const_assign
    : const_assign COMMA ID ASSIGN signed_number { fprintf(yyout, "<常量定义>\n"); }
    | ID ASSIGN signed_number			 { fprintf(yyout, "<常量定义>\n"); }
    | const_assign COMMA ID ASSIGN character	 { fprintf(yyout, "<常量定义>\n"); }
    | ID ASSIGN character			 { fprintf(yyout, "<常量定义>\n"); }		
    ;


unsigned_number
    : num_without_sign		{ fprintf(yyout, "<无符号整数>\n"); }
    ;

signed_number
    : num_with_sign		{ fprintf(yyout, "<整数>\n"); }
    ;

num_with_sign
    : unsigned_number
    | ADD unsigned_number
    | SUB unsigned_number
    ;

num_without_sign
    : NUMBER
    | ZERO
    ;

variable_declaration
    : variable_declaration variable_definition SEMICOLON 
    | variable_definition SEMICOLON 			 
    ;

variable_definition 
    : type variable_assign     
    ;

variable_assign
    : variable_assign COMMA variable
    | variable
    ;

variable
    : ID				{ fprintf(yyout, "<变量定义>\n"); }
    | ID LBRACK unsigned_number RBRACK  { fprintf(yyout, "<变量定义>\n"); }
    ;



function
    : void 	{ fprintf(yyout, "<无返回值函数定义>\n"); }
    | general   { fprintf(yyout, "<有返回值函数定义>\n"); }
    | main      { fprintf(yyout, "<主函数>\n"); }
    ;

void
    : VOID ID LPARENT param_list RPARENT LBRACE complex_sentence RBRACE 
    ;

general
    : declaration_head LPARENT param_list RPARENT LBRACE complex_sentence RBRACE 
    ;

main
    : VOID MAIN LPARENT RPARENT LBRACE complex_sentence RBRACE 
    ;

declaration_head
    : type ID			{ fprintf(yyout, "<声明头部>\n"); }
    ;

param_list
    : type param	    	{ fprintf(yyout, "<参数表>\n"); }
    |
    ;	

param
    : ID
    | param COMMA type ID
    ;

complex_sentence
    : const_declaration variable_declaration sentence_list    { fprintf(yyout, "<复合语句>\n"); }
    ;

expression
    : expression add_cal item	{ fprintf(yyout, "<表达式>\n"); }
    | expr			
    ;

expr
    : add_cal item
    | item			{ fprintf(yyout, "<项>\n"); }
    ;

item
    : item mul_cal fact
    | fact			{ fprintf(yyout, "<因子>\n"); }
    ;

fact
    : ID				{ /*fprintf(yyout, "<标识符>");*/ }
    | ID LBRACK expression RBRACK
    | LPARENT expression RPARENT
    | signed_number
    | character				{ /*fprintf(yyout, "<字符>");*/ }
    | call_with_return			{ fprintf(yyout, "<有返回值函数调用语句>\n"); }
    ;

sentence
    : condition_sentence SEMICOLON		{ fprintf(yyout, "<条件语句>\n"); }
    | circle_sentence SEMICOLON			{ fprintf(yyout, "<循环语句>\n"); }
    | LBRACE sentence_list RBRACE SEMICOLON	{ fprintf(yyout, "<语句列>\n"); }
    | call_with_return SEMICOLON		{ fprintf(yyout, "<有返回值函数调用语句>\n"); }
    | call_without_return SEMICOLON		{ fprintf(yyout, "<无返回值函数调用语句>\n"); }
    | assign_sentence SEMICOLON			{ fprintf(yyout, "<赋值语句>\n"); }
    | read_sentence SEMICOLON			{ fprintf(yyout, "<读语句>\n"); }
    | write_sentence SEMICOLON			{ fprintf(yyout, "<写语句>\n"); }
    | SEMICOLON
    | return_sentence SEMICOLON			{ fprintf(yyout, "<返回语句>\n"); }
    ;

assign_sentence
    : ID ASSIGN expression
    | ID LBRACK expression RBRACK ASSIGN expression
    ;

condition_sentence
    : IF LPARENT condition RPARENT sentence		  
    | IF LPARENT condition RPARENT sentence ELSE sentence
    ;

condition
    : expression relation_cal expression { fprintf(yyout, "<条件>\n"); }
    | expression			 { fprintf(yyout, "<条件>\n"); }
    ;

circle_sentence
    : WHILE LPARENT condition RPARENT sentence
    | DO sentence WHILE LPARENT condition RPARENT
    | FOR LPARENT ID ASSIGN expression SEMICOLON condition SEMICOLON ID ASSIGN ID add_cal step RPARENT sentence
    ;

step
    : unsigned_number		{ fprintf(yyout, "<步长>\n"); }
    ;

call_with_return
    : ID LPARENT value_param_list RPARENT
    ;

call_without_return
    : ID LPARENT value_param_list RPARENT
    ;

value_param_list
    : table 		{ fprintf(yyout, "<值参数表>\n"); }
    |
    ;

table
    : expression
    | table COMMA expression
    ;

sentence_list
    : sentence_list sentence
    |
    ;

read_sentence
    : SCAN LPARENT id_list RPARENT
    ;

id_list
    : ID
    | id_list COMMA ID
    ;

write_sentence
    : PRINT LPARENT string COMMA expression RPARENT
    | PRINT LPARENT string RPARENT
    | PRINT LPARENT expression RPARENT
    ;

return_sentence
    : RETURN SEMICOLON
    | RETURN LPARENT expression RPARENT
    ;

%%

int main() {
    extern FILE *yyin;
    //yyin = fopen("testfile.txt", "r");
    extern FILE *yyout;
    //yyout = fopen("output.txt", "w");
    while(yyparse()){}
    return 0;
}
