#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
    char* content;
    struct s_list *next;
} t_list;

size_t ft_strlen(const char *s)
{
    const char *p = s;
    while (*p)
        ++p;
    return (p - s);
}


int add_head(t_list **headPt, char* data)
{
    // création d'un nouveau noeud malloc pour placer en tete de liste
    t_list *node = malloc(sizeof(t_list));
    if (!node)
    {
        printf("malloc error in add_head");
        return (1);
    }

    // allocation de la mémoire pour la chaîne de caractères et copie
    int len = ft_strlen(data);
    node->content = malloc(len + 1);
    if (!node->content)
    {
        printf("malloc error in add_head");
        free(node);
        return (1);
    }
    for (int i = 0; i < len; i++)
    {
        node->content[i] = data[i];
    }
    node->content[len] = '\0';

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
        free(temp->content);
        free(temp);
    }

    *headPt = NULL; // pour marquer la liste comme vide
}

int main()
{
    t_list *head = NULL;
    t_list *current = NULL;

    // Créer la liste chaînée
    char* str1 = "premier element";
    char* str2 = "deuxieme element";
    char* str3 = "troisieme element";

    add_head(&head, str1);
    add_head(&head, str2);
    add_head(&head, str3);

    // Ajouter un nouvel élément en tête de la liste chaînée
    char* str0 = "nouveau premier element";
    add_head(&head, str0);

    // Parcourir la liste chaînée modifiée
    current = head;
    while (current != NULL) {
        printf("%s\n", current->content);
        current = current->next;
    }

    // Libérer la mémoire allouée dynamiquement
    free_list(&head);

    return 0;
}
