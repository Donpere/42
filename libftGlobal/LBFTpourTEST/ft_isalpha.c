/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <domarion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:47:26 by domarion          #+#    #+#             */
/*   Updated: 2023/04/05 17:21:07 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// checks for an alphabetic character
// RETURN : values returned are nonzero if the character c 
// falls into the tested class, and a zero value if not

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
/*
int	main(void)
{
	char str [50] = " A0";
	printf("%d\n", ft_isalpha(str[0]));
	printf("%d\n", ft_isalpha(str[1]));
	printf("%d\n", isalpha(str[0]));
	printf("%d\n", isalpha(str[1]));
	return (0);
}*/
