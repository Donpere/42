/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 08:32:01 by domarion          #+#    #+#             */
/*   Updated: 2023/01/22 08:32:05 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "putSerie.h"
#include <stdlib.h>

int isEmpty(t_list *lst)
{
	if(lst == NULL)
		printf("Empty list")
	return lst == NULL;
}

t_list *firstCell(t_list *lst, int val)
{
	t_list *fCell;
	fCell = malloc(sizeof(t_list));
	if (fCell == NULL)
	{
		ft_putstr("Malloc error firstCell !");
		return NULL;
	}

	fCell->data = val;
	fCell->next = NULL;
	
	return fCell;
}

int addEndCell(t_list *lst, int val)
{
	t_list *newCell;
	newCell = malloc(sizeof(t_list));

	if (newCell == NULL)
	{
		ft_putstr("Malloc error addCellEnd !");
		return 1;
	}
	
	newCell->data = val;
	newCell->next = NULL;
	
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	lst->next = newCell;
}

int lenList(t_list *lst)
{
	int i = 0;
	if(lst == NULL || lst->next == NULL)
	{
		ft_putstr("List empty");
		ft_putchar('\n');
		return i;
	}

	while(lst->next != NULL)
	{
		lst = lst->next;
		i++;
	}
	
return i;
}

void printList(t_list *lst)
{
	while(lst != NULL)
	{
		ft_putnbr(lst->data);
		lst = lst->next;
		ft_putchar('\n');
	}
}

t_list *freeList(t_list *lst)
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
