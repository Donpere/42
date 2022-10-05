/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:25:03 by domarion          #+#    #+#             */
/*   Updated: 2022/10/05 15:25:19 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	resultat;

	i = 0;
	sign = 1;
	resultat = 0;
	while (str[i] == 32 && (str[i] >= 9 || str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultat = resultat * 10 + str[i] - '0';
		i++;
	}
	return (resultat * sign);
}

// int main(int argc, char **argv)
// {
//     if (argc == 2)
//         printf("%d", ft_atoi(argv[1]));
//     return (0);
// }
