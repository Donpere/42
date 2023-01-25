/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 11:44:54 by domarion          #+#    #+#             */
/*   Updated: 2023/01/24 11:45:02 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*test;
	size_t	i;

	test = (char *)s;
	i = 0;
	while (i < n)
	{
		test[i] = '\0';
		i++;
	}
}

// int	main(void)
// {
// 	unsigned char s[] = "hello";
// 	unsigned char t[] = "hello";

// 	printf("String ft_bzero : %s\n", (s));
// 	printf("String bzero : %s\n", (t));
// 	ft_bzero(s, 2);
// 	bzero(t, 2);

// 	printf("String ft_bzero : %s\n", (s));
// 	printf("String bzero : %s\n", (t));
// 	return (0);
// }
