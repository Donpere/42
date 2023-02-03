static void	ft_filltab(char const *str, char c, char **tab)
{
	// i pour avancer dans la chaine, tab pour la ligne, l pour avancer dans chaque ligne
	int	i;
	int	line;
	int	l;

	i = 0;
	line = 0;
	// tant que je ne suis pas en fin de chaine initiale
	while (str[i] != '\0')
	{
		// je reinitialise ma ligne suivante dans le tableau
		l = 0;
		// si pas separateur
		if (str[i] != c)
		{
			// tant que je ne suis pas en fin de chaine initiale ou sur separateur
			while (str[i] != c && str[i])
			{
				// je copie le morceau le caractere de la chaine dans la ligne du tableau
				tab[line][l] = str[i];
				l++;
				i++;
			}
			// la chaine finie ou separateur suivant, je mets le caractere de fin de ligne
			tab[line][l] = '\0';
			// je passe a la ligne suivante
			line++;
		}
		// sinon j'avance dans la chaine initiale
		else
			i++;
	}
}