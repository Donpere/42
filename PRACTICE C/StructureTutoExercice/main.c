#include <stdio.h>
#include "list.h"


int main(void)
{
    List mylist = new_list();

    if(is_empty_list(mylist))
        printf("Liste vide.\n");
    else
        printf("Liste a des elements.\n");

    return 0;
}