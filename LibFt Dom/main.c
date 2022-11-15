#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main(void)
{
	int x = 50;
	int y = 0;

	y = ft_isalpha(x);
    printf ("ft_isalpha %d \n", y);

    y = isalpha(x);
    printf ("isalpha %d \n", y);

	y = isdigit(x);
	printf("isdigit %d\n", y);

	y = ft_isdigit(x);
	printf("ft_isdigit %d\n", y);

	y = isalnum(x);
    printf("isalnum %d\n", y);

    y = ft_isalnum(x);
    printf("isalnum %d\n", y);

	return (0);
}