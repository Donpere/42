/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <domarion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:50:37 by domarion          #+#    #+#             */
/*   Updated: 2023/03/29 17:49:57 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*a;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		a = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = a;
	}
	*lst = NULL;
}

// proposition de modif de GPT :

// Le code semble ne pas avoir d'erreurs de syntaxe, mais il y a une erreur logique dans la fonction ft_lstclear. 
// La fonction ft_lstclear doit libérer la mémoire d'une liste chaînée et de tous ses éléments, 
// mais elle ne libère pas la mémoire du dernier élément de la liste.

// Cela peut être vu dans la boucle while où a est assigné à l'élément suivant avant que l'élément courant ne soit supprimé. 
// Cependant, si l'élément courant est le dernier élément de la liste, alors a sera NULL et le dernier élément ne sera pas supprimé.
//  Pour résoudre ce problème, le dernier élément doit être supprimé après que la boucle while est terminée.

// Voici une version mise à jour de la fonction ft_lstclear qui résout ce problème :

void ft_lstclear(t_list **lst, void (*del)(void*))
{
  t_list *current;
  t_list *next;

  if (!lst || !del)
    return;

  current = *lst;
  while (current)
  {
    next = current->next;
    ft_lstdelone(current, del);
    current = next;
  }
  *lst = NULL;
}