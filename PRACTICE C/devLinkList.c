#include <stdlib.h>
#include <stdio.h>


typedef struct s_list
{
	int data;
	struct s_list *next;
} t_list;

void createEmptyList()
{
	return NULL;
}

int isEmptyList(t_list *lst)
{
	return lst == NULL;
}

int main()
{

	t_list *myList = createEmptyList ();

	printf("&d\n", isEmptyList(myList));

	return 0;
}