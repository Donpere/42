#include <stdio.h>
#include <stdlib.h>

int ft_len_int(int nb)
{
	unsigned int count;

	count = 0;
	if (nb <= 0)
		count++;
	while (nb != 0)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

char *ft_itoa(int n)
{
	unsigned int	len;
	char			neg;
	char 			*dst;

	neg = '\0';
	if (n < 0)
		neg = '-';
	len = ft_len_int(n);
	dst = malloc((len + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	dst[len] = '\0';
	while (len != 0)
	{
		if (n < 0)
			dst[--len] = -(n % 10) + 48;
		else
			dst[--len] = (n % 10) + 48;
			n = n /10;
	}
	if (neg)
		dst[len] = neg;
	return (dst);
}

int main()
{
	printf("%s", ft_itoa(-42));
	return (0);
}