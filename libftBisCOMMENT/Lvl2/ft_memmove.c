/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <domarion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:54:22 by domarion          #+#    #+#             */
/*   Updated: 2023/02/22 15:44:42 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <string.h>

// La fonction ft_memmove prend trois arguments : dest, src et n. dest est un pointeur vers la zone de mémoire de destination, 
// src est un pointeur vers la zone de mémoire source, et n est le nombre d'octets à copier.

// La première chose que fait la fonction est de vérifier si les pointeurs sont nuls. Si c'est le cas, elle renvoie NULL.

// Ensuite, la fonction convertit les pointeurs dest et src en pointeurs non constants de type unsigned char, 
// afin de permettre une copie octet par octet. La variable i est initialisée à zéro pour compter les octets copiés.

// La fonction utilise ensuite une structure conditionnelle pour déterminer la direction de la copie. 
// Si la destination dest est située avant la source src dans la mémoire, 
// la fonction utilise une boucle while pour copier les données de src à dest en parcourant les octets un par un. 
// La variable i est utilisée comme index pour les pointeurs d et s.

// Si la source src est située avant la destination dest dans la mémoire, la fonction utilise également une boucle while pour copier les données, 
// mais cette fois en commençant par la fin de la zone de mémoire et en copiant les octets de droite à gauche pour éviter que les données déjà écrites ne soient écrasées avant d'être copiées. 
// La variable n est utilisée comme index dans ce cas.

// Enfin, la fonction renvoie un pointeur vers la zone de mémoire de destination dest.

// En résumé, la fonction ft_memmove permet de copier une zone de mémoire d'une source vers une destination tout en gérant correctement le cas où la source et la destination se chevauchent, 
// en copiant les données dans le bon ordre pour éviter les conflits de données.

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;

// d < s dans la fonction ft_memmove compare les adresses mémoire pointées par les pointeurs d et s.

// Plus précisément, si d est inférieur à s, cela signifie que la zone de mémoire de destination se situe avant la zone de mémoire source dans la mémoire physique. 
// Dans ce cas, la fonction copie les données de gauche à droite, en commençant par le premier octet de la zone source et en les écrivant dans la zone de destination, octet par octet, dans l'ordre.

// En revanche, si d est supérieur ou égal à s, cela signifie que la zone de mémoire de destination se situe après la zone de mémoire source dans la mémoire physique. 
// Dans ce cas, la fonction copie les données de droite à gauche, en commençant par le dernier octet de la zone source et en les écrivant dans la zone de destination, octet par octet, dans l'ordre inverse.

// La comparaison de l'adresse de deux pointeurs est souvent utilisée pour déterminer l'ordre dans lequel les données doivent être copiées lorsque la source et la destination se chevauchent. 
// Cela permet d'éviter de copier des données dans une zone mémoire qui va être écrasée par la copie suivante, ce qui peut entraîner des résultats inattendus.
 
 // copie de gauche vers droite (puisque i == 0)
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}

	// copie de droite vers gauche (puisque n == longueur de la copie)
	else
	{
		while (n > 0)
		{
			d[n-1] = s[n-1];
			n--;
		}
	}
	return (dest);
}

int	main(void)
{
	char d[] = "hello";
	char s[] = "ab";
	ft_memmove(d, s, 2);
	memmove(d, s, 2);
	printf("%s\n", (d));
	return (0);
}







#include <stdio.h>
#include <string.h>


void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;

	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}

	else
	{
		while (n > 0)
		{
			d[n-1] = s[n-1];
			n--;
		}
	}
	return (dest);
}

int	main(void)
{
	char d[] = "hello";
	char s[] = "ab";
	ft_memmove(d, s, 2);
	memmove(d, s, 2);
	printf("%s\n", (d));
	return (0);
}
