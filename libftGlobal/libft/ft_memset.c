/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <domarion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:54:40 by domarion          #+#    #+#             */
/*   Updated: 2023/04/05 17:14:11 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// set a block of memory with a specified value
// RETURN : 

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*test;
	size_t			i;

	test = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		test[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	unsigned char s[10000] = "hello";
	unsigned char t[10000] = "hello";
	ft_memset(s, 50, 3);
	memset(t, 50, 3);
	printf("%s\n", (s));
	printf("%s\n", (t));
	return (0);
}*/
