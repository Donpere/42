#include <stdio.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return i;
}

char *ft_strrev(char *str)
{
	int i;
	int len;
	char tmp;

	i = 0;
	len = 0;
	len = ft_strlen(str);

	len--;
	while (i < len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}

	return (str);
}

int main()
{
	char str[] = "aaaaaaaaaaaaddbppcccccccccccc";
	printf("chaine initiale : %s\n", str);
	ft_strrev(str);
		printf("chaine finale : %s\n", str);

return 0;


}