#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    // the number of temperatures to analyse
    int n;
    printf("Nombre valeurs : ");
    scanf("%d", &n);
    printf("\n");


    int tab[n];
    for (int i = 0; i < n; i++) 
    {
        // a temperature expressed as an integer ranging from -273 to 5526
        int t;
        printf("Entrer temp %d : \n", tab[i]);
        scanf("%d", &t);
        tab[i] = t;
    }
    printf("\n");

    for (int i = 0; i < n; i++) 
    {
        printf(" %d ", tab[i]);
    }

    int tmporer = 0;

    printf("\n");
    printf("\n");

    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");

    printf("result\n");

    return 0;
}