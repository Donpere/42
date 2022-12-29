/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 20:09:43 by domarion          #+#    #+#             */
/*   Updated: 2022/10/03 20:10:12 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

// int	main(int argc, char **argv)
// {
// 	int count = 0;
// 	(void) argc;
// 	count = ft_strlen(argv[1]);
// 	printf("Total caracter = %d \n", count);
// 	return (0);
// }
