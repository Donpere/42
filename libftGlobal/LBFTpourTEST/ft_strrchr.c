/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <domarion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:00:32 by domarion          #+#    #+#             */
/*   Updated: 2023/04/05 17:13:20 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// search for the last occurrence of a character in a string 
// and return a pointer to its location
// RETURN : 

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
