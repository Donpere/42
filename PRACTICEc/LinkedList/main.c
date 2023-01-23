#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main()
{
	// int a = 0;

	 t_list *myList;

// creaction de cells (chaine, data,position)
// chaque addCell va ajouter une nouvelle cell AVANT la precedente
	myList = addCell(myList, 10, 0);
		myList = addCell(myList, 33, 0);
			myList = addCell(myList, 56, 0);


	//myList = addCell(myList, 33, 1);
	//myList = addCell(myList, 8, 2);
// insertion en position 1
	//myList = addCell(myList, 28, 1);

// suppression d'une cell
	//myList = freeCell(myList, 0);

	printList(myList);

// liberer les malloc
	//myList = freeList(myList);
	return 0;
}