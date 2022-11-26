/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:08:30 by domarion          #+#    #+#             */
/*   Updated: 2022/11/22 11:08:40 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> //lib pour avoiir malloc
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"
#define couleur(param) printf("\033[%sm",param)

// void *ft_memcpy(void *dest, const void *src, size_t n);

// int main()
// {
// 	size_t cases = 4;
// 	char tab_go [8] = {'c', 'e', 'b', 'o', 'u', 't', 'e'};
// 	int i = 0;

// 	char *tab_back = malloc (cases * sizeof(char ));

// ///////////////////////////////////////////
// 		memcpy(tab_back, tab_go, cases);

// while (i < 8)
// 	{
// 		printf("%c",tab_go[i]);
// 		i++;
// 	}
// 		printf("\n");
// 		printf("\n");

// i = 0;
// while (i < 8)
// 	{
// 		printf("%c",tab_back[i]);
// 			i++;
// 	}
// 		printf("\n");
// printf("%p", tab_go);
// 		printf("\n");
// printf("%p", tab_back);
// //////////////////////////////////////

// 	ft_memcpy(tab_back, tab_go, cases);

// while (i < 8)
// 	{
// 		printf("%c",tab_go[i]);
// 		i++;
// 	}
// 		printf("\n");
// 		printf("\n");

// i = 0;
// while (i < 8)
// 	{
// 		printf("%c",tab_back[i]);
// 			i++;
// 	}
// 		printf("\n");
// printf("%p", tab_go);
// 		printf("\n");
// printf("%p", tab_back);

// //////////////////////////////////
// 	return (free(tab_back), 0);
// }

void *ft_memcpy(void *dest, const void *src, size_t n)
{
char *search = (char *)src;
char *destination = (char *)dest;
size_t i;
i = 0;

while (i < n)
{
	destination[i] = search[i];
	i++;
}

return (destination);
}