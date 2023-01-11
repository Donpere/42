#include <stdio.h>
#include <stdlib.h>
#include "list.h"


void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_putstr(char *str);
{
	int i;
	while(str)
		ft_putchar(str[i]);
		i++;
}

t_list newList(void)
{	
	return NULL;
}

t_bool isListEmpty(t_list *l)
{
	if (l == NULL)
		return true;

	return false;
}
