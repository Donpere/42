/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:11:30 by domarion          #+#    #+#             */
/*   Updated: 2022/11/16 18:11:35 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define couleur(param) printf("\033[%sm",param)

// size_t ft_strlen(const char *s);

// int main ()
// {
// 	char *str = "Sqlut";
// 	int y = 0;

// 		couleur("91");
// 	y = strlen(str);
// 	printf("strlen    : %d\n", y);
// 		couleur("0");
// 	y = ft_strlen(str);
// 	printf("ft_strlen : %d\n", y);
// 	printf("\n");

// 	printf("\n");

// 	return (0);
// }

size_t ft_strlen(const char *s)
{
	int i = 0;
	while (s[i] != '\0')
		{
			i++;
		}

		return i;

}