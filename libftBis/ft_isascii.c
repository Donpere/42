/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:47:46 by domarion          #+#    #+#             */
/*   Updated: 2023/01/06 15:47:54 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
