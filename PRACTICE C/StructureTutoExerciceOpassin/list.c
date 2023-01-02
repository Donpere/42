#include "list.h"

t_list *new_list(void)
{
    return (NULL);
}

Bool is_empty_list(t_list *l)
{
    if (l == NULL)
     return true;
    return false;
}

int list_length(t_list *l)
{
    int size = 0;

    if(!is_empty_list(l))
        while(l != NULL)
        {
            ++size;
            l = l->next;
        }

    return (size);
}

void print_list(t_list *l)
{
    if(is_empty_list(l))
    {
        printf("Rien a afficher, la liste est vide>\n");
        return;
    }
    while(l != NULL)
    {
        printf("[%d] ", l->value);
        l = l->next;
    }
}