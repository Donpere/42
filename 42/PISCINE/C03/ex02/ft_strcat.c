/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:10:07 by domarion          #+#    #+#             */
/*   Updated: 2022/10/03 15:10:21 by domarion         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	while (src[i] != '\0')
	{
			dest[dest_len + i] = src[i];
			i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

// int main (void)
// {
// 	char str1[] = "tatito";
// 	char str2[] = "BLA";
// 	ft_strcat(str2, str1);
// 	printf("%s \n", str2);
// 	return (0);
// }