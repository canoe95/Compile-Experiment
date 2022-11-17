/*** 定義區塊***/

%{
/* 會直接照搬放檔頭的C code */
#include <stdio.h>
#include <string.h>
#include "y.tab.h"
%}

delim		[ \t \n]
ws		{delim}+
letter		[A-Za-z_]
unsigned	[1-9]
digit		[0-9]
id		{letter}({letter}|{digit})*
number		{unsigned}({digit})*
zero		0


/* 這裡告訴flex只要讀取輸入的檔案（不需要其他檔案）*/

%%
    /*** 規則區塊***/
    /* yytext是一個字串變數，內容是符合規則的字串本身。*/

\"[^\"]*\"	{ 
		    int n = strlen(yytext);
	    	    //printf("%d\n", n);
	    	    for(int i = 0; i < n-1; i++){
			yytext[i] = yytext[i+1];
	   	    }
	    	    yytext[n-2] = '\0';
	    	    fprintf(yyout, "STRCON %s\n", yytext);
		    return (STR);
		} // 识别字符串，这里要手动去掉双引号

'[^']'		{ 
		    int n = strlen(yytext);
	    	    //printf("%d\n", n);
	    	    for(int i = 0; i < n-1; i++){
			yytext[i] = yytext[i+1];
	    	    }
	    	    yytext[n-2] = '\0';
	    	    fprintf(yyout, "CHARCON %s\n", yytext);
	    	    return (CHARACTER); 
		} // 识别字符，手动去掉单引号

    /* 识别关键字及特殊符号 */

"const"		{ fprintf(yyout, "CONSTTK %s\n", yytext); return (CONST); }
"int"		{ fprintf(yyout, "INTTK %s\n", yytext); return (INT); }
"char"		{ fprintf(yyout, "CHARTK %s\n", yytext); return (CHAR); }
"void"		{ fprintf(yyout, "VOIDTK %s\n", yytext); return (VOID); }
"main"		{ fprintf(yyout, "MAINTK %s\n", yytext); return (MAIN); }
"if"		{ fprintf(yyout, "IFTK %s\n", yytext); return (IF); }
"else"		{ fprintf(yyout, "ELSETK %s\n", yytext); return (ELSE); }
"do"		{ fprintf(yyout, "DOTK %s\n", yytext); return (DO); }
"while"		{ fprintf(yyout, "WHILETK %s\n", yytext); return (WHILE); }
"for"		{ fprintf(yyout, "FORTK %s\n", yytext); return (FOR); }
"scanf"		{ fprintf(yyout, "SCANFTK %s\n", yytext); return (SCAN); }
"printf"	{ fprintf(yyout, "PRINTFTK %s\n", yytext); return (PRINT); }
"return"	{ fprintf(yyout, "RETURNTK %s\n", yytext); return (RETURN); }

{id}		{ fprintf(yyout, "IDENFR %s\n", yytext); return (ID); } // 识别标识符
{number}   	{ fprintf(yyout, "INTCON %s\n", yytext); return (NUMBER); } // 识别整数数字
{zero}		{ fprintf(yyout, "INTCON %s\n", yytext); return ZERO; }

{ws}	 	{ ; }

"="		{ fprintf(yyout, "ASSIGN %s\n", yytext); return (ASSIGN); }
"+"		{ fprintf(yyout, "PLUS %s\n", yytext); return (ADD); }
"-"		{ fprintf(yyout, "MINU %s\n", yytext); return (SUB); }
"*"		{ fprintf(yyout, "MULT %s\n", yytext); return (MUL); }
"/"		{ fprintf(yyout, "DIV %s\n", yytext); return (DIV); }

"<"		{ fprintf(yyout, "LSS %s\n", yytext); return (LSS); }
"<="		{ fprintf(yyout, "LEQ %s\n", yytext); return (LEQ); }
">"		{ fprintf(yyout, "GRE %s\n", yytext); return (GRE); }
">="		{ fprintf(yyout, "GEQ %s\n", yytext); return (GEQ); }
"=="		{ fprintf(yyout, "EQL %s\n", yytext); return (EQL); }
"!="		{ fprintf(yyout, "NEQ %s\n", yytext); return (NEQ); }

";"		{ fprintf(yyout, "SEMICN %s\n", yytext); return (SEMICOLON); }
","		{ fprintf(yyout, "COMMA %s\n", yytext); return (COMMA); }

"("		{ fprintf(yyout, "LPARENT %s\n", yytext); return (LPARENT); }
")"		{ fprintf(yyout, "RPARENT %s\n", yytext); return (RPARENT); }
"["		{ fprintf(yyout, "LBRACK %s\n", yytext); return (LBRACK); }
"]"		{ fprintf(yyout, "RBRACK %s\n", yytext); return (RBRACK); }
"{"		{ fprintf(yyout, "LBRACE %s\n", yytext); return (LBRACE); }
"}"		{ fprintf(yyout, "RBRACE %s\n", yytext); return (RBRACE); }
.       	{ ; }

%%
/*** C程式碼區塊***/

int yywrap (){
    return 1;
}

/*
int main (void){
    int c;
    if((yyin = fopen("testfile.txt", "r")) == NULL){
        printf("can't open testfile.txt");
        return 1;
    }
    if((yyout = fopen("output.txt", "w")) == NULL){
        printf("can't open output.txt");
        return 1;
    }
    while (c = yylex()){}
    fclose(yyin);
    fclose(yyout);
    return 0;
}
*/


