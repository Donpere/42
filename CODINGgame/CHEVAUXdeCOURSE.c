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
    int tmp = 0;
    int answer = 0;
    int *tab = NULL;
    scanf("%d", &N);
    tab = (int *) malloc( N * sizeof(int) );
    for (int i = 0; i < N; i++) 
        {
            int pi;
            scanf("%d", &pi);
            tab[i] = pi;
        }

    for (int j = 0; j < N; j++)
        {
            printf("%d", tab[j]);
        } 
    printf("\n");

        for (int j = 0; j < N; j++)
            {
                for (int j = 0; j < N; j++)
                {
                    tmp = abs(tab[i]-tab[j])
                    if (tmp < answer)
                        answer = tmp; 
                } 
            }


    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");

    printf("answer\n");

    return 0;
}