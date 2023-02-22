/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:56:40 by domarion          #+#    #+#             */
/*   Updated: 2023/01/06 15:57:01 by domarion         ###   ########.fr       */
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

static int	ft_setmalloc(char const *s, char c, char **new)
{
	int	i;
	int	letter;
	int	tab;

	i = 0;
	tab = 0;
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
			new[tab] = malloc(sizeof(char) * (letter + 1));
			if (!new[tab])
				return (-1);
			tab++;
		}
		else
			i++;
	}
	return (tab);
}

static void	ft_filltab(char const *s, char c, char **new)
{
	int	i;
	int	tab;
	int	l;

	i = 0;
	tab = 0;
	while (s[i] != '\0')
	{
		l = 0;
		if (s[i] != c)
		{
			while (s[i] != c && s[i])
			{
				new[tab][l] = s[i];
				l++;
				i++;
			}
			new[tab][l] = '\0';
			tab++;
		}
		else
			i++;
	}
}

static void	ft_free(char **new)
{
	int	i;

	i = 0;
	while (new[i])
	{
		free(new[i]);
			i++;
	}
	free(new);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	int		i;

	if (!s)
		return (NULL);
	i = ft_count(s, c);
	new = malloc((i + 1) * sizeof(char *));
	if (!new)
		return (NULL);
	i = ft_setmalloc(s, c, new);
	if (i < 0)
	{
		ft_free(new);
		return (NULL);
	}
	new[i] = 0;
	if (i > 0)
		ft_filltab(s, c, new);
	return (new);
}
