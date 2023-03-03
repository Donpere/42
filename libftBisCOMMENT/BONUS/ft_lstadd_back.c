/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <domarion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:49:53 by domarion          #+#    #+#             */
/*   Updated: 2023/03/03 16:32:32 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;

// Cette fonction ft_lstadd_back est une fonction de la bibliothèque libft qui ajoute un nouvel élément à la fin d'une liste chaînée.

// La fonction prend en entrée un double pointeur **lst qui pointe vers le pointeur de tête de la liste 
// à laquelle l'élément doit être ajouté, et un pointeur *new qui pointe vers le nouvel élément à ajouter.

// La fonction commence par vérifier si les deux pointeurs sont valides (non nuls), 
// et si l'un des deux est nul, la fonction se termine immédiatement.

// Ensuite, la fonction vérifie si la liste est vide ou non. 
// Si la liste est vide, elle fait simplement pointer le pointeur de tête vers le nouvel élément, puis la fonction se termine.

// Si la liste n'est pas vide, la fonction recherche le dernier élément de la liste en appelant la fonction ft_lstlast, 
// qui retourne un pointeur vers le dernier élément de la liste. 
// Ensuite, elle fait pointer le dernier élément de la liste vers le nouvel élément en utilisant la variable temporaire a.

// La fonction ne retourne rien, elle modifie directement la liste en entrée en y ajoutant le nouvel élément.

// Un double pointeur est utilisé pour pouvoir modifier le pointeur de tête de la liste à l'intérieur de la fonction. En effet, lorsqu'on passe un pointeur simple *lst en tant que paramètre, on ne peut modifier que le contenu pointé par le pointeur, pas le pointeur lui-même.

///////////////////////////////////////////////////////////

// En utilisant un double pointeur **lst, on peut modifier le pointeur de tête de la liste à l'intérieur de la fonction 
// en faisant référence à l'adresse du pointeur de tête dans la mémoire.

// Ainsi, en modifiant le pointeur de tête de la liste à l'intérieur de la fonction, 
// les modifications seront également visibles à l'extérieur de la fonction, 
// car on manipule directement le pointeur de la liste en entrée. 
// Cela permet de garantir que la liste est correctement mise à jour avec le nouvel élément ajouté en fin de liste.


void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*a;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	a = ft_lstlast(*lst);
	a->next = new;
}

int main(void)
{
    // Création de la liste chaînée
    t_list *lst = ft_lstnew("Premier élément");

    // Ajout de deux éléments à la fin de la liste
    ft_lstadd_back(&lst, ft_lstnew("Deuxième élément"));
    ft_lstadd_back(&lst, ft_lstnew("Troisième élément"));

    // Parcours de la liste et affichage de chaque élément
    t_list *curr = lst;
    while (curr != NULL)
    {
        printf("%s\n", curr->content);
        curr = curr->next;
    }

    // Libération de la mémoire allouée pour la liste
    ft_lstclear(&lst, free);
    return 0;
}
