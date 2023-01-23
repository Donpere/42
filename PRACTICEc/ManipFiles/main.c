#include <stdio.h>
#include <stdlib.h>
/*

fopen(<fichier>, <mode_ouverture>)
Mode ouverture :

r (lecture seule, doit exister)
w (ecriture seule)
a (ajout fin fichier)

r+ (lecture/ecriture, doit exister)
w+ (ecriture/ecriture, supprime contenu)
a+ (ajout ecriture/ecriture, fin de fichier)

-------------------------------------------


*/

int main (void)
{
    // on utilise un type, FILE, et on lui colle un pointeur qu'on appelle ici "fic"
    FILE *fic = fopen("sauvegarde.txt", "r");
    int lettre = 0;
    int i;
    // comme pour malloc, le pointeur peut echouer, il faut le proteger
    if(fic == NULL)
        exit(1);
    
    char tab[256];
    char car = 0;
    int carAsc = 65;
    car = carAsc;
    printf("%c\n", car);


    // lettre = fgetc(fic);
    // printf("%c\n", lettre);

    // lettre = fgetc(fic);
    // printf("%c\n", lettre);

    while(1)
    {
    //lettre est un entier parce qu'il renvoie l'ASCII rencontre
     
        lettre = fgetc(fic);

        if(feof(fic))
            break;

        tab[i] = lettre;
        printf("%c", lettre);
        i++;
    }

        printf("\n\n\n");
        printf("i vaut %d\n", i);


    tab[i] = '\0';

    printf("%s", tab);
    i = 0;

    while(tab[i] != '\0')
    {
        printf("%d\n", tab[i]);
        i++;
    }

    printf("\n\n\n");


    printf("i vaut %d", i);
//    printf("%c", lettre);
    // comme pour malloc, un fichier ouvert doit etre ferme, on ferme donc le pointeur "fic"
    fclose(fic);
    return 0;
}