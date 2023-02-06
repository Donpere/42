#include <stdlib.h>
#include <stdio.h>









static int ft_count(char const *str, char c)
{
// on cree un compteur pour visiter la string i
// et un compteur pour le nombre de mots dans la string
int i;
int count;

i = 0;
count = 0;

// on visite la string, on cherche la fin de string
	while (str[i] != '\0')
	{
// premier cas, on n'est pas sur un separateur
		if (str[i] != c)
		{
// count ajoute 1 mot puis
// on rentre dans une boucle pour aller au mot suivant
			count++;
	
			while (str[i] && str[i] != c)
				i++;
		}
// gestion du cas ou il y a plusieurs separateurs et on n'est pas en bout de string
		else
			i++;
// on retourne au debut de while verifier qu'on est pas en fin de chaine
	}
return (count);
}









static int ft_setmalloc(char const *str, char sp, char **tab)
{
// i pour avancer dans la string
// letter pour la lettre dans chaque mot
// line pour avancer dans les lignes
int i;
int letter;
int line;

i = 0;
line = 0;

// lire la chaine jusqu'au bout
while (str[i] != '\0')
{
	// reinitialise lettre pour chaque ligne
	letter = 0;
	
	// si on n'a pas de separateur
	if (str[i] != sp)
	{
		// tant qu'on n'est ni en fin de string ni sur separateur
		// avancer dans la lettre du mot en cours, avancer dans la string
		while (str[i] && str[i] != sp)
		{
			letter++;
			i++;
		}

		// malloc une ligne du nombre de caractere du mot + '\0'
		tab[line] = malloc(sizeof(char) * (letter + 1));
		// gestion malloc pas fonctionne
		if (!tab[line])
			return (-1);
		// passe line suivante
		line++;
		}
	else
		i++;
}
// retourne le nombre de lignes pour pouvoir mettre fin de colonne tab a NULL
return (line);
}





static void ft_filltab(char const *str, char c, char **tab)
{
// i pour avancer dans la chaine, 
// line pour le numero de ligne, 
// l pour avancer dans chaque ligne
int i;
int line;
int l;

i = 0;
line = 0;

// tant que je ne suis pas en fin de chaine initiale
	while (str[i] != '\0')
	{
// je me remets en debut de ligne courante dans le tableau
		l = 0;

		// si pas SEPARATEUR
		if (str[i] != c)
		{
		// tant que je ne suis pas en fin de chaine initiale ou sur separateur
			while (str[i] && str[i] != c)
			{
			// je copie chaque caractere de la chaine dans la ligne courante 
			// du tableau jusqu'a fin de chaine ou separateur
			tab[line][l] = str[i];
			l++;
			i++;
			}
		// le mot ou la chaine est finie, je mets donc le caractere de fin de ligne
		tab[line][l] = '\0';
		// je passe a la ligne suivante
		line++;
		}

		// s'il y a un SEPARATEUR j'avance dans la chaine initiale
		else
			i++;
	}
}





static void ft_free(char **tab)
{
// je cree un indice de ligne de tableau
int line;

line = 0;

	// tant qu'il y a une ligne dans le tableau
	// je free la ligne
	while (tab[line])
	{
		free(tab[line]);
		line++;
	}
// les lignes sont free, je peux free le tableau
free(tab);
}


char **ft_split(char const *str, char c)
{
// on initie un tableau 2D
// on cree un entier pour les numeros de lignes 
char **tab;
int i;
// protection en cas de chaine vide
	if (!str)
		return (NULL);

// on compte le nbre de mots pour pouvoir
// malloc le nombre de mots + 1 puisqu'on demarre a 0 :
// 4 lignes == 0, 1, 2, 3
// ON N'OUBLIE PAS gestion erreur malloc tab
i = ft_count(str, c);
tab = malloc((i + 1) * sizeof(char *));
	if (!tab)
		return (NULL);

// creation de chaque malloc de chaque morceau de chaine
// GESTION DU RETOUR ERREUR DE MALLOC DANS SETMALLOC : si erreur i=(-1)
// dans ce cas on va free tab pour eviter les fuites
i = ft_setmalloc(str, c, tab);

	if (i < 0)
	{
		ft_free(tab);
		return (NULL);
	}

// fermer la colonne de tab avec NULL pour pouvoir faire while(tab)
tab[i] = NULL;

// ENFIN remplissage des lignes du tableau
	if (i > 0)
		ft_filltab(str, c, tab);

// fin du split on renvoie l'adresse du tableau finalise
return (tab);
}



int main()
{
int i = 0;
char* str = "jexparsxxcommexunxxxroi";
char** tab;
// affiche chaine de depart
printf("Chaine initiale : %s \n",str);
// stocke le resultat dans le tableau 2 dim "tab"
tab = ft_split(str,'x');

//affichage du resultat, soit chaque mot separes par des "x" 
// qui sont copies dans chaque ligne de "tab" sans le separateur
	while(tab[i] != NULL) 
	{
		printf("%d : %s\n", i, tab[i]);

		i++;
	}

//je desalloue tab
ft_free(tab);

printf("\n");
return 0;
}

