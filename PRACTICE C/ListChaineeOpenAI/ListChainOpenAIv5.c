#include <stdio.h>
#include <stdlib.h>

struct node {
   int data;
   struct node *next;
};








// fonction pour créer un nœud
struct node* createNode(int data) {
   // allocation de mémoire pour le nœud
   struct node *new_node = (struct node*) malloc(sizeof(struct node));

   // initialisation des champs du nœud
   new_node->data = data;
   new_node->next = NULL;

   return new_node;
}







// fonction pour insérer un nœud en fin de liste
void insertNode(struct node *head, int data) {
   struct node *current = head;

   // parcours de la liste jusqu'à la fin
   while (current->next != NULL) {
      current = current->next;
   }

   // création du nouveau nœud
   struct node *new_node = createNode(data);

  
// insertion du nouveau nœud en fin de liste
   current->next = new_node;
}






// fonction pour supprimer tous les nœuds de la liste
void deleteList(struct node *head) {
   struct node *current = head;
   struct node *next;

   while (current != NULL) {
      next = current->next;
      free(current);
      current = next;
   }

   head = NULL;
}





// fonction pour afficher la liste
void printList(struct node *head) {
   struct node *ptr = head;
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
   struct node *head = createNode(10);

   // insertion de plusieurs nœuds en fin de liste
   insertNode(head, 20);
   insertNode(head, 30);
   insertNode(head, 1);
   insertNode(head, 40);
   insertNode(head, 56); 



   // affichage de la liste
   printList(head);

   // suppression de tous les nœuds de la liste
   deleteList(head);

   return 0;
}
