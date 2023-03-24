/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <domarion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:52:10 by domarion          #+#    #+#             */
/*   Updated: 2023/03/24 11:32:00 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Cette fonction ft_lstmap est utilisée pour appliquer une fonction f à chaque élément d'une liste chaînée lst 
// et créer une nouvelle liste chaînée avec les éléments modifiés. 
// Les éléments de la nouvelle liste sont alloués avec ft_lstnew. Si une allocation échoue, 
// la fonction supprime la nouvelle liste créée jusqu'à présent avec ft_lstclear et retourne NULL. 
// La fonction del est utilisée pour supprimer le contenu de chaque élément de la liste chaînée si nécessaire.

// Voici quelques exemples de comment cette fonction pourrait être utilisée :

// Exemple 1 : Convertir une liste chaînée de chaînes de caractères en majuscules

// Supposons que nous ayons une liste chaînée contenant des chaînes de caractères 
// et que nous voulions créer une nouvelle liste chaînée contenant les mêmes chaînes de caractères en majuscules.


#include "libft.h"

int ft_islower(int c)
{
    return c >= 'a' && c <= 'z';
}

void *to_upper(void *content)
{
	int i = 0;
	char *str = (char *)content;
	char *upper = malloc(strlen(str) + 1);
	if (!upper)
		return NULL;
	while (str[i])
	{
		if(ft_islower(str[i]))
			upper[i] = (str[i]) - 'a' + 'A';
		i++;
	}
	upper[strlen(str)] = '\0';
	return upper;
}

void delete(void *content)
{
	free(content);
}


t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*last;
	t_list	*a;

	if (!lst || !f || !del)
		return (NULL);
	new = ft_lstnew(f(lst->content));
	if (!new)
		return (NULL);
	last = new;
	lst = lst->next;
	while (lst)
	{
		a = ft_lstnew(f(lst->content));
		if (!a)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		last->next = a;
		last = a;
		lst = lst->next;
	}
	last->next = NULL;
	return (new);
}


// Dans cet exemple, nous utilisons la fonction to_upper pour créer une nouvelle chaîne de caractères en majuscules 
// à partir de chaque chaîne de caractères dans la liste chaînée. 
// Nous utilisons également la fonction delete pour supprimer chaque chaîne de caractères de la nouvelle liste chaînée 
// une fois que nous avons fini avec elle. Nous passons ces deux fonctions en tant que paramètres à ft_lstmap 
// pour créer la nouvelle liste chaînée new_lst.

int main()
{
	t_list *lst = NULL;
	ft_lstadd_back(&lst, ft_lstnew("hello"));
	ft_lstadd_back(&lst, ft_lstnew("world"));
	ft_lstadd_back(&lst, ft_lstnew("foo"));
	ft_lstadd_back(&lst, ft_lstnew("bar"));
	t_list *new_lst = ft_lstmap(lst, to_upper, delete);
	ft_lstiter(new_lst, print_str);
	ft_lstclear(&lst, delete);
	ft_lstclear(&new_lst, delete);
	return 0;
}
