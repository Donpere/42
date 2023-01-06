
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{	
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}	
	return (NULL);
}
/*
int	main(void)
{
	char *s;
	char *t;
	s = ft_strrchr("hellohello", 'a');
	t = strrchr("hellohello", 'a');
	printf(" %s\n", s);
	printf(" %s\n", t);
	return (0);
}*/
