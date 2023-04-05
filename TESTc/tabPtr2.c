#include <stdio.h>
#include <stdlib.h>

// rend le tableau global au fichier uniquement et met tous les indices a NULL
static int (*funcTab[100])(int);

int ft_lenInt(int nb)
{
	int count;

	count = 0;
	if(nb <= 0)
	{
		count++;
		nb = -nb;
	}
	while(nb > 0)
	{
		nb = nb / 10;
		count++;
	}
	return(count);
}

char *ft_itoa(int nb)
{
	int i;
	int len;
	int neg;
	char *dst;

	i = 0;
	neg = nb;
	len = funcTab[0](nb);
	dst = malloc(sizeof(char) * (len + 1));
	if(!dst)
		return (NULL);
	dst[len] = '\0';
	while(len > 0)
	{
		if(nb < 0)
		{
			dst[len - 1] = -(nb % 10) + 48;
			len--;
		}
		else
		{
			dst[len - 1] = (nb % 10) + 48;
			len--;
		}

		nb = nb / 10;
	}
	if(neg < 0)
		dst[0] = '-';
	return (dst);
}

int main()
{
	int i;
	int nb;
	int res;
	char *dst;

	nb = -234;
	i = 0;

	funcTab[0] = &ft_lenInt;

	res = funcTab[0](nb);

	printf("%d\n", res);
	dst = ft_itoa(nb);
	while(i < res)
	{
		printf("%c", dst[i]);
		i++;
	}
	printf("\n");

	free(dst);


	return (0);
}