
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	t;

	t = 0;
	while (s[t] != '\0')
		t++;
	return (t);
}

/*
int	main(void)
{
	char str [50] = "hello";
	printf("%ld\n", ft_strlen(str));
//	printf("%ld\n", strlen(str));
	return (0);
}
*/
