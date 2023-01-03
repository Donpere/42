#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(void)
{
//crea du pointeur "listChain" de type t_List qui pointe sur NULL puisque emptyList n'a pas d'argument : ()
	t_List *listChain = emptyList();

// affiche la reponse
	printf("Liste vide ? Y = 1, no = 0. reponse : %d\n", isEmptyList(listChain));

//crea de 3 blocs
	listChain = addAt(listChain, 111, 0);
		listChain = addAt(listChain, 222, 0);
			listChain = addAt(listChain, 333, 0);

// insert d'un bloc en position 1... situe donc apres le dernier cree (333 qui est en pos 0) et le deuxieme (222 qui etait en pos 1)
	listChain = addAt(listChain, 444, 1);




	// listChain = addAt(listChain, 10, 0);
	// 	listChain = addAt(listChain, 20, 0);
	// 		listChain = addAt(listChain, 30, 2);
	// 			listChain = addAt(listChain, 40, 1);

	// listChain = freeAt(listChain, 1);

	printList(listChain);

	listChain = freeList(listChain);


	return 0;
}