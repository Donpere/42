# include <stdio.h>
# include <stdlib.h>

int ft_atoi (const char *str)
{
	int i;
	int nb;
	int neg;

	i = 0;
	nb = 0;
	neg = 1;
	if (str == NULL)
		return (0);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				neg = neg * (-1);
			i++;
		}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - 48;
		i++;
	}
	return (nb * neg);
}

// int main(int argc, char **argv)
int main()
{
//	if (argc < 2)
	char *str = NULL;
	int i;
	i = ft_atoi(str);
//	printf("result ft_atoi :	%d\n", i);
//	i = atoi(argv[1]);
 

	printf("result atoi :		%d\n", i);
	return 0;
}