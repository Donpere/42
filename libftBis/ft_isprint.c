

#include <stdio.h>
#include <ctype.h>*/

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
int	main(void)
{
	char str [] = "hello";
	printf("%d\n", ft_isprint(str[5]));
	printf("%d\n", isprint(str[5]));
	return (0);
}*/
