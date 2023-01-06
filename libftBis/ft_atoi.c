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

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	neg;
	int	rslt;

	i = 0;
	neg = 1;
	rslt = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			neg = neg * -1;
		i++;
	}
	while (nptr[i] != '\0' && nptr[i] >= '0' && nptr[i] <= '9')
	{
		rslt = rslt * 10 + nptr[i] - 48;
		i++;
	}
	return (rslt * neg);
}
/*
int	main(void)
{
	char str[500] = "                                ---+--+123dsfkjbdf";
	printf("%d", ft_atoi(str));
	return (0);
}
*/
