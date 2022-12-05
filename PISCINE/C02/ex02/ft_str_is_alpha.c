/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 08:17:19 by domarion          #+#    #+#             */
/*   Updated: 2022/09/29 08:17:29 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
		i++;
		else
			return (0);
	}
	return (1);
}
/*int	main()
{
	int a  = 0;
	char str[] = "";
	//char str[] = "";
	//char str[] = "la to(vu";

	a = ft_str_is_alpha(str);
	printf("%d", a);

	return (0);
}*/