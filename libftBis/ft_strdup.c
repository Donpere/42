
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ds;
	int		i;

	i = 0;
	ds = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!ds)
		return (NULL);
	while (s[i])
	{
		ds[i] = s[i];
		i++;
	}
	ds[i] = '\0';
	return (ds);
}
/*
int	main(void)
{
	char * s = "hello";
	printf("%s\n", ft_strdup(s));
	return (0);
}
*/
