#include <stdio.h>
#include <stdlib.h>

int strLastChar(char *str)
{
	int i;

	i = 0;
	while(str[i])
	 i++;
	return(i);
}



int main()
{
	char *str = "sal";
	int (*lsr)(char *);
	lsr = &strLastChar;
	printf("str : %p\n\n", str);

	printf("str : %p\n", &str[0]);
	printf("str : %p\n", &str[1]);
	printf("str : %p\n", &str[2]);
	printf("str : %p\n", &str[3]);

	printf("str fin : %p\n", &str[lsr(str)]);
//expression equivalente parce que l'appel a une fonction est en fait un dereferencement a un pointeur sur fonction
	printf("str fin : %p\n", &str[(*lsr)(str)]);

	return 0;
}