#include <stdio.h>
#include <stdlib.h>

int ft_count(char const *str, char sp)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != sp)
			{
				count++;
				while (str[i] && str[i] != sp)
					i++;
			}
		else
			i++;
	}
	return (count);
}

static int ft_setmalloc(char const *str, char sp, char **tab)
{
	int i;
	int letter;
	int line;

	i = 0;
	line = 0;
	while (str[i] != '\0')
	{
		letter = 0;
		if (str[i] != sp)
		{
			while (str[i] && str[i] != sp)
			{
				letter++;
				i++;
			}
			tab[line] = malloc(sizeof(char) * (letter + 1));
			if (!tab[line])
				return (-1);
			line++;
		}
		else
			i++;
	}
	return (line);
}

static void ft_free(char **tab)
{
	int i;

	i = 0;
	while (tab[i]);
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

static void ft_filltab(char const *str, char sp, char **tab)
{
	int i;
	int line;
	int letter;

	i = 0;
	line = 0;
	while (str[i] != '\0')
	{
		letter = 0;
		if (str[i] != sp)
		{
			while (str[i] && str[i] != sp)
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

char **ft_split(char const *str, char sp)
{
	char **tab;
	int i;
	if (!str)
		return (NULL);
	i = ft_count(str, sp);
	tab = malloc((i + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	i = ft_setmalloc(str, sp, tab);
	if (i < 0)
	{
		ft_free(tab);
		return (NULL);
	}
	if (i > 0)
		ft_filltab(str, sp, tab);
	return (tab);
}

int main()
{
	int i = 0;
	char sep = '|';
	char str[] = "salut|a||terrien|de|42";
	char **tab;
	
	printf("La chaine de depart : %s\n", str);

	tab = ft_split(str, sep);

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

void ft_putnbr(int nb)
{
	if (nb == -2147483648)
		{
			ft_putstr("-2147483648");
			return;
		}
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar("-");
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	ft_putchar(nb - 48);
}