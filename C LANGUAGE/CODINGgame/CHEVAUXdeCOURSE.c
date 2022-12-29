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
    int N;
    int answer = 0;
    int *tab = NULL;
    scanf("%d", &N);
    tab = (int *) malloc( N * sizeof(int) );
   
    //verif malloc

// remp tab
    for (int i = 0; i < N; i++) 
        {
            int pi;
            scanf("%d", &pi);
            tab[i] = pi;
        }
//print tab
    for (int j = 0; j < N; j++)
        {
            printf("%d", tab[j]);
        }  
    printf("\n");

//remp tab_ecart
    int *tab_ecart = NULL;
    tab_ecart = (int *) malloc( N * N * sizeof(int) );

    int j = 0;
    int k = 0;
        for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    if (i != j)
                        tab_ecart[k] = abs(tab[i]-tab[j]);
                        k++;
                } 
            }
//trouver le plus petit ecart dans tab 


//print tab
    for (int j = 0; j < N; j++)
        {
            printf("%d", tab_ecart[j]);
        }  
    printf("\n");


    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");

    // free des malloc
    free(tab);
    free(tab_ecart);


    printf("answer\n");

    return 0;
}