#include <stdlib.h>
#include <stdio.h>

int main (void)
{
//verifier que le fichier appelle existe
//FILE* fopen(const char* nomDuFichier, const char* modeOuverture);
//Cette fonction renvoie un pointeur sur FILE (une structure de type FILE qui est définie dans stdio.h  ). Elle renvoie un FILE*
//Il faut absolument récupérer ce pointeur pour pouvoir ensuite lire et écrire dans le fichier :
// creation d un pointeur initialise a NULL : FILE* fichier = NULL;
/*Voici les principaux modes d'ouverture possibles :

"r"  : lecture seule. Vous pourrez lire le contenu du fichier, mais pas y écrire. Le fichier doit avoir été créé au préalable.

"w"  : écriture seule. Vous pourrez écrire dans le fichier, mais pas lire son contenu. Si le fichier n'existe pas, il sera créé.

"a"  : mode d'ajout. Vous écrirez dans le fichier, en partant de la fin du fichier. Vous ajouterez donc du texte à la fin du fichier. Si le fichier n'existe pas, il sera créé. Ce mode d'ajout peut être utile si vous voulez seulement ajouter des informations à la fin du fichier.

"a+"  : ajout en lecture / écriture à la fin. Vous écrivez et lisez du texte à partir de la fin du fichier. Si le fichier n'existe pas, il sera créé.

"r+"  : lecture et écriture. Vous pourrez lire et écrire dans le fichier. Le fichier doit avoir été créé au préalable.

"w+"  : lecture et écriture, avec suppression du contenu au préalable. Le fichier est donc d'abord vidé de son contenu, vous pouvez y écrire, et le lire ensuite. Si le fichier n'existe pas, il sera créé.*/

    return 0;
}