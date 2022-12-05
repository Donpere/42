/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:40:57 by domarion          #+#    #+#             */
/*   Updated: 2022/09/29 14:41:04 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// gestion lettre en maj ?
// gestion caracteres autres ?

char	*ft_strupcase(char *str)
{
	int	i;

i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
		str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*int	main ()
{
	char string[] = "saLut";
	ft_strupcase(string);
	printf("%s \n", string);
	return (0);
}*/