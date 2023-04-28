/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <domarion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:49:53 by domarion          #+#    #+#             */
/*   Updated: 2023/03/29 17:49:59 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;

// Cette fonction ft_lstadd_back est une fonction de la bibliotheque libft qui ajoute un nouvel element a la fin d'une liste chainee.

// La fonction prend en entree un double pointeur **lst qui pointe vers le pointeur de tete de la liste 
// a laquelle l'element doit etre ajoute, et un pointeur *new qui pointe vers le nouvel element a ajouter.

// La fonction commence par verifier si les deux pointeurs sont valides (non nuls), 
// et si l'un des deux est nul, la fonction se termine immediatement.

// Ensuite, la fonction verifie si la liste est vide ou non. 
// Si la liste est vide, elle fait simplement pointer le pointeur de tete vers le nouvel element, puis la fonction se termine.

// Si la liste n'est pas vide, la fonction recherche le dernier element de la liste en appelant la fonction ft_lstlast, 
// qui retourne un pointeur vers le dernier element de la liste. 
// Ensuite, elle fait pointer le dernier element de la liste vers le nouvel element en utilisant la variable temporaire a.

// La fonction ne retourne rien, elle modifie directement la liste en entree en y ajoutant le nouvel element.

// Un double pointeur est utilise pour pouvoir modifier le pointeur de tete de la liste a l'interieur de la fonction. En effet, lorsqu'on passe un pointeur simple *lst en tant que paramètre, on ne peut modifier que le contenu pointe par le pointeur, pas le pointeur lui-meme.

///////////////////////////////////////////////////////////

// En utilisant un double pointeur **lst, on peut modifier le pointeur de tete de la liste a l'interieur de la fonction 
// en faisant reference a l'adresse du pointeur de tete dans la memoire.

// Ainsi, en modifiant le pointeur de tete de la liste a l'interieur de la fonction, 
// les modifications seront egalement visibles a l'exterieur de la fonction, 
// car on manipule directement le pointeur de la liste en entree. 
// Cela permet de garantir que la liste est correctement mise a jour avec le nouvel element ajoute en fin de liste.


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
    // Creation de la liste chainee
    t_list *lst = ft_lstnew("Premier element");

    // Ajout de deux elements a la fin de la liste
    ft_lstadd_back(&lst, ft_lstnew("Deuxieme element"));
    ft_lstadd_back(&lst, ft_lstnew("Troisieme element"));

    // Parcours de la liste et affichage de chaque element
    t_list *curr = lst;
    while (curr != NULL)
    {
        printf("%s\n", curr->content);
        curr = curr->next;
    }

    // Liberation de la memoire allouee pour la liste
    ft_lstclear(&lst, free);
    return 0;
}
