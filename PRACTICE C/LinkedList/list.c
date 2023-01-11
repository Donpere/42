#include <stdio.h>
#include <stdlib.h>
#include "list.h"


void ft_putchar(char c)
{
	write(c);
	return;
}
void ft_putstr(char *str);
{
	int i;
	while(str)
		write(str[i]);

	return;
}

t_list newList(void)
{	
	return NULL;
}

t_bool IsListEmpty(t_list *l)
{
	if (l == NULL)
		return true;

	return false;
}
