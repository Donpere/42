#include <stdio.h>

int main()
{
char c[]={'A','C'}; //’A’ = 65
char d,e;
char *p_c = (c);
d=*(p_c+1); // c[1] ou C
e=*(p_c)+1; //66 ou B

printf("%c\n", d);
printf("%c\n", e);

return 0;

}