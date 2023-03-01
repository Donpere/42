/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <domarion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:51:16 by domarion          #+#    #+#             */
/*   Updated: 2023/03/01 11:53:13 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}	
}
//Par exemple, si vous avez une liste chaînée qui contient des chaînes de caractères, 
//vous pouvez utiliser ft_lstiter pour afficher chaque chaîne à l'écran :

void       print_string(void *content)
{
        ft_putstr((char *)content);
}

int     main(void)
{
        t_list  *list;

        list = ft_lstnew("Hello");
        ft_lstadd_front(&list, ft_lstnew("world"));
        ft_lstiter(list, print_string);
        ft_lstclear(&list, free);
        return (0);
}