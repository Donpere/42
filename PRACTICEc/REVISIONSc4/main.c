/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 09:51:22 by domarion          #+#    #+#             */
/*   Updated: 2023/01/23 09:51:26 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puts.h"
#include "list.h"
#include <stdio.h>

int	main(void)
{
	t_list *myList = NULL;

	myList = firstCell(myList, 8);

		printList(myList);
		ft_putchar('\n');

	addEndCell(myList, 7);

		printList(myList);






	return (0);
}
