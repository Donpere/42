/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:59:58 by domarion          #+#    #+#             */
/*   Updated: 2023/01/06 16:00:04 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	if (n == 0)
		return (0);
	while ((i < n - 1) && s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
/*
int	main(void)
{
	char s1[50] = "abcdef";
	char s2[50] = "abcde";
	printf("%d\n", ft_strncmp(s1, s2, 6));
	char s3[50] = "abcdef";
	char s4[50] = "abcde";
	printf("%d\n", strncmp(s3, s4, 6));
	return(0);
}*/
