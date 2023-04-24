/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <domarion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:48:08 by domarion          #+#    #+#             */
/*   Updated: 2023/04/05 17:21:30 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// checks for a digit (0 through 9)
// RETURN : values returned are nonzero if the character c 
// falls into the tested class, and a zero value if not

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
/*
int	main(void)
{
	char str [50] = "1r2@";
	printf("%d\n", ft_isdigit(str[0]));
	printf("%d\n", ft_isdigit(str[1]));
	printf("%d\n", ft_isdigit(str[2]));
	printf("%d\n", isdigit(str[0]));
	printf("%d\n", isdigit(str[1]));
	printf("%d\n", isdigit(str[2]));
	return (0);
}*/
