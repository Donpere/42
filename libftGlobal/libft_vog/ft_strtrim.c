/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <domarion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:00:56 by domarion          #+#    #+#             */
/*   Updated: 2023/04/05 17:13:18 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// USE ft_strlen & ft_strchr
// remove specified characters at the begin and end on a string and 
// return a new string with the remaining characters allocated
// s1 is the chain to manipulate
// set contain the specified characters
// start represents the index of the first character of the source string
// on s1 after the trim
// end  represents the index of the last character of the source string
// on s1 after the trim
// both while test strchr NULL return (as soon as s1 doesn't match with set)
// RETURN : the new string whithout caracters or
// NULL if s1 or s2 are NULL or
// NULL if malloc fail

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*new;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	i = 0;
	end = ft_strlen (s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]) != NULL)
		start++;
	while (end > 0 && ft_strchr(set, s1[end]) != NULL)
		end--;
	if (end < start)
		end = start;
	else
		end++;
	new = malloc(sizeof(char) * (end - start + 1));
	if (!new)
		return (NULL);
	while (start < end)
		new[i++] = s1[start++];
	new[i] = '\0';
	return (new);
}
/*
int	main(void)
{
	char const	*str = "abcabcoucouabc";
	char const	*st = "abc";
	printf("%s\n", ft_strtrim(str, st));
	return (0);
}
*/
