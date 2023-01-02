#include <stdio.h>
#include <stdlib.h>

// Définit le type de structure pour un noeud de liste chainée
typedef struct s_node
{
    int value;
    struct node *next;
} t_node;

int main(void)
{
    t_node *head = NULL; // déclare un pointeur vers le premier noeud de la liste (qui est vide pour le moment)

    // Crée trois noeuds et les ajoute à la liste
    Node *n1 = malloc(sizeof(t_node));
    n1->value = 1;
    n1->next = NULL;
    head = n1;

    Node *n2 = malloc(sizeof(t_node));
    n2->value = 2;
    n2->next = NULL;
    n1->next = n2;

    Node *n3 = malloc(sizeof(t_node));
    n3->value = 3;
    n3->next = NULL;
    n2->next = n3;

    // Affiche les valeurs des noeuds de la liste
    t_node *current = head;
    while (current != NULL)
    {
        printf("%d\n", current->value);
        current = current->next;
    }

    // Libère l'espace mémoire alloué pour chaque noeud
    free(n1);
    free(n2);
    free(n3);

    return 0;
}
