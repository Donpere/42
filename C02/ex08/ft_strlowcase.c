/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:47:29 by domarion          #+#    #+#             */
/*   Updated: 2022/09/29 18:47:37 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
		str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

/*int	main ()
{
	char string[] = "sALutZ";
	ft_strlowcase(string);
	printf("%s \n", string);
	return (0);
}*/