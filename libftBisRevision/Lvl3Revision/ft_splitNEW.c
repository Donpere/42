#include <stdio.h>
#include <stdlib.h>



char **ft_split(char const *str, char c)
{

	char **tab;
	int		i;

	if (!str)
		return (NULL);

	i = ft_count(str, c);
	// i+1 parce que i est l'indice de la ligne
	tab = malloc((i + 1) * sizeof(char *));
}

int main()
{
	int i = 0;
	char *str = "bla(bli(blou"
	char **tab;

	printf("Chaine initiale : %s \n", str);
	tab = ft_split(str, '(');

	while(tab[i] != NULL)
	{
		printf("%d : %s", i, tab[i]);
		free(tab[i]);
		i++;
	}

	free(tab);

	printf('\n');

	return 0;
}