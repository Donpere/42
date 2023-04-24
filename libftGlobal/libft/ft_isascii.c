/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <domarion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:47:46 by domarion          #+#    #+#             */
/*   Updated: 2023/04/05 17:21:02 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// checks whether c is a 7-bit unsigned char value 
// that fits into the ASCII character set
// RETURN : values returned are nonzero if the character c 
// falls into the tested class, and a zero value if not

int	ft_isascii(int c)
{
	if (c >= 0 && c < 128)
		return (1);
	return (0);
}
/*
int	main()
{
	unsigned char str[50] = "hello";
	printf("%d\n", ft_isascii(str[0]));
	printf("%d\n", isascii(str[0]));
	return (0);
}*/
