#include <unistd.h>

void ft_putchar(char n)
{
	write(1, &n, 1);
}

void	ft_print_numbers(void)
{
	char	n;
	
	n = 0;
	while (n <= 9)
	{
		ft_putchar(n + 48);
		n++;
	}
}
