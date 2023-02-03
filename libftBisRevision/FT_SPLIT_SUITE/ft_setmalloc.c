static int	ft_setmalloc(char const *str, char c, char **tab)
{
	int	i;
	int	letter;
	int	line;

	i = 0;
	line = 0;
	// tant que ma string n'est pas finie
	while (str[i] != '\0')
	{
		// je mets ma lettre de ligne a 0
		letter = 0;
		// si je ne suis pas sur le separateur
		if (str[i] != c)
		{
			// tant que ma chaine n'est pas finie && pas de separateur
			while (str[i] && str[i] != c)
			{
				// j'ajoute une lettre dans ma future ligne
				letter++;
				// j'avance dans ma string
				i++;
			}
			// pour la ligne "line" je fais un malloc du nombre de lettres correspondant
			tab[line] = malloc(sizeof(char) * (letter + 1));
			// je protege mon malloc en renvoyant "-1" qui sera traite dans ft_split
			if (!tab[line])
				return (-1);
			// je passe a la ligne suivante
			line++;
		}
		// sinon (separateur) j'avance dans ma string
		else
			i++;
	}
	return (line); //je retourne le nombre de lignes a ft_split
}