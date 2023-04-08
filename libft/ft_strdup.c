/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <domarion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:57:47 by domarion          #+#    #+#             */
/*   Updated: 2023/04/05 17:13:38 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// create a duplicate of a string
// RETURN : 

char	*ft_strdup(const char *s)
{
	char	*ds;
	int		i;

	i = 0;
	ds = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!ds)
		return (NULL);
	while (s[i])
	{
		ds[i] = s[i];
		i++;
	}
	ds[i] = '\0';
	return (ds);
}
/*
int	main(void)
{
	char * s = "hello";
	printf("%s\n", ft_strdup(s));
	return (0);
}
*/
