#include <stdio.h>
#include <stdlib.h>
#include "list.h"

/*-------------------------------------*/

List new_list(void)
{
    return NULL;
}

/*-------------------------------------*/

Bool is_empty_list(List li)
{
    if (li == NULL)
     return true;

    return false;
}

/*-------------------------------------*/

int list_length(List li)
{
    int size = 0;

    if(!is_empty_list(li))
        while(li != NULL)
        {
            ++size;
            li = li->next;
        }

    return size;
}

/*-------------------------------------*/

void print_list(List li)
{
    if(is_empty_list(li))
    {
        printf("Rien a afficher, la liste est vide>\n");
        return;
    }
    while(li != NULL)
    {
        printf("[%d] ", li->value);
        li = li->next;
    }
    printf("\n");
}