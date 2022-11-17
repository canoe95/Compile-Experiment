/*** 定義區塊***/

%{
/* 會直接照搬放檔頭的C code */
#include <stdio.h>
#include <string.h>

#define NEWLINE 0
#define ID 1
#define NUMBER 2
#define STR 3
#define CHARACTER 4

// 关键字
#define CONST 5
#define INT 6
#define CHAR 7
#define VOID 8
#define MAIN 9

#define IF 10
#define ELSE 11
#define	DO 12
#define WHILE 13
#define FOR 14
#define SCAN 15
#define PRINT 16
#define RETURN 17


// 赋值、算术运算
#define AS 18
#define ADD 19
#define DEC 20
#define MUL 21
#define DIV 22

// 比较
#define LT 23
#define	LE 24
#define GT 25
#define	GE 26
#define	EQ 27
#define NEQ 28

// 分号、逗号
#define SEM 29
#define COM 30

// 括号
#define LPT 31
#define RPT 32
#define LBK 33
#define RBK 34
#define LBE 35
#define RBE 36




%}

delim		[ \t \n]
ws		{delim}+
letter		[A-Za-z_]
digit		[0-9]
id		{letter}({letter}|{digit})*
number		{digit}+(\.{digit}+)?(E[+-]?{digit}+)?

/* 這裡告訴flex只要讀取輸入的檔案（不需要其他檔案）*/

%%
    /*** 規則區塊***/
    /* yytext是一個字串變數，內容是符合規則的字串本身。*/

\"[^\"]*\"	{ return (STR); } // 识别字符串，这里要手动去掉双引号
'[^']'		{ return (CHARACTER); } // 识别字符，手动去掉单引号

    /* 识别关键字及特殊符号 */

"const"		{ return (CONST); }
"int"		{ return (INT); }
"char"		{ return (CHAR); }
"void"		{ return (VOID); }
"main"		{ return (MAIN); }
"if"		{ return (IF); }
"else"		{ return (ELSE); }
"do"		{ return (DO); }
"while"		{ return (WHILE); }
"for"		{ return (FOR); }
"scanf"		{ return (SCAN); }
"printf"	{ return (PRINT); }
"return"	{ return (RETURN); }

{id}		{ return (ID); } // 识别标识符
{number}   	{ return (NUMBER); } // 识别整数数字

{ws}	 	{ ; }

"="		{ return (AS); }
"+"		{ return (ADD); }
"-"		{ return (DEC); }
"*"		{ return (MUL); }
"/"		{ return (DIV); }

"<"		{ return (LT); }
"<="		{ return (LE); }
">"		{ return (GT); }
">="		{ return (GE); }
"=="		{ return (EQ); }
"!="		{ return (NEQ); }

";"		{ return (SEM); }
","		{ return (COM); }

"("		{ return (LPT); }
")"		{ return (RPT); }
"["		{ return (LBK); }
"]"		{ return (RBK); }
"{"		{ return (LBE); }
"}"		{ return (RBE); }
.       	{ ; }

%%
/*** C程式碼區塊***/

int yywrap (){
  return 1;
}

void writeout(int c){
  switch(c){
	case NEWLINE: fprintf(yyout, "\n");break;

	case ID: fprintf(yyout, "IDENFR %s", yytext);break;
	case NUMBER: fprintf(yyout, "INTCON %s", yytext);break;
	case STR: {
	    int n = strlen(yytext);
	    //printf("%d\n", n);
	    for(int i = 0; i < n-1; i++){
		yytext[i] = yytext[i+1];
	    }
	    yytext[n-2] = '\0';
	    fprintf(yyout, "STRCON %s", yytext);
	    break;
	}
	case CHARACTER: {
	    int n = strlen(yytext);
	    //printf("%d\n", n);
	    for(int i = 0; i < n-1; i++){
		yytext[i] = yytext[i+1];
	    }
	    yytext[n-2] = '\0';
	    fprintf(yyout, "CHARCON %s", yytext);
	    break;
	}

	// 关键字
	case CONST: fprintf(yyout, "CONSTTK %s", yytext);break;
	case INT: fprintf(yyout, "INTTK %s", yytext);break;
	case CHAR: fprintf(yyout, "CHARTK %s", yytext);break;
	case VOID: fprintf(yyout, "VOIDTK %s", yytext);break;
	case MAIN: fprintf(yyout, "MAINTK %s", yytext);break;

	case IF: fprintf(yyout, "IFTK %s", yytext);break;
	case ELSE: fprintf(yyout, "ELSETK %s", yytext);break;
	case DO: fprintf(yyout, "DOTK %s", yytext);break;
	case WHILE: fprintf(yyout, "WHILETK %s", yytext);break;
	case FOR: fprintf(yyout, "FORTK %s", yytext);break;
	case SCAN: fprintf(yyout, "SCANFTK %s", yytext);break;
	case PRINT: fprintf(yyout, "PRINTFTK %s", yytext);break;
	case RETURN: fprintf(yyout, "RETURNTK %s", yytext);break;


	// 赋值、算术运算
	case AS: fprintf(yyout, "ASSIGN %s", yytext);break;
	case ADD: fprintf(yyout, "PLUS %s", yytext);break;
	case DEC: fprintf(yyout, "MINU %s", yytext);break;
	case MUL: fprintf(yyout, "MULT %s", yytext);break;
	case DIV: fprintf(yyout, "DIV %s", yytext);break;
	
	// 比较
	case LT: fprintf(yyout, "LSS %s", yytext);break;
	case LE: fprintf(yyout, "LEQ %s", yytext);break;
	case GT: fprintf(yyout, "GRE %s", yytext);break;
	case GE: fprintf(yyout, "GEQ %s", yytext);break;
	case EQ: fprintf(yyout, "EQL %s", yytext);break;
	case NEQ: fprintf(yyout, "NEQ %s", yytext);break;
	
	// 分号、逗号
	case SEM: fprintf(yyout, "SEMICN %s", yytext);break;
	case COM: fprintf(yyout, "COMMA %s", yytext);break;
	
	// 括号
	case LPT: fprintf(yyout, "LPARENT %s", yytext);break;
	case RPT: fprintf(yyout, "RPARENT %s", yytext);break;
	case LBK: fprintf(yyout, "LBRACK %s", yytext);break;
	case RBK: fprintf(yyout, "RBRACK %s", yytext);break;
	case LBE: fprintf(yyout, "LBRACE %s", yytext);break;
	case RBE: fprintf(yyout, "RBRACE %s", yytext);break;
    	default: break;
  }
  return;
}


int main (void){
	int c;
	/*
	if (argc >= 2){
	    if ((yyin = fopen(argv[1], "r")) == NULL){
		printf("Can't open file %s\n", argv[1]);
	   	return 1;
	    }
	    if (argc >= 3){
		yyout = fopen(argv[2], "w");
	    }
	}
	*/
	if((yyin = fopen("testfile.txt", "r")) == NULL){
	    printf("can't open testfile.txt");
	    return 1;
	}
	if((yyout = fopen("output.txt", "w")) == NULL){
	    printf("can't open output.txt");
	    return 1;
	}
	while (c = yylex()){
	    writeout(c);
	    writeout(NEWLINE);
	}
	fclose(yyin);
	fclose(yyout);
	/*
	if(argc>=2){
	    fclose(yyin);
	    if (argc >= 3) fclose(yyout);
	}
	*/
	return 0;
}


