static int	ft_count(char const *str, char c)
{
	// i avance dans ma string
	int	i;
	// je compte le nombre de mots
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		// premier cas, on n'est pas sur un separateur
		if (str[i] != c)
		{
			// count ajoute 1, il a trouve un mot
			count++;
			// on rentre dans une boucle pour chercher le prochain separateur
			while (str[i] && str[i] != c)
				i++;
		}
		// si separateur, j'avance dans ma chaine
		else
			i++;
		// on retourne au debut de while verifier qu'on est pas en fin de chaine
	}
	// on retourne le nombre de mots
	return (count);
}