flex lex.l
bison -vtdy parser.y
gcc -o parser lex.yy.c y.tab.c
#-vtdy