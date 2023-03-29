#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;


// Crée un nouvel élément de liste chaînée avec le contenu donné
t_list *ft_lstnew(void *content)
{
  t_list *lst;
  lst = malloc(sizeof(t_list));
  if (!lst) // Vérifie si malloc() a alloué de la mémoire avec succès
    return NULL;
  lst->next = NULL;
  lst->content = content;
  return(lst);
}

// Renvoie le dernier élément de la liste chaînée
t_list *ft_lstlast(t_list *lst)
{
  if (!lst)
    return NULL;
  while(lst->next)
    lst = lst->next;
  return (lst);
}

// Ajoute un nouvel élément à la fin de la liste chaînée
void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list    *a;

    if (!lst || !new)
        return ;
    if (!*lst)
    {
        *lst = new;
        return ;
    }
    a = ft_lstlast(*lst);
    a->next = new;
}

// Libère la mémoire allouée pour un élément de liste chaînée
void ft_lstdelone(t_list *element, void (*del)(void*))
{
  if (!element || !del)
    return;
//del(element->content); // Libère la mémoire allouée pour le contenu de l'élément
del(element); // Libère la mémoire allouée pour l'élément lui-même
}

// Supprime tous les éléments d'une liste chaînée et libère la mémoire allouée pour chaque élément
void ft_lstclear(t_list **lst, void (*del)(void*))
{
  t_list *current;
  t_list *next;

  if (!lst || !del)
    return;

  current = *lst;
  while (current)
  {
    next = current->next;
    ft_lstdelone(current, del);
    current = next;
  }
  *lst = NULL;
}


int main(void)
{
    // Creation de la liste chainee
    t_list *lst = ft_lstnew("Premier element");

    // Ajout de deux elements a la fin de la liste
    ft_lstadd_back(&lst, ft_lstnew("Deuxieme element"));
    ft_lstadd_back(&lst, ft_lstnew("Troisieme element"));

    // Parcours de la liste et affichage de chaque element
    t_list *curr = lst;
    while (curr != NULL)
    {
        printf("%s\n", (char*)(curr->content));
        curr = curr->next;
    }

    // Liberation de la memoire allouee pour la liste
    ft_lstclear(&lst, free);
    return 0;
}