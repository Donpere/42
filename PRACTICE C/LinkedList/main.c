#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main()
{
	int a = 0;

	t_list *myList;

		isListEmpty(myList);

	myList = creatCell();

		a = isListEmpty(myList);
		ft_putnbr(a);


	return 0;
}