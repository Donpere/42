/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:06:26 by domarion          #+#    #+#             */
/*   Updated: 2023/01/23 10:06:30 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "puts.h"

void printList(t_list *lst)
{
	while(lst != NULL)
	{
		ft_putnbr(lst->data);
		ft_putchar('\n');
		lst = lst->next;
	}
}

t_list* firstCell(t_list *orgn, int val)
{
	t_list *fCell;
	fCell = malloc(sizeof(t_list));
	if(fCell == NULL)
	{
		ft_putstr("Malloc error in fistCell !");
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

	if(newCell == NULL)
	{
		ft_putstr("Malloc error in addEndCell !");
		return 1;
	}

	newCell->data = val;
	newCell->next = NULL;
	while(lst->next != NULL)
	{
		lst = lst->next;
	}

	lst->next = newCell;



return 0;
}
