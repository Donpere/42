/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 08:47:21 by domarion          #+#    #+#             */
/*   Updated: 2022/09/28 08:47:32 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
- La fonction strcpy() copie la chaîne pointée par src 
(y compris l'octet nul « \0 » final) dans la chaîne pointée par dest. 
- Les deux chaînes ne doivent pas se chevaucher. 
- La chaîne dest doit être assez grande pour accueillir la copie.
- Les fonctions strcpy() et strncpy() 
renvoient un pointeur sur la chaîne destination dest.  
*/
#include <stdio.h>
//#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int			i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (src[i] == '\0')
		dest[i] = '\0';
	return (dest);
}

/*int main()
{
	char    dest[] = "1234 123 12";
	char    src[] = "Toto est la";

printf("dest : %s \n src : %s \n", dest, src);

ft_strcpy(dest, src);

printf("dest : %s \n src : %s \n", dest, src);

return 0;
}
*/