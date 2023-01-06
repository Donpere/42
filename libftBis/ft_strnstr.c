/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:00:15 by domarion          #+#    #+#             */
/*   Updated: 2023/01/06 16:00:20 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!big && !len)
		return (0);
	i = 0;
	if (little[0] == 0)
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (i + j < len && little[j] && big[i + j]
				&& big[i + j] == little[j])
				j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char * a = "hello";
	char * b = "llo";
	char * c;

	c = ft_strnstr(a, b, 2);
	printf("%s\n", c);
//	printf("%s\n", ft_strnstr(a, b, 2));
//	printf("%s\n", strnstr(a, b, 2));
	return (0);
} 
*/
