int ft_atoi(const char *sptr)
{
	int i;
	int rslt;
	int neg;

	i = 0;
	rslt = 0;
	neg = 1;
	while (sptr[i] == ' ' || (sptr[i] >= 9 && sptr[i] <= 13))
		i++;
	while (sptr[i] == '+' || sptr[i] == '-')
	{
		if (sptr[i] == '-')
			neg = neg * (-1);
		i++;
	}
	while (sptr[i] != '\0' && sptr[i] >= '0' && sptr[i] <= '9')
	{
		rslt = rslt * 10 + sptr[i] -48;
		i++; 
	}
	return (rslt * neg);
}