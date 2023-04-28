/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <domarion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:58:44 by domarion          #+#    #+#             */
/*   Updated: 2023/04/08 10:06:42 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// concatenate two strings and ensure that the resulting 
// string is not longer than a given size
// RETURN : 

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lgth;

	if (!dst && !size)
		return (0);
	i = 0;
	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	lgth = ft_strlen(dst);
	while (src[i] != '\0' && lgth + 1 < size)
	{
		dst[lgth] = src[i];
		lgth++;
		i++;
	}
	dst[lgth] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}
/*
int    main(void)
{
    char a[12] = "hello";
    char b[12] = "bye";
    size_t t = 8;
    t = ft_strlcat(a, b, t);
    printf("%s\n", a);
    printf("%lu", t);
    return (0);
}
*/
