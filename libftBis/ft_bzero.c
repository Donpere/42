
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*test;
	size_t	i;

	test = (char *)s;
	i = 0;
	while (i < n)
	{
		test[i] = '\0';
		i++;
	}
}
/*
int	main(void)
{
	unsigned char s[] = "hello";
	unsigned char t[] = "hello";
	ft_bzero(s, 2);
	bzero(t, 2);
	printf("%s\n", (s));
	printf("%s\n", (t));
	return (0);
}*/
