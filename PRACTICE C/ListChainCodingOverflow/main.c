#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(void)
{
//crea du pointeur "listChain" de type t_List qui pointe sur NULL puisque emptyList n'a pas d'argument : ()
	t_List *listChain = emptyList();

printf("Nombre elements dans la liste : %ld\n", nbElement(listChain));

// affiche la reponse
	printf("Liste vide ? Y = 1, no = 0. reponse : %d\n\n", isEmptyList(listChain));

//crea de 3 blocs
	listChain = addAt(listChain, 111, 0);
		listChain = addAt(listChain, 222, 0);
			listChain = addAt(listChain, 333, 0);

printf("Nombre elements dans la liste : %ld\n", nbElement(listChain));

	printf("la chaine vaut : \n");
	printList(listChain);

	printf("Liste vide ? Y = 1, no = 0. reponse : %d\n\n", isEmptyList(listChain));
// insert d'un bloc en position 1... situe donc apres le dernier cree (333 qui est en pos 0) et le deuxieme (222 qui etait en pos 1)
	listChain = addAt(listChain, 444, 1);

printf("Nombre elements dans la liste : %ld\n", nbElement(listChain));

	printf("la chaine vaut : \n");
	printList(listChain);

listChain = addAt(listChain, 500, 4);

printf("Nombre elements dans la liste : %ld\n", nbElement(listChain));

printf("data en indice 2 : %d\n", getAt(listChain, 2));

	printList(listChain);
setAt(listChain, 1000, 2);
printf("insert 1000 en indice 2\n");
	printList(listChain);

setAt(listChain, 1000, 12);

	printf("\nFree list\n");

	listChain = freeList(listChain);

printf("Nombre elements dans la liste : %ld\n", nbElement(listChain));

	printf("la chaine vaut : \n");
	printList(listChain);

setAt(listChain, 1000, 12);


	printf("Liste vide ? Y = 1, no = 0. reponse : %d\n\n", isEmptyList(listChain));
	printf("data en indice 2 : %d\n", getAt(listChain, 2));


	return 0;
}