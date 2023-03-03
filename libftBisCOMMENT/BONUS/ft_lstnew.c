/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <domarion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:52:34 by domarion          #+#    #+#             */
/*   Updated: 2023/03/03 16:54:30 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Le code fourni ici définit une structure de données pour une liste chaînée, ainsi qu'une fonction pour créer un nouvel élément de liste (ft_lstnew), 
// et un programme principal pour tester la fonction ft_lstnew.

////// typedef struct s_list {...} t_list; : Cette ligne de code définit une structure de données pour une liste chaînée. 
// La structure contient un pointeur content vers les données contenues dans l'élément de la liste, 
// et un pointeur next vers l'élément suivant dans la liste.

////// t_list *ft_lstnew(void *content) : Cette fonction alloue dynamiquement un nouvel élément de liste, 
// y stocke le pointeur content fourni, et renvoie un pointeur vers le nouvel élément. 
// Si l'allocation de mémoire échoue, la fonction renvoie NULL.

////// new = malloc(sizeof(t_list)); : Cette ligne de code alloue dynamiquement un nouvel élément de liste en utilisant la fonction malloc. 
// La taille allouée est celle de la structure t_list.

////// new->content = content; : Cette ligne de code stocke le pointeur content fourni dans le champ content de l'élément nouvellement alloué.

////// new->next = NULL; : 
// Cette ligne de code initialise le champ next de l'élément nouvellement alloué à NULL, indiquant qu'il n'y a pas d'élément suivant dans la liste.

////// a = ft_lstnew("hello"); : Cette ligne de code crée un nouvel élément de liste contenant une chaîne de caractères "hello", en appelant la fonction ft_lstnew.

////// printf("%s\n",(char *)a->content); : 
// Cette ligne de code affiche le contenu de l'élément de liste créé précédemment, qui est la chaîne de caractères "hello".

// En résumé, ce code définit une structure de données pour une liste chaînée, ainsi qu'une fonction pour créer un nouvel élément de liste.

typedef struct s_list
{
	void            *content;
	struct s_list   *next;
} t_list;

/////////////////////////////////////


t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/////////////////////////////////////


int	main(void)
{
	t_list	*a;
	a = ft_lstnew("hello");
	printf("%s\n",(char *)a->content);
	return (0);
}
