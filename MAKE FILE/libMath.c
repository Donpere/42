#include "libMath.h"
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *nptr)
{
	int i;
	int rslt;
	int neg;

	i = 0;
	rslt = 0;
	neg = 1;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			neg = neg *-1;
		i++;
	}
	while (nptr[i] != '\0' && nptr[i] >= '0' && nptr[i] <= '9')
	{
		rslt = rslt *10 + nptr[i] - 48;
		i++;
	}
	return (rslt * neg);
}

int doub(int nb)
{
	nb *= 2;
	return (nb);
}

