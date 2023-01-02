#include <stdio.h>
#include <stdlib.h>

//crea structure pour un bloc de la chaine
struct node 
{
   int data;
   struct node *next;
};

//decla du pointeur de tete, decla du pointeur courant pour afficher
// ATTENTION ICI CE SONT DES VARIABLES GLOBALES
struct node *head = NULL;
struct node *current = NULL;

// FIN COMMANDES PRE PROC
//------------------------------------------------------------
// fonction pour insérer un nœud en début de liste
void insert(int data) 
{
   // création d'un nouveau nœud
   // cast du "void*" de malloc grace a l'expression (struct node*)
   struct node *link = (struct node*) malloc(sizeof(struct node));

   link->data = data;
   link->next = head;

   head = link;
}


//------------------------------------------------------------
// fonction pour afficher la liste

void printList() 
{
   struct node *ptr = head;
	
   // parcours de la liste jusqu'à ce que ptr devienne NULL
   while(ptr != NULL) 
   {
      printf("%d, %p \n",ptr->data, ptr->next);
      ptr = ptr->next;
   }
}

//------------------------------------------------------------
int main() 
{
   insert(10);
   insert(20);
   insert(30);
   insert(1);
   insert(40);
   insert(56); 

   printList();
   return 0;
}
