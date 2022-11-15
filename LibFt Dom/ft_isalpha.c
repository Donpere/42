/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:41:16 by domarion          #+#    #+#             */
/*   Updated: 2022/11/08 10:41:34 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <ctype.h>

// int ft_isalpha(int c);

// int main ()
// {
//     int x = 'W';
//     int y = 0 ;

//     y = ft_isalpha(x);
//     printf ("ft_isalpha %d \n", y);

//     y = isalpha(x);
//     printf ("isalpha %d \n", y);
//     return 0;
// }

int ft_isalpha(int c)
{
if ((c > 64 && c < 91) || (c > 96 && c < 123))
	return 1;

else
	return 0;
}
