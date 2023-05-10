#include <stdlib.h>
#include <stdio.h>

int ft_len(char *str)
{
	int count = 0;
	while(str[count] != '\0')
		count++;
	return(count);
}

char *strRev(char *str)
{
	if(!str)
		return(NULL);
	int i = 0;
	int j = ft_len(str) - 1;
	char tmp;
	char *dst = malloc((ft_len(str) + 1) * sizeof(char));
	if(!dst)
		return(NULL);

	while(str[i] != '\0')
	{
		dst[j] = str[i];
		i++;
		j--;
	}
	dst[i] = '\0';
	return(dst);

}

int main()
{
	int i = 0;
	char str[] = "Palo";
	char *(*rev)(char *str);
	printf("avant : ");
	while(str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
	rev = &strRev;
	char *str_inv = rev(str);
	i = 0;
	printf("APRES : ");
	while(str[i] != '\0')
	{
		printf("%c", str_inv[i]);
		i++;
	}
	printf("\n");


	return 0;
}