#include <stdio.h>

int main()
{
    double entier_echelle = 2.450;
    int n = 566;
    int NMAX = 1200;
    int partie_entiere = 0;

    entier_echelle = (double)n/NMAX/100;

    printf("entier_echelle : %f \n", entier_echelle);

    partie_entiere = (int)entier_echelle;

    printf("entier_echelle : %d \n", partie_entiere);
        printf("entier_echelle : %d \n", (int)entier_echelle);
    printf("entier_echelle : %f \n", entier_echelle);

    return (0);
}