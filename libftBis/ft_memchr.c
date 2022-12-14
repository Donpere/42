/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:53:18 by domarion          #+#    #+#             */
/*   Updated: 2023/01/06 15:53:27 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
