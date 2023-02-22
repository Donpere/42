/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:57:15 by domarion          #+#    #+#             */
/*   Updated: 2023/01/06 15:57:23 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != (unsigned char)c)
		i++;
	if (s[i] == (unsigned char)c)
		return ((char *)&s[i]);
	return (NULL);
}


int	main()
{
	const char *s;
	const char *t;
	char *u;
	char *v;
	char str[] = "ellho";
	s = str;
	printf(" %p\n", s);
	s = ft_strchr(str, 'h');
	printf(" %p\n", s);
	printf(" %s\n", s);
	printf(" %s\n", s-2);


	t = strchr("hello", 'h');
	//printf(" %s\n", s);
	//printf(" %s\n", t);
	u = ft_strchr("hello", 'z');
	v = strchr("hello", 'z');
	//printf(" %s\n", u);
	//printf(" %s\n", v);
	return (0);
}
