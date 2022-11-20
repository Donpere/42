#include <stdlib.h>		//OBLIGATOIRE POUR UTILISER MALLOC
#define LEN	42

int	main()
{
	int	i;
	char *str;

	str = (char*)malloc(sizeof(*str) * (LEN + 1));
	i = 0;
	while (i < LEN)
	{
		str[i] = '0' + (i % 10);
		i++;
 	}
	str[i] = '\0';
	free(str);
	while (1)
		;
	return (0);
}

// int	main()
// {
// 	char *str; 		DECLA DE POINTEUR "CHAR" QU ON VA FAIIRE VARIER GRACE A DEFINE
//					SINON ON AURAIT DEFINI UNE CHAINE DE TAILLE FIXE, PAR EX : char str[5]
//					--> ou char str[LEN + 1]. PROBLE:E EN FAISANT CA ON ALLOUE DE FACON
//					--> DEFINITIVE LA MEMOIRE. AVEC MALLOC ON LA PREND TEMPORAIREMENT PUIS ON LA LIBERE	

// 	str = (char*)malloc(sizeof(*str) * (LEN + 1));  
//				PARCE QUE STR est TYPER, ON CAST ce que renvoie MALLOC (normalement un VOID*) donc on fait (CHAR*)
//				(sizeof(char)) NOUS PERMET D ETRE SUR D AVOIR LA TAILLE EN NOMBRE DE CHAR SUFFISANTE
//				(sizeof(char) * (LEN)) PERMET D OBTENIR NOTRE TABLEAU (si LEN vaut 42, TABLEAU DE 42 CASES)
//				(sizeof(char) * (LEN) + 1) PERMET D AJOUTER LA CASE SUPPLEMENTAIRE POUR LE '\0'
//				AFIN DE POUVOIR CHANGER DANS TOUS LES ENDROITS A LA FOIS SI BESOIN LE TYPE, ON REMPLACE (sizeof(*str))
//				--> DU COUP SI ON CHANGE LE TYPE DE *str (pour int, long ou autre), sizeof CHANGERA PARTOUT LE TYPE


//			ON FAIT DONC APPEL A "malloc(LEN)" (contenu dans lib stdlib) (LEN sera donc de 42 octets)
//			
// 	while (i < LEN) 		ON VA ECRIRE DANS LA CHAINE
// 	{
// 		str[i] = '0' + (i % 10); LE MODULO 10 de i PERMET DE FAIRE 012345678901234... etc
// 		i++;
//  	}
// 	str[i] = '\0';  	AJOUT DU 0 TERMINAL DE LA CHAINE
// 	free(str);			LIBERATION DE LA MEMOIRE ALLOUEE GRACE A MALLOC
// 	while (1)			BOUCLE POUR LAISSER LE PROGRAMME UTILISER MEMOIRE : TANT QUE (boucle infinie) 
// 		;				--> on ne fait rien
// 	return (0);
// }