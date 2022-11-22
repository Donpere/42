#include <stdio.h>


// int main ()
// {
//     int i = -66;
//     printf("i avant cast char %d \n", i);


//     char c = (unsigned char)i;
//         printf("c %d \n", c);





//     return (0);
// }

// void imprime(float* p)      // la fonction declare un pointeur sur float
// {
//     printf("%f", *p);       // demande l affichage du contenu "float" du pointeur p 
// }
 
// int main() 
// {
//     int i = 31415;          // probleme = le contenu du pointeur envoye a la fonction est un int
//     imprime(&i);
// }

void imprime(float p) {
    printf("%f", p);
}
 
int main() {
    int i = 31415;
    imprime(i);
}
