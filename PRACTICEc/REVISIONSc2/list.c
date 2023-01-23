#include <stdlib.h>
#include "list.h"
#include "putSerie.h"

int isEmpty(t_list *lst)
{
	return lst == NULL;
}

t_list* firstCell(int val)
{
	t_list *newCell = malloc(sizeof(t_list));
	if(newCell == NULL)
	{
		ft_putstr("Malloc error firstCell !");
		return NULL;
	}

	newCell->data = val;
	newCell->next = NULL;
	return newCell;
}

int printList(t_list *lst)
{
	if(isEmpty(lst) == 0)
	{
		while(lst->next != NULL)
		{
			ft_putnbr(lst->data);
			ft_putchar('\n');
			lst = lst->next;
		}
			ft_putnbr(lst->data);
			ft_putchar('\n');
	}
	else
		ft_putstr("Empty list !");
}

int addEndCell(t_list *lst, int val)
{
	while(lst->next != NULL)
	{
		lst = lst->next;
	}

	t_list *newCell = malloc(sizeof(t_list));
	if(newCell == NULL)
	{
		ft_putstr("Malloc error addEndCell");
		return 1;
	}
	lst->next = newCell;
	newCell->data = val;
	newCell->next = NULL;

	return 0;
}

t_list* freeList(t_list *lst)
{
	t_list *tmp;
	while(lst != NULL)
	{
		tmp = lst;
		lst = lst->next;
		free(tmp);
	}
	lst = NULL;
	return lst;
}