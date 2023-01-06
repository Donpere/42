
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (n-- > 0)
		{
			d[n] = s[n];
		}
	}
	return (dest);
}
/*
int	main(void)
{
	char d[] = "hello";
	char s[] = "ab";
	ft_memmove(d, s, 2);
//	memmove(d, s, 2);
	printf("%s\n", (d));
	return (0);
}*/
