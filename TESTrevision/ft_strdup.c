#include <stdlib.h>
#include <stdio.h>

char *ft_strdup(const char *s)
{
	int	i;
	char *ds;

	i = 0;
	while (s[i] != '\0')
		i++;
	ds = malloc((i + 1) * sizeof(char));
	if (!ds)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ds[i] = s[i];
		i++;
	}
	ds[i] = '\0';
	return (ds);
}

int main()
{
	char *s = "salut";
	char *dst;

	dst = ft_strdup(s);
	printf("%s\n", s);
	printf("%s\n", dst);
	return 0;
}