/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:42:08 by domarion          #+#    #+#             */
/*   Updated: 2023/01/06 15:42:25 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int	i;
	int	rslt;
	int	neg;

	i = 0;
	rslt = 0;
	// attention si neg == 0 il restera a 0
	neg = 1;
	// gestion des cas des espaces, retours et tabs
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	
		printf("%d, %d, %d\n", i, neg, rslt);
	// gestion du signe
	while (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			neg = neg * -1;
		i++;
	}
		printf("%d, %d, %d\n", i, neg, rslt);
	
	// gestion des chiffres
	while (nptr[i] != '\0' && nptr[i] >= '0' && nptr[i] <= '9')
	{
		rslt = rslt * 10 + nptr[i] - 48;
		i++;
	}
		printf("%d, %d, %d\n", i, neg, rslt);
		printf("Good programm\n");
	// on renvoie l'entier avec son signe
	return (rslt * neg);
}

int	main(void)
{
	char str[500] = "                                ---+--+123dsfkjbdf";
	printf("%d\n", ft_atoi(str));
	return (0);
}
