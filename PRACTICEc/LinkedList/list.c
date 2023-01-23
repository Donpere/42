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
t_list *createCell(int val)
{
	t_list *cell = malloc(sizeof(t_list));
	if(!cell)
		return NULL;
	
	cell->data = val;
	cell->next = NULL;

	return cell;
}

t_list *emptyCell(void)
{
	return NULL;
}

int isListEmpty(t_list* li)
{
	if (li == NULL)
		{
		return 1;
		}
		
	return 0;
}

t_list *addCell(t_list *li, int val, int pos)
{
	t_list *prec = li;
	t_list *cur = li;
	int i = 0;
	// crea nouvelle cell
	t_list *newCell = createCell(val);

	// cas 1 : on a une liste vide, on devra l'ajouter en premiere position
	if(isListEmpty(li))
		return newCell;
	
	// cas 2 liste pas vide & pos a 0 (inutile de coder listEmpty puisqu'elle aura saute le if precedent)
	// newCell devient alors le pointeur de tete et s'accroche a celle d'apres qui pointe vers NULL
	// concretement next de newCell contiendra l'adresse de li & li pointe vers NULL
	if(pos == 0)
	{
		newCell->next = li;
		return newCell;
	}
}

// fonctions print
void printList(t_list *li)
{
	while(!isListEmpty(li))
	{
		ft_putnbr(li->data);
		ft_putchar('\n');
		li = li->next;
	}
}