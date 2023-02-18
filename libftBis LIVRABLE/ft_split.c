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

static int ft_count(char const *str, char sep)
{
	int i;
	int count;

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

static int ft_setmalloc(char const *str, char sep, char **tab)
{
	int i;
	int line;
	int letter;

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

static void ft_filltab(char const *str, int sep, char **tab)
{
int i;
int line;
int letter;

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

static void ft_free(char **tab)
{
	int line;

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
int main()
{
	int i = 0;
	char *str = "bla(bli(blou";
	char **tab;

	printf("Chaine initiale : %s \n", str);
	tab = ft_split(str, '(');

	while(tab[i] != NULL)
	{
		printf("%d : %s\n", i, tab[i]);
		free(tab[i]);
		i++;
	}

	free(tab);

	printf("\n");

	return 0;
}
