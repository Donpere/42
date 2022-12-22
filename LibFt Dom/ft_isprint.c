/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:59:35 by domarion          #+#    #+#             */
/*   Updated: 2022/11/16 15:59:44 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

// int ft_isprint(int c);

// int main()
// {
//     x = '6';
//     y = 0;

//     y = isprint(x);
//     printf("isascii %d", y);

//     y = ft_isprint(x);
//     printf("isascii %d", y);
//     return (0);
// }

int	ft_isprint(int c)
{
	if ((c >= 32 && c <= 126))
		return (1);
	else
		return (0);
}
