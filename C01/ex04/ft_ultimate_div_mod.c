/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:09:35 by domarion          #+#    #+#             */
/*   Updated: 2022/09/27 15:09:44 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp_a;
	int	tmp_b;

	tmp_a = *a / *b;
	tmp_b = *a % *b;
	*a = tmp_a;
	*b = tmp_b;
}

/*int main()
{
	int a = 9;
	int b = 2;

	printf("%d, %d \n", a, b);

	ft_ultimate_div_mod(&a, &b);
	printf("%d, %d \n", a, b);

	return 0;
}*/