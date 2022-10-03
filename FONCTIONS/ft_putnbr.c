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
{unsigned int n = nb;
    if (nb < 0)
        {ft_putchar('-');
         nb = -n;
         ft_putnbr(nb);
        }

    else if (nb >= 10)
        {ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
        }

    else
        ft_putchar(nb + '0');
}

int main()
{
    ft_putnbr(-49834);
    return (0);
}