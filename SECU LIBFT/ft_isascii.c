/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:08:53 by domarion          #+#    #+#             */
/*   Updated: 2022/11/15 12:09:00 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

// int ft_isascii(int c);

// int main()
// {
//     x = '6';
//     y = 0;

//     y = isascii(x);
//     printf("isascii %d", y);

//     y = ft_isascii(x);
//     printf("isascii %d", y);
    
//     return (0);
// }

int ft_isascii(int c)
{
if ((c >= 0 && c <= 127))
	return 1;

else
	return 0;
}
