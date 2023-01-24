/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:59:18 by domarion          #+#    #+#             */
/*   Updated: 2023/01/06 15:59:28 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	t;

	t = 0;
	while (s[t] != '\0')
		t++;
	return (t);
}

/*
int	main(void)
{
	char str [50] = "hello";
	printf("%ld\n", ft_strlen(str));
//	printf("%ld\n", strlen(str));
	return (0);
}
*/
