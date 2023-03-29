/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <domarion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:51:47 by domarion          #+#    #+#             */
/*   Updated: 2023/03/29 11:47:50 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// La fonction add_last prend en entrée un pointeur double **lst et un pointeur générique void *content.

// L'intérêt d'utiliser un double pointeur **lst ici est de permettre à la fonction de modifier le pointeur lst
//  à l'extérieur de la fonction, en lui affectant une nouvelle adresse de mémoire.

// En effet, la fonction add_last est utilisée pour ajouter un élément à la fin d'une liste chaînée. 
// La liste chaînée est représentée par un pointeur lst qui pointe sur le premier élément de la liste. 
// Si la liste est vide, lst est égal à NULL.

// Si la liste n'est pas vide, la fonction add_last doit parcourir la liste jusqu'à trouver le dernier élément, 
// et ajouter un nouvel élément à la fin. Pour ajouter l'élément à la fin de la liste, 
// la fonction a besoin de modifier le pointeur next du dernier élément de la liste, 
// en le faisant pointer vers le nouvel élément. Cependant, pour accéder au dernier élément de la liste, 
// il faut parcourir tous les éléments précédents. 
// Cela signifie que la fonction doit modifier le pointeur lst pour parcourir la liste à partir du dernier élément, et non pas du premier.

// C'est là que le double pointeur **lst devient utile. En utilisant un double pointeur, 
// la fonction peut modifier le pointeur lst à l'extérieur de la fonction, 
// en lui affectant l'adresse de mémoire du dernier élément de la liste. 
// Cela permet à la fonction de continuer à parcourir la liste à partir du dernier élément, 
// et d'ajouter le nouvel élément à la fin de la liste.

// En résumé, l'utilisation d'un double pointeur **lst permet à la fonction add_last de modifier le pointeur lst 
// à l'extérieur de la fonction, en lui affectant une nouvelle adresse de mémoire pour parcourir 
// la liste à partir du dernier élément et ajouter un nouvel élément à la fin.

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
