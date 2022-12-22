/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:49:34 by domarion          #+#    #+#             */
/*   Updated: 2022/11/14 13:49:52 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

// int ft_isdigit(int c);

// int main ()
// {
// 	int x = 50;
// 	int y = 0;

// 	y = isdigit(x);
// 	printf("isdigit %d\n", y);

// 	y = ft_isdigit(x);
// 	printf("ft_isdigit %d\n", y);

// 	return (0);
// }

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
