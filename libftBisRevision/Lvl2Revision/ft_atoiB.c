#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *nptr)
{
	int i;
	int neg;
	int rslt;

	i = 0;
	neg = 1;
	rslt = 0;
	while (nptr[i] == ' ' ||(nptr[i] >= 9 && nptr[i] <= 13))
		i++;


	while (nptr[i] == '+' || nptr[i] == '-')
		{
			if (nptr[i] == '-')
				neg = neg * -1;
			i++;
		}

	while (nptr[i] != '\0' && nptr[i] >= '0' && nptr[i] <= '9')
	{
		rslt = rslt * 10 + nptr[i] - 48;
		i++;
	}
	return (rslt * neg);
}

int main ()
{
	char str[] = "-487";
	printf("%d\n", ft_atoi(str));
	return (0);
}