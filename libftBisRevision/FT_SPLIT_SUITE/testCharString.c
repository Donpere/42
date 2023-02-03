#include <stdio.h>

// int main(void)
// {
// 	int i = 0;
//     char *ptr = "bonjour";

// 	ptr[2] = 'x';

//     // ptr[0] = 'B'; /* Incorrect */
// 	printf("%s\n", ptr);
//     return 0;
// }


int main(void)
{
    char chaine[] = "BonjourXXXXXX";

    printf("%s\n", chaine);
    chaine[0] = 'A';
    chaine[1] = 'u';
    chaine[2] = ' ';
    chaine[3] = 'r';
    chaine[4] = 'e';
    chaine[5] = 'v';
    chaine[6] = 'o';
    chaine[7] = 'i';
    chaine[8] = 'r';
    chaine[9] = '\0'; /* N'oubliez pas le caractère nul ! */
    printf("%s\n", chaine);
    return 0;
}