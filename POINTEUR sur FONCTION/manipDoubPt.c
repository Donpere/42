#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
  int data;
  struct s_list *next;
} t_list;

void add_head(t_list **headPt, int data)
{
	// creation d'un nouveau noeud malloc pour placer en tete de liste
	t_list *node = malloc(sizeof(t_list));
	// stockage de la donnee
	node->data = data;
// *headPT est le contenu du contenu de headPt soit... le contenu de head
	node->next = *headPt;
// stockage de l'adresse du nouveau noeud dans head qui devient le debut de chaine
	*headPt = node;
}

int main()
{
	t_list *head = NULL;
	t_list *current = NULL;
	int i = 1;

	// Créer la liste chaînée
	while (i <= 3) {
		t_list *node = malloc(sizeof(t_list));
		node->data = i;
		node->next = NULL;
		if (head == NULL) {
			head = node;
			current = node;
		}
		else {
			current->next = node;
			current = node;
		}
		i++;
	}

	// Ajouter un nouvel élément en tête de la liste chaînée
	add_head(&head, 0);

	// Parcourir la liste chaînée modifiée
	current = head;
	while (current != NULL) {
		printf("%d\n", current->data);
		current = current->next;
	}

	return 0;
}
