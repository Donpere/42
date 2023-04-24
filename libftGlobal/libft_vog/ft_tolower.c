/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <domarion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:01:30 by domarion          #+#    #+#             */
/*   Updated: 2023/04/05 17:13:13 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// convert a given uppercase character to its 
// corresponding lowercase character, 
// according to the ASCII character set
// RETURN :  the ascii of the new char

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}
/*
int	main(void)
{
	char str[] = "HELLO";
	printf("%d\n", ft_tolower(str[2]));
	printf("%d\n", tolower(str[3]));
	return (0);
}*/
