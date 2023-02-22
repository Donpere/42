/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:58:44 by domarion          #+#    #+#             */
/*   Updated: 2023/01/06 15:58:51 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// La fonction ft_strlcat est utilisée pour concaténer une chaîne de caractères src à la fin d'une chaîne de caractères dst. 
// La fonction est similaire à ft_strncat, mais prend un troisième argument, size, qui est la taille maximale de dst à ne pas dépasser. 
// La fonction renvoie la longueur de la chaîne résultante, qui est la longueur de dst + la longueur de src.

// La fonction commence par vérifier si dst et size ont une valeur valide. Si dst est nul et que size est égal à 0, la fonction renvoie 0. 
// Ensuite, la fonction compare la taille de dst avec size. Si size est inférieure ou égale à la longueur de dst, la fonction renvoie la longueur de src + size, car il n'y a pas de place pour concaténer src à la fin de dst. 
// Sinon, la fonction continue de concaténer src à dst jusqu'à ce qu'elle atteigne la fin de src ou que dst atteigne la taille size-1. La fonction renvoie ensuite la longueur de la chaîne concaténée.


size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lgth;

	if (!dst && !size)
		return (0);
	i = 0;
	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	lgth = ft_strlen(dst);
	while (src[i] != '\0' && lgth + 1 < size)
	{
		dst[lgth] = src[i];
		lgth++;
		i++;
	}
	dst[lgth] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}
/*
int	main(void)
{
	char *a = "hello";
	char *b = "bye";
	size_t t = 3;
	printf("%lu\n", ft_strlcat(a, b, t));
//	printf("%lu\n", strlcat(a, b, t));
	return (0);
}
*/
