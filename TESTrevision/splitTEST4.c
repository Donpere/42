#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

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

static void ft_filltab(char const *str, char sep, char **tab)
{
	int i;
	int line;
	int letter;

	i = 0;
	line = 0;
	while (str[i])
	{
		if (str[i] != sep)
		{
			letter = 0;
			while (str[i] && str[i] != sep)
			{
				tab[line][letter] = str[i];
				i++;
				letter++;
			}
			tab[line][letter] = '\0';
			line++;
		}
		else
			i++;
	}
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
		if (str[i] != sep)
		{
			letter = 0;
			while (str[i] && str[i] != sep)
				{
					letter++;
					i++;
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

char **ft_split(char const *s, char c)
{
	int i;
	char **tab;

	int = 0;
	if (!str)
		return (NULL);
	i = ft_count(s, c);
	tab = malloc((i +1) * sizeof(char *))
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
	char sep = '+';
	char *str = "salut++a+toi";
	char **tab;
	printf("chaine initiale : %s\n\n", str);
	tab = ft_split(str, sep);
	while(tab[i])
		{
		printf("chaine %d : %s\n", i, str[i])
		i++;
		}
	ft_free(tab);
	return 0;
}