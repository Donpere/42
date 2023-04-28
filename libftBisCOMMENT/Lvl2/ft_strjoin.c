/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <domarion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:58:26 by domarion          #+#    #+#             */
/*   Updated: 2023/03/02 11:45:10 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char const *str)
{
	int i = 0;
	while(str[i])
		i++;
	return i;
}

char	*ft_strjoin(char const *s1, char const *s2)
{

// ft_strjoin prend en entrée deux chaînes de caractères s1 et s2, et renvoie une nouvelle chaîne de caractères qui est la concaténation de ces deux chaînes. 
// La nouvelle chaîne de caractères est allouée dynamiquement à l'aide de malloc, il est donc important de s'assurer que cette mémoire est correctement gérée et libérée par l'appelant de la fonction.

// La fonction commence par initialiser deux compteurs, i et j, à zéro. Elle vérifie ensuite si les deux chaînes s1 et s2 sont non nulles à l'aide d'une instruction conditionnelle. 
// Si l'une des deux chaînes est nulle, la fonction renvoie NULL.

// La longueur de la nouvelle chaîne de caractères est calculée en ajoutant les longueurs de s1 et s2 à l'aide de la fonction ft_strlen. 
// Un nouvel espace de mémoire est ensuite alloué pour la nouvelle chaîne de caractères à l'aide de malloc. La longueur totale de la nouvelle chaîne de caractères est multipliée par la taille d'un char (en général 1 octet) 
// et on ajoute 1 pour allouer de la mémoire pour le caractère nul de fin de chaîne.

// Si l'allocation de mémoire échoue, la fonction renvoie NULL.

// Ensuite, la fonction copie les caractères de la première chaîne s1 dans le nouvel emplacement de mémoire alloué dst, en incrémentant le compteur i. 
// Puis, elle copie les caractères de la seconde chaîne s2 dans dst à partir de l'indice i + j, en incrémentant le compteur j.

// Enfin, elle ajoute le caractère nul de fin de chaîne à la fin de la nouvelle chaîne, en position i + j, puis renvoie le pointeur dst contenant la nouvelle chaîne de caractères concaténée.

// Ainsi, la fonction ft_strjoin renvoie une nouvelle chaîne de caractères qui est la concaténation de s1 et s2.

	char	*dst;
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	dst = malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	while (s1[i] != '\0')
	{
		dst[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		dst[i + j] = s2[j];
		j++;
	}
	dst[i + j] = '\0';
	return (dst);
}

int	main(void)
{
	char * a = "hello";
	char * b = "lesloulous";
	char *joined;
	joined = ft_strjoin(a, b);
	printf("%s\n", joined);
	free(joined);
	return (0);
}
