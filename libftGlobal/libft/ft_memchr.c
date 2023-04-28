/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <domarion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:53:18 by domarion          #+#    #+#             */
/*   Updated: 2023/04/06 10:48:30 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// search for a specific character in a part of a block of memory
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
			return (((unsigned char *)(s + i)));
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char *a;
	char *b;
	a = ft_memchr("hello", 'l', 4);
	b = memchr("hello", 'l', 4);
	printf("%s\n", a);
	printf("%s\n", b);
	return (0);
}*/
