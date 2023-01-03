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

// calcul taille de la liste
long lenList(t_List *);

// Ajouter cellule a une position donnee
t_List *addAt(t_List *, int, int);

// effacer cellule (via l'index) a une position donnee
t_List *freeAt(t_List *, int);

// effacer toute la liste
t_List *freeList(t_List *);

// Afficher la liste
void printList(t_List *);

// recuperer data a une position donnee
int getAt(t_List *, int);

// modifier data a une position donnee
void setAt(t_List *, int, int);

#endif