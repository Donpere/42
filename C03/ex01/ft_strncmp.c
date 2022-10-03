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

int ft_strlen(char *string)
{
	int i;

	i = 0;
	while(string[i])
		{
		i++;
		}
	printf("%d", i);
	return(i);
}

// int	ft_strncmp(char *s1, char *s2, unsigned int n)
// {
// int i;
// int res;
// int len;

// i = 0;
// len = 0;
// len = ft_strlen(s1);


// if (i < (int) n)
// 	if (s1[i] == s2[i])
// 		return (0);

// 	else
// 		if 

// }

// int 	ft_strncmp(char *s1, char *s2, unsigned int n)
// {
// 	unsigned int	i;

// 	i = 0;
// 	while (((s1[i] != '\0' || s1[i] != '\0') && (i < n - 1)))
// 	{
// 		i++;
// 	}
// 	return (s1[i] - s2[i]);
// }

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	

}

int	main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	if (argc > 3)
		return (1);
	i = ft_strncmp(argv[1], argv[2], 6);
	j = strncmp(argv[1], argv[2], 6);

	printf("i = %d\n", i);
	printf("res vraie fonction = %d", j);

	return (0);
}