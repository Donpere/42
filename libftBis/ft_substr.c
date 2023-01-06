
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		len = 0;
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	dst = malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	while (i < len && s[start + i] != '\0')
	{
		dst[i] = s[start + i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
/*
int	main(void)
{
	char *s = "hellolesloulous";
	printf("%s\n", ft_substr(s, 5, 6));
	return (0);
}
*/
