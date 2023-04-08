/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <domarion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:48:50 by domarion          #+#    #+#             */
/*   Updated: 2023/04/05 17:21:29 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

// checks for any printable character including space
// RETURN : values returned are nonzero if the character c 
// falls into the tested class, and a zero value if not

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
int	main(void)
{
	char str [] = "hello";
	printf("%d\n", ft_isprint(str[5]));
	printf("%d\n", isprint(str[5]));
	return (0);
}*/
