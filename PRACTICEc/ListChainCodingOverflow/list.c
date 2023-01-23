#include <stdio.h>
#include <stdlib.h>
#include "list.h"


static t_List *createCell(int data)
{
	t_List *cell = malloc(sizeof(t_List));
	if(!cell)
		return NULL;
	cell->data = data;
	cell->next = NULL;
	return cell;
}

// creer liste vide --------------------------------
t_List *emptyList(void)
{
	return NULL;
}

// tester si liste vide ----------------------------
int isEmptyList(t_List *L)
{
	return L == NULL;
}

// calcul taille de la liste -----------------------
long nbElement(t_List *L)
{
	long len = 0;
	while(L)
	{
		len++;
		L = L->next;
	}
	return len;
}

// Ajouter cellule a une position donnee ------------
t_List *addAt(t_List *L, int data, int pos)
{
	t_List *prec = L;
	t_List *cur = L;
	t_List *cell = createCell(data);

// cas 1, la liste est vide ------------------------
	if(isEmptyList(L))
	{
		return cell;
	}

// cas 2 il y a un premier bloc qui pointe vers NULL, on veut inserer avant ce bloc, next pointera donc vers ce bloc L
	if(pos == 0)
	{
		cell->next = L;
		return cell;
	}

// autres cas -----------------------------------------
int i = 0;
	while (i < pos)
	{
		i++;
		prec = cur;
		cur = cur ->next;
	}
	prec->next = cell;
	cell->next = cur;

return L;

}

// effacer cellule (via l'index) a une position donnee ******************
t_List *freeAt(t_List *L, int pos)
{

}

// effacer toute la liste --------------------------------------
t_List *freeList(t_List *L)
{
	t_List*tmp = NULL;
	while(L)
	{
		tmp = L->next;
		free(L);
		L = tmp;
	}
	return L;
}

// Afficher la liste ----------------------------------------
void printList(t_List *L)
{
	while(L)
	{
		printf("%d", L->data);
		L = L->next;
		//pour separer les elements si on ne veut pas concatener
			printf("\n");

	}
	printf("\n");
}

// recuperer data a une position donnee ------------------------
int getAt(t_List *L, int pos)
{
	int i = 0;
	if(isEmptyList(L))
	{
		printf("Recherche data : Liste vide\n");
		return -1;
	}
	while(i < pos)
	{
		i++;
		L = L->next;
	}
	return L->data;
}

// modifier data a une position donnee **********************
void setAt(t_List *L, int data, int pos)
{
	int i = 0;
	if(isEmptyList(L))
	{
		printf("Insert data impossible : Liste vide\n");
		return;
	}
	if(pos > nbElement(L))
	{
		printf("Erreur ! La position %d est au dela de la liste\n", pos);
			printf("Indice max liste actuelle : %ld\n", nbElement(L)-1);
		return;
	}
	while(i < pos)
	{
		i++;
		L = L->next;
	}
	L->data = data;
}