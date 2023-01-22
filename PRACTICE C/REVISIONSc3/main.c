/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 08:31:44 by domarion          #+#    #+#             */
/*   Updated: 2023/01/22 08:31:49 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "putSerie.h"
#include "list.h"

int	main(void)
{

	t_list *myList = NULL;
	ft_putnbr(isEmpty(myList));
	ft_putchar('\n');
	
		printf("Longueur myList : %d\n", lenList(myList));


		printf("%p\n", myList);

	myList = firstCell(myList, 13);

		ft_putnbr(isEmpty(myList));
		ft_putchar('\n');

		printf("Longueur myList : %d\n", lenList(myList));

	addEndCell(myList, 33);

		printf("Longueur myList : %d\n", lenList(myList));

	addEndCell(myList, 27);

		printf("Longueur myList : %d\n", lenList(myList));	
	
	addEndCell(myList, 54);

		printf("Longueur myList : %d\n", lenList(myList));	
		
	addEndCell(myList, 12);

		printf("Longueur myList : %d\n", lenList(myList));
	
	printList(myList);

		printf("%p\n", myList);

	myList = freeList(myList);
		printf("%p\n", myList);
	printf("Length list : %d\n", lenList(myList));

	return (0);
}
