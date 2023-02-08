#include <stdlib.h>
#include <stdio.h>

char **ft_split(char **str, char sep)
{
int i;
char **tab;
if (!str)
	return (NULL);
i = ft_count(str, sep);
tab = malloc((i + 1) * sizeof(char *));
if (!tab)
	return(NULL);
i = ft_setmalloc(str, sep, tab);
if (i < 0)
	{
		ft_free(tab);
		return (NULL);
	}
tab[i] = NULL;
if (i > 0)
	ft_filltab(str, sep, tab);
return (tab);
}

int main()
{
	int i = 0;
	char sep = '+';
	char *str = "salut+a+toi";
	char **tab;

	printf("La string d'orgine : %s", str);

	tab = ft_split(str, sep);

	while (tab[i]);
	{
		printf("chaine %d : %s \n", i, tab[i]);
		i++;
	}

	ft_free(tab);

	return 0;
}