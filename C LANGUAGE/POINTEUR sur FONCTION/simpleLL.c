#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
  int data;
  struct s_list *next;
} t_list;

t_list *delete_head(t_list *head)
{
    if (head == NULL) {
        return NULL;
    }
    t_list *new_head = head->next;
    free(head);
    return new_head;
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

    // Supprimer le premier élément de la liste chaînée
    head = delete_head(head);

    // Parcourir la liste chaînée modifiée
    current = head;
    while (current != NULL) {
        printf("%d\n", current->data);
        current = current->next;
    }

    return 0;
}
