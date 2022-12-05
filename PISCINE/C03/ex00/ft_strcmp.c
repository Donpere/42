/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:27:25 by domarion          #+#    #+#             */
/*   Updated: 2022/10/01 15:27:38 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// int	main(int argc, char **argv)
// {
// 	printf("%s \n", argv[1]);
// 	(void)argc;
// 	int	valeur = 0;
// 	int i = 0;
// 	// appel a chaine 1 et 2... chaine 0 est nom exe
// 	valeur = ft_strcmp(argv[1], argv[2]);
// 	i = strcmp(argv[1], argv[2]);

// 	printf("ft_strcmp donne %d \n", valeur);
// 	printf("i test donne %d \n", i);
// 	return (0);
// }