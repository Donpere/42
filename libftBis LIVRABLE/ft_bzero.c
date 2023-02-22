/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:45:10 by domarion          #+#    #+#             */
/*   Updated: 2023/01/06 15:45:23 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*init;
	size_t	i;

	init = (char *)s;
	i = 0;
	while (i < n)
	{
		init[i] = '\0';
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