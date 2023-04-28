/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:45:33 by domarion          #+#    #+#             */
/*   Updated: 2023/01/06 15:45:40 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Cette fonction alloue de la mémoire pour un tableau de taille nmemb avec chaque élément de taille size, 
// et initialise toute la mémoire allouée à zéro.

void	*ft_calloc(size_t nmemb, size_t size)
{
	// La ligne ci-dessus définit la fonction ft_calloc, qui prend deux arguments de taille size_t: 
	// - nmemb qui représente le nombre d'éléments dans le tableau
	// - size qui représente la taille de chaque élément.
	void	*dst;
	size_t	t;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	// Si nmemb ou size est égal à zéro, cela signifie qu'il n'y a aucun élément à allouer ou que chaque élément a une taille nulle. 
	// Dans ce cas, la fonction renvoie un pointeur vers une zone mémoire allouée par malloc() de taille zéro.
	t = nmemb * size;
	if (nmemb != t / size)
		return (NULL);
	// La variable t contient la taille totale du tableau en octets, qui est égale au nombre d'éléments multiplié par la taille de chaque élément. 
	// Si le résultat de la multiplication dépasse la capacité maximale de size_t, le test suivant échouera, 
	// car le calcul de nmemb * size donnera un résultat incorrect. Dans ce cas, la fonction renvoie NULL, indiquant une erreur d'allocation de mémoire.
	dst = malloc(t);
	if (!dst)
		return (NULL);
	
	ft_bzero(dst, t);
	// La fonction ft_bzero() initialise la zone de mémoire allouée à zéro. 
	// Cette étape est nécessaire pour garantir que la mémoire est correctement initialisée avant son utilisation.

	return (dst);
}

// L'appel de malloc(0) peut sembler inutile, mais cela peut en fait être utile dans certains cas. Lorsque vous allouez de la mémoire avec malloc, 
// le système d'exploitation peut allouer plus de mémoire que ce qui est demandé. 
// Cela peut entraîner un gaspillage de mémoire si vous allouez de la mémoire pour une structure de données qui ne sera jamais utilisée.

// En appelant malloc(0), vous demandez une zone mémoire de taille zéro, mais cela n'entraîne pas nécessairement une allocation de mémoire. 
// En effet, selon la spécification de la fonction malloc, si la taille demandée est zéro, 
// la fonction peut soit renvoyer un pointeur valide qui peut être utilisé pour libérer la mémoire plus tard à l'aide de free, 
// soit renvoyer NULL. Cela permet donc de gérer de manière propre et cohérente le cas où vous n'avez pas besoin d'allouer de mémoire pour une structure de données particulière.

// De plus, l'appel de malloc(0) peut être utile pour éviter des erreurs ou des cas particuliers dans certaines fonctions qui traitent des tableaux ou des pointeurs. 
// Par exemple, dans l'implémentation de la fonction calloc de la bibliothèque standard C, si la taille totale demandée est égale à zéro, 
// la fonction renvoie un pointeur valide qui ne peut pas être utilisé pour stocker des données. 
// En revanche, l'appel de malloc(0) dans ce cas précis renvoie toujours un pointeur nul, ce qui est cohérent avec le comportement attendu.

