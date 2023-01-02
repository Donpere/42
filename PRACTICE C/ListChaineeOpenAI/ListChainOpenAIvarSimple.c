#include <stdio.h>
#include <stdlib.h>

typedef struct s_node 
{
   int data;
   struct s_node *next;
} t_node;


//---------------------------------------------------------------------




// fonction pour créer un nœud INITIAL
t_node* initNode(int data) 
{
   // allocation de mémoire pour le nœud + cast du void* pour le malloc
   t_node *new_node = (t_node*) malloc(sizeof(t_node));

   // initialisation des champs du nœud
   new_node->data = data;
   new_node->next = NULL;

   return new_node;
}




// fonction pour insérer un nœud en fin de liste
void insertNode(t_node *head, int data) 
{
   t_node *current = head;

   // parcours de la liste jusqu'à la fin
   while (current->next != NULL) 
   {
      current = current->next;
   }

   // création du nouveau nœud
   t_node *new_node = initNode(data);

   // insertion du nouveau nœud en fin de liste
   current->next = new_node;
}





// fonction pour afficher la liste
void printList(t_node *head) 
{
   t_node *ptr = head;
   printf("[ ");
	
   // parcours de la liste jusqu'à ce que ptr devienne NULL
   while(ptr != NULL) {
      printf("%d, ",ptr->data);
      ptr = ptr->next;
   }
	
   printf(" ]\n");
}





int main() {
   // création du premier nœud de la liste
   t_node *head = initNode(10);

   // insertion de plusieurs nœuds en fin de liste
   insertNode(head, 20);
   insertNode(head, 30);
   insertNode(head, 1);
   insertNode(head, 40);
   insertNode(head, 56); 

   // affichage de la liste
   printList(head);
   return 0;
}
