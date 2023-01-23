/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:05:15 by domarion          #+#    #+#             */
/*   Updated: 2023/01/23 10:05:21 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H
#include <stdlib.h>

typedef struct s_list
{
	int data;
	struct s_list *next;	
} t_list;

void printList(t_list *lst);
t_list* firstCell(t_list *orgn, int val);
int addEndCell(t_list *lst, int val);


#endif
