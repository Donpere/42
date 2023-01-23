#ifndef LIST_H
#define LIST_H

typedef struct s_list
{
	int data;
	struct s_list *next;
} t_list;

int isEmpty(t_list *lst);
t_list* firstCell(int val);
int printList(t_list *lst);
int addEndCell(t_list *lst, int val);
t_list* freeList(t_list *lst);

#endif