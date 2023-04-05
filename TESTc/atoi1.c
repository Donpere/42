#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i;
	
	i =0;
	if (!str)
		return -1;
	while (str[i] != '\0')
		i++;
	return (i);
}

int ft_atoi(char *str)
{
	int i;
	int nb;
	int neg;

	i = 0;
	nb = 0;
	neg = 1;
	if (!str)
		return (-1);
	while(str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
		i++;
	while(str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
			neg *= -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - 48;
		i++;
	}

	return (nb * neg);
}

int main(int argc, char **argv)
{
	if (argc < 2)
		return 1;
	
	int nb1;
	int nb2;
	int nb3;

	if (argv[1])
	{
		nb1 = ft_atoi(argv[1]);
		printf("%d\n", nb1);
	}

	if (argv[2])
	{
		nb2 = ft_atoi(argv[2]);
		printf("%d\n", nb2);
	}
	
	if (argv[3])
	{
		nb3 = ft_atoi(argv[3]);
		printf("%d\n", nb3);
	}

	return 0;
}