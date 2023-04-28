#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void toto(char *str)
{
	int i = 0;
	while(str[i])
	{
		printf("[%d], %c\n", i, str[i]);
		i++;
	}
}

void papa(int c)
{
	t_list *blabla = malloc(sizeof(t_list));
	char *chain = "cul";
	blabla->content = chain; 
	toto(blabla->content);
}

int main()
	{
		papa(2);

		return 0;
	}
