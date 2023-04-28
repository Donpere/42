/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <domarion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:50:16 by domarion          #+#    #+#             */
/*   Updated: 2023/03/03 16:33:00 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;

// La fonction ft_lstadd_front est une fonction de la bibliothèque libft qui permet d'ajouter un nouvel élément au début d'une liste chaînée. 
// Voici une explication de la fonction :

// void ft_lstadd_front(t_list **lst, t_list *new) : 
// Cette fonction prend en entrée un double pointeur **lst qui pointe vers le pointeur de tête de la liste, 
// et un pointeur *new vers le nouvel élément à ajouter. La fonction ne renvoie rien (void).

////// if (!new || !lst) return ; : 
// Cette ligne de code vérifie si le pointeur vers le nouvel élément ou le pointeur de tête de la liste sont nuls. 
// Si c'est le cas, la fonction se termine immédiatement.

////// new->next = *lst; : Cette ligne de code fait pointer le pointeur new->next vers l'ancienne tête de la liste. 
// Ainsi, l'élément nouvellement ajouté pointe vers l'ancien premier élément de la liste.

////// *lst = new; : Cette ligne de code met à jour le pointeur de tête de la liste pour qu'il pointe vers le nouvel élément ajouté. 
// Ainsi, le nouvel élément devient la nouvelle tête de la liste.

// En résumé, cette fonction ajoute un nouvel élément au début de la liste chaînée en faisant pointer le nouvel élément vers l'ancienne tête de la liste, 
// puis en mettant à jour le pointeur de tête de la liste pour qu'il pointe vers le nouvel élément ajouté.

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	new->next = *lst;
	*lst = new;
}

int main()
{
    // Initialisation d'une liste vide
    t_list *my_list = NULL;

    // Création de trois éléments
    t_list *node1 = ft_lstnew("Premier élément");
    t_list *node2 = ft_lstnew("Deuxième élément");
    t_list *node3 = ft_lstnew("Troisième élément");

    // Ajout des éléments au début de la liste
    ft_lstadd_front(&my_list, node1);
    ft_lstadd_front(&my_list, node2);
    ft_lstadd_front(&my_list, node3);

    // Parcours de la liste et affichage des éléments
    t_list *current_node = my_list;
    while (current_node)
    {
        printf("%s\n", (char *)current_node->content);
        current_node = current_node->next;
    }

    // Libération de la mémoire
    ft_lstclear(&my_list, &free);
    return (0);
}