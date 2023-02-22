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

// une fonction qui convertit un caractère en majuscule
void	convert_to_upper(unsigned int i, char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
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
	char	str[] = "hello, world!";

	// appliquer la fonction convert_to_upper a chaque caractere de la chaine str
	ft_striteri(str, &convert_to_upper);

	// afficher la chaine de caracteres modifiee
	printf("%s\n", str);

	return (0);
}