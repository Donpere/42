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

void	ft_sort_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;
	int	j;

	j = 0;
	while (j < size -1)
	{
	i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i +1])
			{
			tmp = tab[i];
			tab[i] = tab[i +1];
			tab[i +1] = tmp;
			i++;
			}
			else
		i++;
		}
	j++;
	}
}

// int main()
// {
// 	int    array[12] = {111, 77, 44, 33, 9, -8, 6, -5, 0, 2};
// 	int big = 10;
// 	int i = 0 - 1;

// 	while (++i < big)
// 	{
// 			printf("%d", array[i]);
// 	}
// 			printf("\n");

// 	ft_sort_int_tab(array, big);

// 	i = 0 - 1;

// 	while (++i < big)
// 			printf("%d", array[i]);

// 	return 0;
// }