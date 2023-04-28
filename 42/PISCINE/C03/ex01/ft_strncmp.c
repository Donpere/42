/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 14:59:36 by domarion          #+#    #+#             */
/*   Updated: 2022/10/02 14:59:43 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strlen(char *string)
{
	int	i;

	i = 0;
	while (string[i])
	{
		i++;
	}
	return (i);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (i < n))
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

// int	main(int argc, char **argv)
// {
// 	int i = 0;
// 	int j = 0;
// 	if (argc == 3)
// 	{
// 		i = ft_strncmp(argv[1], argv[2], 6);
// 		j = strncmp(argv[1], argv[2], 6);
// 		printf("i = %d\n", i);
// 		printf("res vraie fonction = %d", j);
// 	}
// 	return (0);
// }