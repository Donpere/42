# include <stdio.h>
# include <stdlib.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	if (!str)
		return (1);
	while (str[i] != '\0')
		i++;
	return i;
}

char *ft_strjoin(char *s1, char *s2)
{
	int i;
	int j;
	int len;
	char *dest;

	i = 0;
	j = 0;
	len = 0;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	dest = malloc(sizeof(char) * (len + 1));
	while (s1[i] != '\0')
		{
			dest[j] = s1[i];
			i++;
			j++;
		}
	i = 0;
	while (s2[i] != '\0')
	{
		dest[j] = s2[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

int main()
{
	char *s1 = "maman";
	char *s2 = "papa";
	char *dest;
	dest = ft_strjoin(s1, s2);
	printf("%s\n", dest);

	free(dest);
	return (0);
}