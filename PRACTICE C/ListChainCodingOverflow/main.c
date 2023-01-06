#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(void)
{
	//creer liste vide : t_List *emptyList(void) utilisation pour creer la list "lisChain" -> 
t_List *listChain = emptyList();

//ajouter une cell
createCell(listChain);


	return 0;
}