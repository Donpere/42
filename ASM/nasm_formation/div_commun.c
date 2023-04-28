
#include <stdio.h>
//UTILISATION D'UNE ETIQUETTE (dans cet exemplem on cree un goto vers "trouve")

int main(void)
{
    int a;
    int b;

    printf("Entrez deux nombres : ");
    scanf("%d %d", &a, &b);

    int min = (a < b) ? a : b;
    int i;

    for (i = 2; i <= min; ++i)
        if (a % i == 0 && b % i == 0)
            goto trouve;

    return 0;
trouve:
    printf("le plus petit diviseur de %d et %d est %d\n", a, b, i);
    return 0;
}