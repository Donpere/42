/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:35:07 by domarion          #+#    #+#             */
/*   Updated: 2022/11/14 17:35:21 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

// int ft_isalnum(int c);

// int main()
// {
//     int x = 10;
//     int y = 0;

//     y = isalnum(x);
//     printf("isalnum %d\n", y);

//     y = ft_isalnum(x);
//     printf("isalnum %d\n", y);

//     return (0);
// }

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
