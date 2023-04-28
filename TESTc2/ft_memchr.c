/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <domarion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:53:18 by domarion          #+#    #+#             */
/*   Updated: 2023/04/12 17:16:58 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <string.h>

// search for a specific character in a part of a block of memory
// "n" is the number of char to search into, so "hell"
// RETURN : a pointer to the matching byte or 
// NULL if the character does not occur in the given memory area or
// if size_t n is at 0

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((unsigned char *)(s + i));
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char *a;
	char *b;
//	a = ft_memchr("helpo", 'l', 2);
	b = memchr("helpo", 'l', 4);
//	printf("%s\n", a);
//	printf("%s\n", b);
	return (0);
}