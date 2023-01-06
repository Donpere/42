
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	if (!dest && !src)
		return (NULL);
	d = (char *)dest;
	s = (char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char d[] = "hello";
	char s[] = "coucoucava";
	ft_memcpy(d, s, 2);
//	memcpy(d, s, 2);
	printf("%s\n", (d));
	return (0);
}*/
