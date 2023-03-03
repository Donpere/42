#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

void print_address(void* ptr) {
    char buffer[sizeof(void*) * 2 + 3]; // Taille suffisante pour stocker une adresse
    char hex_chars[] = "0123456789abcdef"; // Tableau des caractères hexadécimaux
    unsigned long long addr = (unsigned long long)ptr; // Conversion de l'adresse en entier non signé

    // Conversion de l'adresse en chaîne de caractères hexadécimaux
    int i = 0;
    while (addr > 0 && i < sizeof(buffer) - 3) {
        buffer[i++] = hex_chars[addr % 16];
        addr /= 16;
    }
    buffer[i++] = 'x';
    buffer[i++] = '0';
    buffer[i] = '\0';

    // Inversion de la chaîne de caractères pour obtenir l'adresse dans l'ordre corrects
    int len = strlen(buffer);
	int j;
    i = 0;
	j = len - 1;
    char temp;

    while (i < j) {
        temp = buffer[i];
        buffer[i] = buffer[j];
        buffer[j] = temp;
        i++;
        j--;
    }

    // Écriture de la chaîne de caractères dans le flux de sortie standard
    write(STDOUT_FILENO, buffer, len);
    write(STDOUT_FILENO, "\n", 1);
}

int main()
{
    int j = 2;
    print_address(&j);
	putchar('\n');
	printf("%p", &j);
    return 0;
}