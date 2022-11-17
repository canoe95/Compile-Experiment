flex calc.l
bison -vtdy calc.y
gcc -o calc lex.yy.c y.tab.c