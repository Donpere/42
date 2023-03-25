#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;

int add_head(t_list **headPt, int data)
{
    // creation d'un nouveau noeud malloc pour placer en tete de liste
    t_list *node = malloc(sizeof(t_list));
		if (!node)
		{
			printf("malloc error in add_head");
			return (1);
		}
    // stockage de la donnee
    node->data = data;
    // *headPT est le contenu du contenu de headPt soit... le contenu de head
    node->next = *headPt;
    // stockage de l'adresse du nouveau noeud dans head qui devient le debut de chaine
    *headPt = node;
	return (0);
}

void free_list(t_list **headPt)
{
    t_list *current = *headPt;
    t_list *temp;

    while (current != NULL) 
    {
        temp = current;
        current = current->next;
        free(temp);
    }

    *headPt = NULL; // pour marquer la liste comme vide
}

int main()
{
    t_list *head = NULL;
    t_list *current = NULL;
    int i = 1;

    // Créer la liste chaînée
    while (i <= 3) 
     {
        t_list *node = malloc(sizeof(t_list));
		if (!node)
		{
			printf("malloc error in main");
			return (1);
		}
        node->data = i;
        node->next = NULL;
        if (head == NULL) {
            head = node;
            current = node;
      }
      else 
      {
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

    // Libérer la mémoire allouée dynamiquement
  free_list(&head);

    return 0;
}
