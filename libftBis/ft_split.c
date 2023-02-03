/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 10:26:20 by domarion          #+#    #+#             */
/*   Updated: 2023/01/16 10:26:31 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static int	ft_setmalloc(char const *s, char c, char **tab)
{
	int	i;
	int	letter;
	int	list;

	i = 0;
	list = 0;
	while (s[i] != '\0')
	{
		letter = 0;
		if (s[i] != c)
		{
			while (s[i] && s[i] != c)
			{
				letter++;
				i++;
			}
			tab[list] = malloc(sizeof(char) * (letter + 1));
			if (!tab[list])
				return (-1);
			list++;
		}
		else
			i++;
	}
	return (list);
}

static void	ft_filltab(char const *s, char c, char **tab)
{
	int	i;
	int	list;
	int	l;

	i = 0;
	list = 0;
	while (s[i] != '\0')
	{
		l = 0;
		if (s[i] != c)
		{
			while (s[i] != c && s[i])
			{
				tab[list][l] = s[i];
				l++;
				i++;
			}
			tab[list][l] = '\0';
			list++;
		}
		else
			i++;
	}
}

static void	ft_free(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
			i++;
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
	if (i > 0)
		ft_filltab(s, c, tab);
	return (tab);
}
// int main()
// {
// 	int i = 0;
// 	char *str = "bla(bli(blou";
// 	char **tab;

// 	printf("Chaine initiale : %s \n", str);
// 	tab = ft_split(str, '(');

// 	while(tab[i] != NULL)
// 	{
// 		printf("%d : %s\n", i, tab[i]);
// 		free(tab[i]);
// 		i++;
// 	}

// 	free(tab);

// 	printf("\n");

// 	return 0;
// }
