/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:00:56 by domarion          #+#    #+#             */
/*   Updated: 2023/01/06 16:01:03 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// La fonction ft_strtrim prend en entrée une chaîne de caractères s1 et un ensemble de caractères set. Elle retourne une nouvelle chaîne de caractères allouée dynamiquement qui est identique à s1, 
// sauf qu'elle ne contient aucun des caractères présents dans set en début ou en fin de chaîne.

// La fonction commence par initialiser les variables start, end et i. La variable start est utilisée pour conserver la position du premier caractère de s1 qui ne se trouve pas dans set. 
// La variable end est utilisée pour conserver la position du dernier caractère de s1 qui ne se trouve pas dans set. La variable i est utilisée pour parcourir la nouvelle chaîne de caractères qui sera retournée.

// Ensuite, la fonction parcourt s1 à partir de la gauche avec une boucle while et incrémente la variable start à chaque fois qu'un caractère de s1 se trouve dans set. 
// La boucle s'arrête dès qu'un caractère n'appartenant pas à set est trouvé.

// De la même manière, la fonction parcourt s1 à partir de la droite avec une autre boucle while et décrémente la variable end à chaque fois qu'un caractère de s1 se trouve dans set. 
// La boucle s'arrête dès qu'un caractère n'appartenant pas à set est trouvé.

// La fonction vérifie ensuite si la position de end est inférieure à la position de start. Si c'est le cas, cela signifie que tous les caractères de s1 appartiennent à set. 
// Dans ce cas, la fonction renvoie une nouvelle chaîne de caractères vide. Sinon, la position de end est augmentée de 1 pour inclure le dernier caractère de s1 qui ne se trouve pas dans set.

// La fonction alloue de la mémoire pour la nouvelle chaîne de caractères en utilisant la fonction malloc, en prenant en compte la taille nécessaire pour stocker tous les caractères de s1 qui ne sont pas dans set. 
// Si l'allocation de mémoire échoue, la fonction retourne NULL.

// La fonction parcourt ensuite s1 une dernière fois à l'aide d'une boucle while et copie chaque caractère qui ne se trouve pas dans set dans la nouvelle chaîne de caractères. 
// La variable i est utilisée pour suivre la position de la prochaine case libre dans la nouvelle chaîne de caractères.

// Enfin, la fonction ajoute un caractère nul à la fin de la nouvelle chaîne de caractères pour indiquer la fin de la chaîne et renvoie un pointeur vers la nouvelle chaîne de caractères allouée dynamiquement.


char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*new;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	i = 0;
	end = ft_strlen (s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]) != NULL)
		start++;
	while (end > 0 && ft_strchr(set, s1[end]) != NULL)
		end--;
	if (end < start)
		end = start;
	else
		end++;
	new = malloc(sizeof(char) * (end - start + 1));
	if (!new)
		return (NULL);
	while (start < end)
		new[i++] = s1[start++];
	new[i] = '\0';
	return (new);
}
/*
int	main(void)
{
	char const	*str = "abcabcoucouabc";
	char const	*st = "abc";
	printf("%s\n", ft_strtrim(str, st));
	return (0);
}
*/
