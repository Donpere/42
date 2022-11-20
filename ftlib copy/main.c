#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"
#define couleur(param) printf("\033[%sm",param)
#define LEN 12


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

	printf("1 - cft_isalpha\n");
	printf("**********\n");

		couleur("91");
	y = isalpha(x);
    printf ("isalpha    : %d \n", y);
		couleur("0");
	y = ft_isalpha(x);
    printf ("ft_isalpha : %d\n", y);
	printf("\n");

////////////////////////////////////////////////

	printf("2 - ft_isdigit\n");
	printf("**********\n");

		couleur("91");
	y = isdigit(x);
	printf("isdigit    : %d\n", y);
		couleur("0");
	y = ft_isdigit(x);
	printf("ft_isdigit : %d\n", y);
	printf("\n");

////////////////////////////////////////////////

	printf("3 - ft_isalnum\n");
	printf("**********\n");

		couleur("91");
	y = isalnum(x);
    printf("isalnum    : %d\n", y);
		couleur("0");
    y = ft_isalnum(x);
    printf("ft_isalnum : %d\n", y);
	printf("\n");
	
////////////////////////////////////////////////

	printf("4 - ft_isascii\n");
	printf("**********\n");

		couleur("91");
	y = isascii(x);
    printf("isascii    : %d\n", y);
		couleur("0");
    y = ft_isascii(x);
    printf("ft_isascii : %d\n", y);
	printf("\n");

////////////////////////////////////////////////

	printf("5 - ft_isprint\n");
	printf("**********\n");

		couleur("91");
	y = isprint(x);
    printf("isprint    : %d\n", y);
		couleur("0");
    y = ft_isprint(x);
    printf("ft_isprint : %d\n", y);
	printf("\n");

////////////////////////////////////////////////

	printf("6 - ft_strlen\n");
	printf("**********\n");

		couleur("91");
	y = strlen(s);
    printf("strlen    : %d\n", y);
		couleur("0");
    y = ft_strlen(s);
    printf("ft_strlen : %d\n", y);
	printf("\n");
	
////////////////////////////////////////////////

	printf("7 - ft_memset\n");
	printf("**********\n");

	char *str = malloc(LEN * sizeof(char));
		if(str == NULL)
			{
			printf("Erreur MALLOC ft_memset \n")
			exit(1)
			}
	int remp = '7';
	size_t cases = LEN;
	int i = 0;

		couleur("91");
	str = memset(str, remp, cases);
	printf("memset    : %p\n", &str);

	while (i < LEN)
		{
		printf("%d", str[i]);
		i++;
		}
	printf("\n");



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

	char W = str[6];
	printf("%c \n", W);
	
		free(str); ///////// free fait
	
////////////////////////////////////////////////

	printf("8 - ft_bzero\n");
	printf("**********\n");
//void bzero(void *s, size_t n);

	char *str = malloc(LEN * sizeof(char));
		if(str == NULL)
			{
			printf("Erreur MALLOC ft_memset \n")
			exit(1)
			}
	size_t cases_zero = LEN;
	i = 0;

ft_bzero(pt_bzero, cases_zero);

	free(str); ///////// free fait

////////////////////////////////////////////////

////////////////////////////////////////////////


	printf("\n");

	return (0);
}