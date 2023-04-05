#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	void            *content;
	struct s_list   *next;
} t_list;

/////////////////////////////////////

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

/////////////////////////////////////


t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/////////////////////////////////////

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*a;

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


/////////////////////////////////////

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/////////////////////////////////////

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

/////////////////////////////////////

int	main(void)
{
	t_list	*lst = NULL;
	
	lst = ft_lstnew("hello");
	printf("%s\n",(char *)lst->content);

    ft_lstadd_back(&lst, ft_lstnew("Deuxième élément"));
    ft_lstadd_back(&lst, ft_lstnew("Troisième élément"));

    // Parcours de la liste et affichage de chaque élément
    t_list *curr = lst;
    while (curr != NULL)
    {
        printf("%s\n", (char *)curr->content);
        curr = curr->next;
    }

    // Libération de la mémoire allouée pour la liste
    ft_lstclear(&lst, free);

	return (0);
}