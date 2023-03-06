#include <stdio.h>

int cmpChar(char c, char d)
{
	return(int)c > (int)d ? 1 : -1;
}

int main(void)
{
	char c = 'H';
	char d = 'E';
	printf("%d\n", cmpFloat(c, d));
	return 0;
}