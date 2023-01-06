
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*test;
	size_t			i;

	test = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		test[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	unsigned char s[10000] = "hello";
	unsigned char t[10000] = "hello";
	ft_memset(s, 50, 3);
	memset(t, 50, 3);
	printf("%s\n", (s));
	printf("%s\n", (t));
	return (0);
}*/
