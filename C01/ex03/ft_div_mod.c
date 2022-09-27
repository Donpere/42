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

void ft_div_mod(int a, int b, int *div, int *mod)
{
	
	*div = a / b;
	*mod = a % b;
}

int main()
{
	int a = 9;
	int b = 2;

	int div;
	int mod;

	printf("%d, %d \n", a, b);

	ft_div_mod(a, b, &div, &mod);
	printf("%d, %d \n", div, mod);

	return 0;
}