#ifndef _LIST_H_
#define _LIST_H_

typedef struct s_Cell
{
    int data;
    struct s_Cell *next;
} t_List;

// creer liste vide
t_List *emptyList(void);

// tester si liste vide
int isEmptyList(t_List *);

// 
long lenList(t_List *);

// Ajouter cellule
t_List *addAt(t_List *, int, int);

// 
int getAt(t_List *, int);

// 
void setAt(t_List *, int, int);

//
t_List *freeAt(t_List *, int);

//
t_List *freeList(t_List *);

// Afficher la liste
void printList(t_List *);

#endif