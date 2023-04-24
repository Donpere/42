/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <domarion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:59:02 by domarion          #+#    #+#             */
/*   Updated: 2023/04/05 17:13:28 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// copy a string into a specified buffer and 
// ensure that the resulting string is not longer than a given size
// original strlcpy segfault with pointer NULL 
// RETURN : length of the string src whithout '\0'

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
int	main(void)
{
	char dst[] = "hello";
	char src[] = "coucou";
	printf("%ld\n",ft_strlcpy(dst, src, 5));
	return (0);
}
*/
