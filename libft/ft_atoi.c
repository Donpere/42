/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <domarion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:42:08 by domarion          #+#    #+#             */
/*   Updated: 2023/04/05 17:15:36 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// converts a string representing an integer to an actual integer value
// RETURN : The converted value or 0 on error

int	ft_atoi(const char *nptr)
{
	int	i;
	int	rslt;
	int	neg;

	i = 0;
	rslt = 0;
	neg = 1;
	if (nptr == NULL)
		return (0);
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

// int	main(void)
// {
// 	char str[50] = "     ---+--+2147483648123";
// 	printf("%d", ft_atoi(str));
// 	return (0);
// }