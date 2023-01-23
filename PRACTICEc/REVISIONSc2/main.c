#include <stdlib.h>
#include "putSerie.h"
#include "list.h"

int main()
{
	char a = 'g';
	char b[] = "bouli";
	int c = -45678;

	ft_putchar(a);
	ft_putchar('\n');

	ft_putstr(b);
		ft_putchar('\n');

	ft_putnbr(c);
		ft_putchar('\n');

		//-------------------------------------------------------

	t_list *myList = NULL;

ft_putstr("isEmpty list : ");
	ft_putnbr(isEmpty(myList));
		ft_putchar('\n');


	myList = firstCell(12);
ft_putstr("isEmpty list : ");
	ft_putnbr(isEmpty(myList));
		ft_putchar('\n');

	printList(myList);
		ft_putchar('\n');

	addEndCell(myList, 77);
	printList(myList);
		ft_putchar('\n');

ft_putstr("isEmpty list : ");
	ft_putnbr(isEmpty(myList));
		ft_putchar('\n');

	addEndCell(myList, 129);
	printList(myList);
		ft_putchar('\n');

	myList = freeList(myList);

ft_putstr("isEmpty list : ");
	ft_putnbr(isEmpty(myList));
		ft_putchar('\n');

	return 0;
}