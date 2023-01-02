#ifndef _LISTH
#define _LISTH

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef enum
{
    false,
    true
}Bool;

typedef struct s_list
{
    int value;
    struct  s_list *next;
}t_list;

t_list *new_list(void);
Bool is_empty_list(t_list *l);
int list_length(t_list *l);
void print_list(t_list *l);

#endif