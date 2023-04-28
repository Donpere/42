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
#include <bsd/string.h>

// copy a string into a specified buffer and 
// ensure that the resulting string is not longer than a given size
// original strlcpy segfault with pointer NULL 
// RETURN : 

size_t	ft_strlen(const char *s)
{
	size_t	t;

	t = 0;
	while (s[t] != '\0')
		t++;
	return (t);
}

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

int	main(void)
{
	char *n = NULL;
	char dst[] = "hello";
	char src[] = "coucou";
	size_t tst = 0;
	tst = strlcpy(dst, src, 5);
	printf("%ld\n",ft_strlcpy(dst, src, 5));
	return (0);
}

