/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:54:56 by domarion          #+#    #+#             */
/*   Updated: 2022/09/29 18:55:04 by domarion         ###   ########.fr       */
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

char	*ft_strcapitalize(char *str)
{
	int	i;

i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (i == 0)
		str[i] = str[i] - 32;
			else if (i > 0 && ((str[i - 1] < 48)
					|| (str[i - 1] > 57 && str[i - 1] < 65)
					|| (str[i - 1] > 90 && str[i - 1] < 97)
					|| (str[i - 1] > 122)))
		str[i] = str[i] - 32;
		}
	i++;
	}
	return (str);
}

/*int	main ()
{
	char string[] = "sal/Ut?, coM-me=42nT t]u vAs ?";
	ft_strcapitalize(string);
	printf("%s \n", string);
	return (0);

}*/