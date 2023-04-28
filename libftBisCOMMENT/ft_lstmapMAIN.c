#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

// Dans cet exemple, nous créons une liste lst contenant trois éléments, 
// chacun contenant un pointeur vers un entier alloué dynamiquement et initialisé à 10, 20 et 30 
// respectivement. Nous passons ensuite cette liste à la fonction ft_lstmap 
// en lui donnant la fonction transform qui multiplie chaque élément de la liste par 2. 
// La fonction transform crée également de nouveaux entiers alloués dynamiquement 
// pour chaque élément de la nouvelle liste.

// Ensuite, nous parcourons la nouvelle liste résultante new_lst et 
// imprimons les valeurs de chaque élément. 
// Nous utilisons ensuite la fonction ft_lstclear pour libérer la mémoire allouée 
// pour les deux listes, ainsi que pour les entiers alloués dynamiquement dans la fonction transform.

// L'exemple de code devrait afficher :

// 20
// 40
// 60

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*a;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		a = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = a;
	}
	*lst = NULL;
}

void *transform(void *content)
{
    int *num = (int *)content;
    int *new_num = malloc(sizeof(int));
    *new_num = (*num) * 2;
    return (new_num);
}

void delete(void *content)
{
    free(content);
}

// create a new linked list by applying a given function 
// to every node of an existing linked list
// RETURN : pointer on the new list

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*last;
	t_list	*a;

	if (!lst || !f || !del)
		return (NULL);
	new = ft_lstnew(f(lst->content));
	if (!new)
		return (NULL);
	last = new;
	lst = lst->next;
	while (lst)
	{
		a = ft_lstnew(f(lst->content));
		if (!a)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		last->next = a;
		last = a;
		lst = lst->next;
	}
	last->next = NULL;
	return (new);
}

int main(void)
{
    t_list *lst = ft_lstnew(malloc(sizeof(int)));
    *(int *)(lst->content) = 10;
    lst->next = ft_lstnew(malloc(sizeof(int)));
    *(int *)(lst->next->content) = 20;
    lst->next->next = ft_lstnew(malloc(sizeof(int)));
    *(int *)(lst->next->next->content) = 30;
    lst->next->next->next = NULL;

    t_list *new_lst = ft_lstmap(lst, &transform, &delete);
    t_list *current = new_lst;
    while (current != NULL)
    {
        printf("%d\n", *(int *)(current->content));
        current = current->next;
    }

    ft_lstclear(&lst, &delete);
    ft_lstclear(&new_lst, &delete);
    return (0);
}
