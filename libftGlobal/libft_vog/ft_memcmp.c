/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <domarion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:53:39 by domarion          #+#    #+#             */
/*   Updated: 2023/04/13 10:18:36 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// compare two blocks of memory
// return when difference found
// original function no segfault with pointer NULL
// RETURN : an int, neg, 0 or pos if, in order,
// s1 < s2, s1 == s2, s1 > s2

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (s1 == NULL || s2 == NULL)
		return (0);
	if (n == 0)
		return (0);
	while (i < n - 1 && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}
/*
int	main(void)
{
	//char *a = NULL;
	char *b = NULL;
	char a[] = "hellc";
	//char b[] = "helli";
	// o (111)
	// 97 (97)
	// 111 - 97 = 14
	ft_memcmp(a, b, 26);
	//memcmp(a, b, 26);
	//printf("%d\n", ft_memcmp(a, b, 26));
	//printf("%d\n", memcmp(a, b, 26));
	return (0);
}*/
