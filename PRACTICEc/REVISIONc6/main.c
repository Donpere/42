#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	int data;
	struct s_list *next;
} t_list;

int isEmpty(t_list *lst)
{
	return lst == NULL;
}

t_list* firstCell(int val)
{
	t_list *fCell = malloc(sizeof(t_list));
	if(fCell == NULL)
	{
		printf("Malloc error on addEnd");
		return NULL;
	}

	fCell->data = val;
	fCell->next = NULL;

	return fCell;
}

void printList(t_list *lst)
{
	while(lst != NULL)
	{
		printf("%d\n", lst->data);
		lst = lst->next;
	}
}

int addEnd(t_list *lst, int val)
{
	t_list *newCell = malloc(sizeof(t_list));
	if(newCell == NULL)
	{
		printf("Malloc error on addEnd");
		return 1;
	}
	
	newCell->data = val;
	newCell->next = NULL;

	while(lst->next != NULL)
	{
		lst = lst->next;
	}
	lst->next = newCell;

	return 0;
}

t_list* freeList(t_list *lst)
{
	t_list *tmp;

	while(lst != NULL)
	{
		tmp = lst;
		lst = lst->next;
		free(tmp);
	}
	lst = NULL;

	return lst;
}

int lenList(t_list *lst)
{
	int i = 0;
	while(lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return i;
}

int main()
{
	t_list *myList = NULL;
		printf("%d\n", isEmpty(myList));
	myList = firstCell(13);
		printf("%d\n", isEmpty(myList));
			printf("La liste contient %d cell", lenList(myList));

		printList(myList);

		printf("\n");

	addEnd(myList, 44);
		printList(myList);

			printf("La liste contient %d cell", lenList(myList));


				printf("\n");
	addEnd(myList, 68);
		printList(myList);

		printf("La liste contient %d cell", lenList(myList));


		printf("\n");


		printf("%d\n", isEmpty(myList));

	myList = freeList(myList);

		printf("%d\n", isEmpty(myList));

	return 0;
}
