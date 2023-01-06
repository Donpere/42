
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
/*
int	main(void)
{
	char str[] = "h1@";
	printf("%d\n", ft_isalnum(str[0]));
	printf("%d\n", ft_isalnum(str[1]));
	printf("%d\n", ft_isalnum(str[2]));
	printf("%d\n", ft_isalnum(str[3]));
	printf("%d\n", isalnum(str[0]));
	printf("%d\n", isalnum(str[1]));
	printf("%d\n", isalnum(str[2]));
	printf("%d\n", isalnum(str[3]));
	return (0);
}*/