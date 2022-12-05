/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 10:16:51 by domarion          #+#    #+#             */
/*   Updated: 2022/09/29 10:17:00 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		i++;
		else
			return (0);
	}
	return (1);
}

/*int	main()
{
	int a = 0;
	char string[] = "fhgfiu";

	a = ft_str_is_lowercase(string);
	printf("%d \n", a);
	return (0);
}*/