#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}


void ft_putnbr(int nb)
{
	if(nb == -2147483648)
	{
		ft_putstr("-2147483648");
		return;
	}

	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb*(-1);
	}

	if (nb >= 10)
	{
		ft_putnbr(nb/10);
		ft_putnbr(nb%10);
	}

	else
		ft_putchar(nb+48);
	
}

int main()
{
	int a = 2147483647;
	char b = 'd';
	char c[] = "salut";
	int x = __INT_MAX__;
	ft_putnbr(a);
		ft_putchar('\n');

	ft_putchar(b);
		ft_putchar('\n');

	ft_putstr(c);
		ft_putchar('\n');

	ft_putnbr(x);
		ft_putchar('\n');

	return 0;
}