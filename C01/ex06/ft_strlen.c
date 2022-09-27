/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 15:38:50 by domarion          #+#    #+#             */
/*   Updated: 2022/09/24 15:39:17 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;
    i = 0;

    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

int main()
{
    int y = 0;
    char    str[] = "lalala";
    y = ft_strlen(str);
    printf("%d", y);
    return 0;
}