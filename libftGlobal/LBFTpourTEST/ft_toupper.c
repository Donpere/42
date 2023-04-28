/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <domarion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:01:47 by domarion          #+#    #+#             */
/*   Updated: 2023/04/05 17:13:10 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// convert a given lowercase character to its 
// corresponding uppercase character, 
// according to the ASCII character set
// RETURN : 

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
/*
int	main(void)
{
	char str [] = "hello";
	printf("%d\n", ft_toupper(str[2]));
	printf("%d\n", toupper(str[3]));
	return (0);
}*/
