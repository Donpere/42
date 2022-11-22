/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:48:51 by domarion          #+#    #+#             */
/*   Updated: 2022/11/16 18:48:58 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> //lib pour avoiir malloc
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"
#define couleur(param) printf("\033[%sm",param)
// #define LEN 12

// void *ft_memset (void *s, int c, size_t n);

// int main()
// {
// 	char *str = malloc(LEN * sizeof(char));
// 	int remp = '7';
// 	size_t cases = LEN;
// 	int i = 0;

// 		couleur("91");
// 	str = memset(str, remp, cases);
// 	printf("memset    : %p\n", &str);

// 	while (i < LEN)
// 		{
// 		printf("%d", str[i]);
// 		i++;
// 		}
// 	printf("\n");



// 		couleur("0");
// 	str = ft_memset(str, remp, cases);
// 	printf("ft_memset : %p\n", &str);
	
// 	i = 0;

// 	while (i < LEN)
// 		{
// 		printf("%d", str[i]);
// 		i++;
// 		}
// 	printf("\n");

// 	char W = str[6];
// 	printf("%c \n", W);
// 	free(str);

// 	return (0);
// }

void *ft_memset (void *s, int c, size_t n)
{
	size_t i;
	i = 0;
	char *ptr = s;
	while (i < n)
	{
		ptr[i] = (char)c;
		i++;
	}

	return s;
}
