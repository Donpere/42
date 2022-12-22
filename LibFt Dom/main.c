#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"
#define couleur(param) printf("\033[%sm",param)
#define LEN 6


int main(void)
{
	int x = 50;
	int y = 0;
	int c = 'b';
	size_t n = 6;
	const char *s = "Sqlut";

////////////////////////////////////////////////

		couleur("91");
	printf("\n");
	printf("TESTS LIB");
		couleur("0");
	printf(" / FT_LIB\n");
	printf("******************\n");
	printf("\n");

////////////////////////////////////////////////

	printf("01 - cft_isalpha\n");
	printf("**********\n");

		couleur("91");
	y = isalpha(x);
    printf ("isalpha    : %d \n", y);
		couleur("0");
	y = ft_isalpha(x);
    printf ("ft_isalpha : %d\n", y);
	printf("\n");

////////////////////////////////////////////////

	printf("02 - ft_isdigit\n");
	printf("**********\n");

		couleur("91");
	y = isdigit(x);
	printf("isdigit    : %d\n", y);
		couleur("0");
	y = ft_isdigit(x);
	printf("ft_isdigit : %d\n", y);
	printf("\n");

////////////////////////////////////////////////

	printf("03 - ft_isalnum\n");
	printf("**********\n");

		couleur("91");
	y = isalnum(x);
    printf("isalnum    : %d\n", y);
		couleur("0");
    y = ft_isalnum(x);
    printf("ft_isalnum : %d\n", y);
	printf("\n");
	
////////////////////////////////////////////////

	printf("04 - ft_isascii\n");
	printf("**********\n");

		couleur("91");
	y = isascii(x);
    printf("isascii    : %d\n", y);
		couleur("0");
    y = ft_isascii(x);
    printf("ft_isascii : %d\n", y);
	printf("\n");

////////////////////////////////////////////////

	printf("05 - ft_isprint\n");
	printf("**********\n");

		couleur("91");
	y = isprint(x);
    printf("isprint    : %d\n", y);
		couleur("0");
    y = ft_isprint(x);
    printf("ft_isprint : %d\n", y);
	printf("\n");

////////////////////////////////////////////////

	printf("06 - ft_strlen\n");
	printf("**********\n");

		couleur("91");
	y = strlen(s);
    printf("strlen    : %d\n", y);
		couleur("0");
    y = ft_strlen(s);
    printf("ft_strlen : %d\n", y);
	printf("\n");
	
////////////////////////////////////////////////

	printf("07 - ft_memset\n");
	printf("**********\n");

	
	// install malloc + test erreur
	char *str = malloc(LEN * sizeof(char));
		if(str == NULL)
			{
			printf("Erreur MALLOC ft_memset \n");
			exit(1);
			}

	// init variables pour autres arguments
	int remp = -45;
	size_t cases = LEN;

	// compteur i pour afficher tableau
	int i = 0;

// test fonction originale
		couleur("91");
	str = memset(str, remp, cases);
	printf("memset    : %p\n", &str);

	while (i < LEN)
		{
		printf("%d", str[i]);
		i++;
		}
	printf("\n");

// test fonction FT

		couleur("0");
	str = ft_memset(str, remp, cases);
	printf("ft_memset : %p\n", &str);
	
	i = 0;

	while (i < LEN)
		{
		printf("%d", str[i]);
		i++;
		}
	printf("\n");

//Test de comprehension printf avec %c (affiche un caractere) ou %d (affiche l equivalent ascii)
	char W = str[6];
	printf("%c \n", W);

// Liberation du MALLOC du pointeur 
	
		free(str); ///////// free fait
	
////////////////////////////////////////////////

	printf("08 - ft_bzero\n");
	printf("**********\n");
//void bzero(void *s, size_t n);

	char *pt_bzero = malloc(LEN * sizeof(char));
		if(str == NULL)
			{
			printf("Erreur MALLOC ft_memset \n");
			exit(1);
			}
	size_t cases_bzero = LEN;

//init tab a 8 et print
		couleur("91");
i = 0;
	while (i < LEN)
	{
		pt_bzero[i] = 8;
		i++;
	}

i = 0;
printf("init tab a 8 : ");
	while (i < LEN)
		{
		printf("%d", pt_bzero[i]);
		i++;
		}
	printf("\n");


//test & print tab bzero

bzero(pt_bzero, cases_bzero);

i = 0;
printf("bzero    : ");
	while (i < LEN)
		{
		printf("%d", pt_bzero[i]);
		i++;
		}
	printf("\n");
			printf("\n");

//re init tab a 8 et print
		couleur("0");

i = 0;
	while (i < LEN)
	{
		pt_bzero[i] = 8;
		i++;
	}

i = 0;
printf("re init tab a 8 : ");
	while (i < LEN)
		{
		printf("%d", pt_bzero[i]);
		i++;
		}
	printf("\n");

//test & print tab ft_bzero

ft_bzero(pt_bzero, cases_bzero);

i = 0;
printf("ft_bzero : ");
	while (i < LEN)
		{
		printf("%d", pt_bzero[i]);
		i++;
		}
	printf("\n");


	free(str); ///////// free fait
		printf("\n");


////////////////////////////////////////////////

	printf("09 - ft_memcpy\n");
	printf("**********\n");

//void *ft_memcpy(void *dest, const void *src, size_t n);

	size_t cases_memcpy = 4;
	char tab_go [8] = {'c', 'e', 'b', 'o', 'u', 't', 'e'};
	i = 0;

	char *tab_back = malloc (cases_memcpy * sizeof(char ));

///////////////////////////////////////////
		couleur("91");

		memcpy(tab_back, tab_go, cases_memcpy);

while (i < 8)
	{
		printf("%c",tab_go[i]);
		i++;
	}
		printf("\n");
		printf("\n");

i = 0;
while (i < 8)
	{
		printf("%c",tab_back[i]);
			i++;
	}
		printf("\n");
printf("%p", tab_go);
		printf("\n");
printf("%p", tab_back);
//////////////////////////////////////
		couleur("0");

	ft_memcpy(tab_back, tab_go, cases_memcpy);

while (i < 8)
	{
		printf("%c",tab_go[i]);
		i++;
	}
		printf("\n");
		printf("\n");

i = 0;
while (i < 8)
	{
		printf("%c",tab_back[i]);
			i++;
	}
		printf("\n");
printf("%p", tab_go);
		printf("\n");
printf("%p", tab_back);

free(tab_back);

////////////////////////////////////////////////

	printf("10 - ft_memmove\n");
	printf("**********\n");

//void *ft_memmove(void *dest, const void *src, size_t n);
	cases_memcpy = 4;
		tab_go [3] = 'r'; //= {'c', 'e', 'b', 'o', 'u', 't', 'e'};

////////////////////////////////////////////////

// 

	printf("\n");

	return (0);
}