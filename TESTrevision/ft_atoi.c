int ft_atoi(const char *nptr)
{
	int i;
	int rslt;
	int neg;

	i = 0;
	rslt = 0;
	neg = 1;
	if (!nptr)
		return (0);
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			neg = neg * (-1);
		i++;
	}
	while (nptr[i])
	{
		rslt = rslt * 10 + nptr[i] -48;
		i++;
	}
	return (rslt * neg);
}