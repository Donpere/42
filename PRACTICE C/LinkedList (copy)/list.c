#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

// FONCTIONS PRINT
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;
	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		char max[] = "-2147483648";
		ft_putstr(max);
		return;
	}

	if (nb < 0 && nb > -2147483648)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}

// FONCTIONS LINKED LIST
t_list *creatCell(void)
{
	return NULL;
}

int isListEmpty(t_list* li)
{
	if (li == NULL)
		{
		ft_putstr("La liste est vide.");
		return 1;
		}
	ft_putstr("Liste contient elements.");
	return 0;
}