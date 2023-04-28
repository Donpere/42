/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:22:47 by domarion          #+#    #+#             */
/*   Updated: 2022/09/29 14:22:53 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= 32) && (str[i] <= 126))
		i++;
		else
			return (0);
	}
	return (1);
}

/*int	main ()
{
	int	a = 0;
	char	string[] = {24};
	a = ft_str_is_printable(string);
	printf("%d \n", a);

	return (0);
}*/