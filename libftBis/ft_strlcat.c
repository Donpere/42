
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lgth;

	if (!dst && !size)
		return (0);
	i = 0;
	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	lgth = ft_strlen(dst);
	while (src[i] != '\0' && lgth + 1 < size)
	{
		dst[lgth] = src[i];
		lgth++;
		i++;
	}
	dst[lgth] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}
/*
int	main(void)
{
	char *a = "hello";
	char *b = "bye";
	size_t t = 3;
	printf("%lu\n", ft_strlcat(a, b, t));
//	printf("%lu\n", strlcat(a, b, t));
	return (0);
}
*/
