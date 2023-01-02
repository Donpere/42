#include "list.h"

int main(void)
{
    t_list *mylist;
	
	mylist = malloc(0);
    mylist = new_list();

    if(is_empty_list(mylist))
        printf("Liste vide.\n");
    else
        printf("Liste a des elements.\n");

    free(mylist);

    return 0;
}