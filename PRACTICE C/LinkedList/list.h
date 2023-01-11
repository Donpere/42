/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:41:12 by domarion          #+#    #+#             */
/*   Updated: 2023/01/11 11:41:18 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

typedef enum s_bool
{
	false,
	true
}	t_bool;

typedef struct s_listElement
{
	int			data;
	struct List	*next;
}	t_list;

void ft_putchar(char c);
void ft_putstr(char *str);
t_list	newList(void);
t_bool	IsListEmpty(t_list l);

#endif
