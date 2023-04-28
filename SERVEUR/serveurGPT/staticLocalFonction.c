#include <stdio.h>
#include <stdlib.h>

void test() {
    // Notre variable locale statique
    // La valeur initiale n'est affectée que la première fois.
    // Ensuite, l'état de la variable est conservée entre les appels
    static int counter = 0;
	printf( "Counter dans test avant ++ == %d\n", counter );
    counter++;
    printf( "Counter apres ++ == %d\n", counter );
}


int main() {

printf("Appel 1 de test\n");
    test();     // Afficher: Counter == 0
printf("Appel 2 de test\n");
    test();     // Afficher: Counter == 1
printf("Appel 3 de test\n");
    test();     // Afficher: Counter == 2

    return EXIT_SUCCESS;

}