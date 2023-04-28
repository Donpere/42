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

/* int	main(void)
	{
 	char str0[50] = "     ---+--+2444333222111";
	printf("ft_atoi : %d\n", ft_atoi(str0));
	printf("atoi : %d\n", atoi(str0));

	char str1[50] = "     2444333222111";
	printf("ft_atoi : %d\n", ft_atoi(str1));
	printf("atoi : %d\n", atoi(str1));

	char str3[50] = "     -2147483648123";
	printf("ft_atoi : %d\n", ft_atoi(str3));
	printf("atoi : %d\n", atoi(str3));
	
	char str4[15] = "-2147483648";
	printf("ft_atoi : %d\n", ft_atoi(str4));
	printf("atoi : %d\n", atoi(str4));

	void *str = NULL;
//	printf("ft_atoi : %d\n", ft_atoi(str));
	printf("atoi : %d\n", atoi(str));
	}*/
