#include <stdlib.h>
#include <stdio.h>


typedef struct s_list
{
	int data;
	struct s_list *next;
} t_list;

t_list *createCell(int val)
{
	t_list *cell = malloc(sizeof(t_list));
	if(!cell)
		return NULL;

	cell->data = val;
	cell->next = NULL;

	return cell;
}

t_list *createEmptyList()
{
	return NULL;
}

int isEmptyList(t_list *lst)
{
	return lst == NULL;
}

t_list *addCell(t_list *lst, int val, int pos)
{
	t_list *prec = lst;
	t_list *cur = lst;
	int i = 0;

//on cree une cellule
	 t_list *cell = createCell(val);

//puis on gere le cas d'une eventuelle liste vide. Si la liste est vide on retourne l'unique cellule existante :
	if(isEmptyList(lst))
		return cell;
// gestion du cas liste non vide (qui aurait donc passer la condition precedente :
	if(pos == 0)
		{
// l'adresse de next devient donc lst
			cell->next = lst;
// on retourne celle ci qui devient le pointeur de debut de liste
			return cell;
		}

		// gestion des autres cas, insertion a la position que l'on veut :
	while(i < pos)
		{
			i++;
			prec = cur;
			cur = cur->next;
		}
		prec->next = cell;
		cell->next = cur;

		return lst;
}


void printList(t_list * lst)
{
//tant que la liste n'est pas nulle,
	while(!isEmptyList(lst))
		{
//affiche le data de la cellule
			printf("%d\n", lst->data);
//deplace le pointeur vers la cell suivante
			lst = lst->next;
		 } 
}


t_list *addEnd(t_list *cur, int val)
{
	t_list *suiv = malloc(sizeof(t_list));
	if(suiv == NULL)
	{
		puts("malloc error");
		return NULL;
	}
	suiv->next = NULL;

	while(cur->next != NULL)
	{
		cur = cur->next;
	}
  //  printf("%p\n", cur->next);

	cur->next = suiv;
	suiv->data = val;
	suiv->next = NULL;
}

void freeList(t_list *cur)
{
	t_list *tmp;
	while(cur != NULL)
	{
		tmp = cur;
		cur = cur->next;
		free(tmp);
	}
}


// check if head is NULL, if yes the list is empty and we just return

// Save the head in a tmp variable, and make head point to the next node on your list (this is done in head = head->next

// Now we can safely free(tmp) variable, and head just points to the rest of the list, go back to step 1


int main()
{

	t_list *myList = createEmptyList ();

	printf("%d\n", isEmptyList(myList));

	myList = addCell(myList, 666, 0);

	printList(myList);
	printf("\n");

	myList = addCell(myList, 555, 0);

	printList(myList);
	printf("\n");

	printf("%d\n", isEmptyList(myList));
	printf("\n");

	myList = addCell(myList, 777, 1);

	printList(myList);
	printf("\n");

		addEnd(myList, 38);

		printList(myList);
		printf("\n");

		addEnd(myList, 44);

		printList(myList);
		printf("\n");

	freeList(myList);

	printf("%d\n", isEmptyList(myList));
	printf("\n");
	// freeList(myList);
	return 0;
}