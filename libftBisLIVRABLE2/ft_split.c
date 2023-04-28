/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <domarion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 10:26:20 by domarion          #+#    #+#             */
/*   Updated: 2023/04/03 10:55:40 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_count(char const *str, char sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != sep)
		{
			count++;
			while (str[i] && str[i] != sep)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static int	ft_setmalloc(char const *str, char sep, char **tab)
{
	int	i;
	int	line;
	int	letter;

	i = 0;
	line = 0;
	while (str[i])
	{
		letter = 0;
		if (str[i] != sep)
		{
			while (str[i] && str[i] != sep)
			{
				i++;
				letter ++;
			}
			tab[line] = malloc((letter + 1) * sizeof(char));
			if (!tab[line])
				return (-1);
			line++;
		}
		else
			i++;
	}
	return (line);
}

static void	ft_filltab(char const *str, int sep, char **tab)
{
	int	i;
	int	line;
	int	letter;

	i = 0;
	line = 0;
	while (str[i])
	{
	letter = 0;
		if (str[i] != sep)
		{
			while (str[i] && str[i] != sep)
			{
				tab[line][letter] = str[i];
				letter++;
				i++;
			}
		tab[line][letter] = '\0';
		line++;
		}
		else
			i++;
	}
}

static void	ft_free(char **tab)
{
	int	line;

	line = 0;
	while (tab[line])
	{
		free(tab[line]);
		line++;
	}
	free(tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;

	if (!s)
		return (NULL);
	i = ft_count(s, c);
	tab = malloc((i + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	i = ft_setmalloc(s, c, tab);
	if (i < 0)
	{
		ft_free(tab);
		return (NULL);
	}
	tab[i] = NULL;
	if (i > 0)
		ft_filltab(s, c, tab);
	return (tab);
}

// int main(int argc, char **argv)
// {
// 	if (argc < 3)
// 		{
// 			printf("Too few arguments. Put a string and a char please");
// 			return 1;
// 		}
// 	int i = 0;
// 	char c = argv[2][0];
// 							//char *str = "salut+toi+baba+comment+vas+tu+?";
// 							//char **tab = ft_split(str, c);
// 	char **tab = ft_split(argv[1], c);
// 	while (tab[i] != NULL)
// 	{
// 		printf ("%s\n", tab[i]);
// 		i++;
// 	}
// 	return 0;
// }