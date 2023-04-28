#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;

t_list *lstnew(t_list *lst, void *content)
{
    lst = (t_list*)malloc(sizeof(t_list));
    if (!lst)
        return (NULL);
    lst->next = NULL;
    lst->content = content;
    return (lst);
}

t_list *lstlast(t_list *lst)
{
    while (lst->next != NULL)
        lst = lst->next;
    return (lst);
}

// void add_last(t_list **lst, void *content)
// {
//     t_list *new = lstnew(*lst, content);
//     (*lst) = lstlast(*lst);
//     (*lst)->next = new;

// }


void add_last(t_list **lst, void *content)
{
    t_list *new = lstnew(*lst, content);
    if (*lst == NULL)
    {
        *lst = new;
        return;
    }
    t_list *last = lstlast(*lst);
    last->next = new;
}


//////////////////////////////////////////////

void doubb(void *ptr)
{
    int *nb = (int *)ptr;
    (*nb) *= 2;
}

void lstIter(t_list *lst, void(*f)(void *))
{
    while(lst)
    {
        f(lst->content);
        lst = lst->next;
    }
}

//////////////////////////////////////////////


int main()
{
char a;
int z = 8;
int b;
int c = 22;
int d = 33;
int e = 44;
a = 'x';
void * p;
p = &a;
b = *(char *)p;

printf("%d", b);

//////////////////////////////////////////////



t_list *lst = NULL;
lst = lstnew(lst, &z);
add_last(&lst, &b);
add_last(&lst, &c);
add_last(&lst, &d);
add_last(&lst, &e);
lstIter(lst, doubb);

    return 0;
}