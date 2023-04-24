/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <domarion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:59:18 by domarion          #+#    #+#             */
/*   Updated: 2023/04/05 17:13:27 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// determine the length of a string, the number of characters in the string 
// before the terminating null character
// segfault with pointer NULL
// RETURN : length of the string without '\0'

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
