#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        {
        ft_putchar(str[i]);
        i++;
        }

}

void ft_putnbr(int nb)
{
    if (i < 0)
        nb = - nb;

    else if (i >= 10)
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);

    else
        ft_putchar(nb);
}

int main()
{
    ft_putnbr(18);
    return (0);
}