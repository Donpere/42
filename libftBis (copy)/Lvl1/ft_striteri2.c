/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:58:08 by domarion          #+#    #+#             */
/*   Updated: 2023/01/06 15:58:14 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>

// une fonction qui affiche l'indice et la valeur de chaque caractère dans une chaîne de caractères
void	print_char(unsigned int i, char *c)
{
	printf("Caractere a l'indice %u : %c\n", i, *c);
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

int	main(void)
{
	char	str[] = "Hello, world!";

	// appliquer la fonction print_char a chaque caractere de la chaine str
	ft_striteri(str, &print_char);

	return (0);
}