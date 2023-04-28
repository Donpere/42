#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int ft_strlen(const char *str)
{
    int len = 0;
    while (str[len] != '\0')
        len++;
    return len;
}

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i = 0;
    if (size == 0)
        return (ft_strlen(src));
    while (src[i] != '\0' && i < size - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (ft_strlen(src));
}

// FONCTION GENERIQUE POUR ITERER N'IMPORTE QUELLE FONCTION RECEVANT & RENVOYANT UN CHAR
////////////////////////////////////////////////////////

// le pointeur sur fonction qui est declare en argument : char (*fct)(char)

char *striter(char *str, char (*fct)(char))
{
    int i = 0;
    while (str[i] != '\0')
    {
        str[i] = fct(str[i]);
        i++;
    }
    return (str);
}

// LES FONCTIONS AVEC DES TYPES SIMILAIRES QUE JE VEUX UTILISER SUR UN ITERATEUR 
///////////////////////////////////////////////////////////

char letterPlusTwo(char c)
{
    c = c + 2;
    return c;
}

char letterMinusThree(char c)
{
    c = c - 3;
    return c;
}

/////////////////////////////////////////////////////////////

int main()
{
    char strcpy[] = "papa";
    char *str = malloc(ft_strlen(strcpy) + 1); // allocation de mémoire pour la chaîne de caractères
    ft_strlcpy(str, strcpy, ft_strlen(strcpy) + 1); // copie de la chaîne de caractères dans str


// exemple de decla de pointeur sur fonction :
///////////////////////////////////////////////////////////////
//	int (*mFM)(int);
//	mFM = maFonctionQuiMultiplie;

//////////////////////////////////////////////////////////////////

    printf("%s\n", str);

// j'appelle ma fonction generique qui recevra une chaine str & une fonction "recevant & renvoyant un char"
    striter(str, &letterPlusTwo);

    printf("%s\n", str);

    striter(str, letterMinusThree);

    printf("%s\n", str);

    free(str); // libération de la mémoire allouée pour str

    return 0;
}
