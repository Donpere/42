/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:18:42 by domarion          #+#    #+#             */
/*   Updated: 2022/09/29 11:18:48 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
	i++;
		else
			return (0);
	}
	return (1);
}

/*int	main ()
{
	int		a = 0;
	char	string[] = "";

	a = ft_str_is_uppercase(string);
	printf("%d \n", a);
	return (0);
}*/