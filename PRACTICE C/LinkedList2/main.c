#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	int data;
	struct s_list *next;
} t_list;

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i=0;
	while(str[i]!= '\0')
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

	if(nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}

	if(nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}

	else
	{
		ft_putchar(nb + 48);
	}
}

int main()
{
	char a = 't';
	char b[] = "blabla";
	int c = 2147466; 

	ft_putchar(a);
		ft_putchar('\n');

	ft_putstr(b);
			ft_putchar('\n');
		
	ft_putnbr(c);
			ft_putchar('\n');
		
	return 0;

}