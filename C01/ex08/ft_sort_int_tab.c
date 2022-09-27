/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:13:47 by domarion          #+#    #+#             */
/*   Updated: 2022/09/27 15:13:54 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int tmp;
	int i;

	i = 0;
	size = size - 1;

	while (i < size)
	{
		tmp = tab[size];
		tab[size] = tab[i];
		tab[i] = tmp; 
		i++;
		size--;
	}
}

int main()
{
	int    array[5] = {8, 4, 9, 3, 1};
	int big = 5;
	int i = 0 - 1;

	while (++i < big)
	{
			printf("%d", array[i]);
	}
			printf("\n");

	ft_rev_int_tab(array, big);

	i = 0 - 1;

	while (++i < big)
			printf("%d", array[i]);

	return 0;
}
