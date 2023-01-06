/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:53:39 by domarion          #+#    #+#             */
/*   Updated: 2023/01/06 15:53:47 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n - 1 && str1[i] == str2[i])
	i++;
	return (str1[i] - str2[i]);
}
/*
int	main(void)
{
	char a[] = "hello";
	char b[] = "hella";
	printf("%d\n", ft_memcmp(a, b, 5));
	printf("%d\n", memcmp(a, b, 5));
	return (0);
}*/
