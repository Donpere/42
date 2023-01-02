#include <stdio.h>
#include <stdlib.h>

typedef struct s_node 
{
   int data;
   struct s_node *next;
}t_node;




// fonction pour insérer un nœud en début de liste
void insert(t_node **head, int data) 
{
   // création d'un nouveau nœud
   t_node *link = (t_node*) malloc(sizeof(t_node));

   link->data = data;
   link->next = *head;

   *head = link;
}





// fonction pour afficher la liste
void printList(t_node *head) 
{
   t_node *ptr = head;

	
   // parcours de la liste jusqu'à ce que ptr devienne NULL
   while(ptr != NULL) {
      printf("%d, %p\n",ptr->data, ptr->next);
      ptr = ptr->next;
   }
	

}

int main() 
{
   t_node *head = NULL;

   insert(&head, 10);
   insert(&head, 20);
   insert(&head, 30);
   insert(&head, 1);
   insert(&head, 40);
   insert(&head, 56); 

   printList(head);
   return 0;
}
