
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
/*
int	main(void)
{
	char str [] = "hello";
	printf("%d\n", ft_toupper(str[2]));
	printf("%d\n", toupper(str[3]));
	return (0);
}*/
