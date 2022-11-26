#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void ft_FctPresent (char *fct)
{
	int longueur = strlen (fct);
	int existe = 0;
	char FctBis[longueur];
	FILE *entree = NULL;

	if (longueur > 0)
	{
		entree = fopen ("ftlib.a", "r");
		if (entree != NULL)
		{
			 do 
				{
						fscanf (entree,"%s",FctBis);
			
						if (strcmp(FctBis,fct)==0)
						
						{
						printf ("Bravo ! Le mot existe ! \n");
						existe=1;
						}
				 }
		
				while (!feof(entree) && strcmp(FctBis,fct)!=0);
		}

		else
		printf("nom fonction a tester manquant");

		if(!existe)
			printf ("La fonction %s n'existe pas!\n",fct);
		
		fclose(entree);
		}
}

int main ()
{
	char *NomFct = "ft_strlcpy";

	ft_FctPresent (NomFct);

	return 0;
}

