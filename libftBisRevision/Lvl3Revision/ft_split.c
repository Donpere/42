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

//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	ft_count(char const *str, char c)
{
	int	i;
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
			// on rentre dans une boucle pour aller au mot suivant
			while (str[i] && str[i] != c)
				i++;
		}
		// gestion du cas ou il y a plusieurs separateurs
		else
			i++;
		// on retourne au debut de while verifier qu'on est pas en fin de chaine
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

char	**ft_split(char const *str, char c)
{
	// on initie le tableau
	// et un entier pour numeros de lignes 
	char	**tab;
	int		i;
	// protection en cas de chaine vide
	if (!str)
		return (NULL);

	// on compte le nbre de mots POUR POUVOIR MALLOC
	// on malloc le nombre de mots + 1 puisqu'on demarre a 0 :
	// 4 lignes == 0, 1, 2, 3
	// SANS OUBLIER gestion erreur malloc tab
	i = ft_count(str, c);
	tab = malloc((i + 1) * sizeof(char *));
	if (!tab)
		return (NULL);

	// creation de chaque malloc de chaque morceau de chaine
	i = ft_setmalloc(str, c, tab);
	// gestion du retour erreur de malloc dans setmalloc
	// dans ce cas on va free tab pour eviter les fuites
	if (i < 0)
	{
		ft_free(tab);
		return (NULL);
	}
	// fermer la colonne de tab avec NULL
	tab[i] = NULL;
	// remplissage des lignes du tableau
	if (i > 0)
		ft_filltab(str, c, tab);
	return (tab);
}

int main()
{
    int i = 0;
	char sep = 'x'
    char *str = "jexparsxxcommexunxxxroi";
    char **tab;
    
	// affiche chaine de depart
    printf("Chaine initiale : %s \n",str);
    
	// stocke le resultat dans le tableau 2 dim "tab"
    tab = ft_split(str, sep);

    //affichage du resultat, soit chaque mot separes par des "x" 
	// qui sont copies dans chaque ligne de "tab" sans le separateur
    while(tab[i] != NULL) 
	{
       printf("%d : %s\n",i,tab[i]);
    
   // je désalloue les chaines
       free(tab[i]);
	   i++;
    }

	//je desalloue tab
    free(tab);
    
    printf("\n");
    
    return 0;
}
