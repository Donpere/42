#include <stdio.h>
#include <stdlib.h>

int countInt(int nb)
{
	int i = 0;
	int count = 0;

	if(nb <= 0)
		count++;
	
	while(nb != 0)
	{
		nb = nb / 10;
		count++;
	}	
	if(count < 1)
		return(-1);
	return(count);

}

char *ft_itoa(int nb)
{
	int len;
	char *dst;
	int neg;

	neg = nb;
	len = countInt(nb);
printf("%d\n", len);
	dst = malloc(sizeof(char) * (len + 1));

	if(!dst)
		return(NULL);

	while(len != 0)
	{
		if (nb < 0)
			dst[--len] = -(nb % 10) + 48;
		else
			dst[--len] = (nb % 10) + 48;
		nb = nb / 10;
	}
printf("%d\n", len);

	if(neg < 0)
		dst[0] = '-';
	return(dst);
}

int twoTimes(int nb)
{
	return (nb * 2);
}

int threeTimes(int nb)
{
	return (nb * 3);
}

int fourTimes(int nb)
{
	return (nb * 4);
}

int fiveTimes(int nb)
{
	return (nb * 5);
}

char* adChar(int nb, char c)
{
	char *str;
	return str;
}

int main()
{
	int i = 0;
	char *str;
	int result;
	int val = -123456;

	int (*functTab[100])(int);
	int (*xd)(int) = &twoTimes;
		int (*xt)(int) = &threeTimes;
			int (*xq)(int) = &fourTimes;
				int (*xqui)(int) = &fiveTimes;
	functTab[0] = xd;
	functTab[1] = xt;
	functTab[2] = xq;
	functTab[3] = xqui;

	while(i <= 3)
	{
		result = functTab[i](val);
		printf("%d\n", result);
		i++;
	}

	str = ft_itoa(val);

	i = 0;
	while(str[i])
	{
		printf("%c", str[i]);
		i++;
	}	
	printf("\n");

	return(0);
}