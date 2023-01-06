#include <stdlib.h>
#include <stdio.h>

typedef struct s_list
{
	int data;
	struct s_list *next;
}t_list;

t_list *addCell(t_list **p, int maData)
{
	t_list *cell = (t_list*) malloc (sizeof(t_list));
	if(!cell)
		return(NULL);
	cell->data = maData;
	cell->next = *p;
	cell = *p;
	return (cell);
}

int main()
{
	t_list *maChain = NULL;
	t_list *element;

	element = addCell(&maChain, 20);
	if (element == NULL)
		return (1);

	element = addCell(&maChain, 20);
	if (element == NULL)
		return (1);

	free(element);

	return 0;
}