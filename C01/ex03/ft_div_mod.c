/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:08:09 by domarion          #+#    #+#             */
/*   Updated: 2022/09/27 15:08:18 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	
	*div = a / b;
	*mod = a % b;
}

/*int main()
{
	int a = 9;
	int b = 2;

	int div;
	int mod;

	printf("%d, %d \n", a, b);

	ft_div_mod(a, b, &div, &mod);
	printf("%d, %d \n", div, mod);

	return 0;
}*/