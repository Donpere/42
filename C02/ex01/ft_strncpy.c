/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:31:41 by domarion          #+#    #+#             */
/*   Updated: 2022/09/28 15:31:52 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
- La fonction strNcpy() copie la chaîne pointée par src 
(y compris l'octet nul « \0 » final) dans la chaîne pointée par dest. 
- Les deux chaînes ne doivent pas se chevaucher. 
- La chaîne dest doit être assez grande pour accueillir la copie.
- Les fonctions strcpy() et strncpy() 
renvoient un pointeur sur la chaîne destination dest.  

- IDEM sauf que seuls les n premiers octets de src sont copiés.
*/
//#include <stdio.h>
//#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
	dest[i] = '\0';
	i++;
	}
	return (dest);
}

/*int main()
{
	unsigned int n = 6;
	char	dest[] = "1123344";
	char	src[] = "Toto";


printf("n = %d\n, dest : %s \n src : %s \n", n, dest, src);

ft_strncpy(dest, src, n);

printf("dest : %s \n src : %s \n", dest, src);

return 0;
}
*/