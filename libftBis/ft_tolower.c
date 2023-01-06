
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}
/*
int	main(void)
{
	char str[] = "HELLO";
	printf("%d\n", ft_tolower(str[2]));
	printf("%d\n", tolower(str[3]));
	return (0);
}*/
