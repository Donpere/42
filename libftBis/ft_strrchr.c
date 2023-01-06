/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:00:32 by domarion          #+#    #+#             */
/*   Updated: 2023/01/06 16:00:44 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{	
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}	
	return (NULL);
}
/*
int	main(void)
{
	char *s;
	char *t;
	s = ft_strrchr("hellohello", 'a');
	t = strrchr("hellohello", 'a');
	printf(" %s\n", s);
	printf(" %s\n", t);
	return (0);
}*/
