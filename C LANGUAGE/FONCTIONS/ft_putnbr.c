/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 09:53:34 by domarion          #+#    #+#             */
/*   Updated: 2022/10/04 09:53:44 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    if (nb == -2147483648)
        write(1, "-2147483648", 11);
    
    
    else if (nb < 0)
        {ft_putchar('-');
         nb = -n;
         ft_putnbr(nb);
        }

    else if (nb >= 10)
        {ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
        }

    else
        ft_putchar(nb + 48);
}

int main()
{
    ft_putnbr(1649);
    return (0);
}
