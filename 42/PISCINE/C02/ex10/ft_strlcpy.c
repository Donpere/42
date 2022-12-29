/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 10:25:02 by domarion          #+#    #+#             */
/*   Updated: 2022/10/01 10:25:13 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

unsigned int	ft_strlen(char *str_to_len)
{
	unsigned int	i;

	i = 0;
	while (str_to_len[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	size_src;

	i = 0;
	size_src = ft_strlen(src);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
		dest[i] = '\0';
	return (size_src);
}

/*int main()
{
	char source[] = "Tapiro";
	char destination[] = "salutation";
	unsigned int length = ft_strlen(source);

	length = ft_strlcpy(destination, source, length);

	printf("%d", length);
	return (0);
}*/