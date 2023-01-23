/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 08:16:08 by domarion          #+#    #+#             */
/*   Updated: 2023/01/22 08:16:16 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

typedef struct s_list
{
	int			data;
	struct s_list	*next;
}	t_list;

int isEmpty(t_list *lst);
t_list *firstCell(t_list *lst, int val);
int addEndCell(t_list *lst, int val);
int lenList(t_list *lst);
void printList(t_list *lst);
t_list *freeList(t_list *lst);

#endif
