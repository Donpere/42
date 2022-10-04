/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:26:16 by domarion          #+#    #+#             */
/*   Updated: 2022/10/03 16:26:23 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *string)
{
	int	i;

	i = 0;
	while (string[i])
		i++;
	return (i);
}

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	
	while (src[i] != '\0' && nb > 0)
	{
			dest[dest_len + i] = src[i];
			i++;
			nb--;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

// int main (void)
// {
// char str1[] = "tatito";
// char str2[] = "BLttiutA";
// int nb = 8;
// 	ft_strstr(*str, *to_find, unsigned int nb);
// 	printf("%s \n", str2);
// 	return (0);
// }
