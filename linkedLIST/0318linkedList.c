#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
} t_list;

/////////////////////////////////////////////

t_list *ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void ft_lstprint(t_list *lst)
{
	while (lst)
	{
		printf("%d\n", *(int*)lst->content);
		lst = lst->next;
	}
}

t_list *ft_lstnew(void *content)
{
	t_list *new;
	
	new = (t_list*) malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

void *divdoub(void *nb)
{
    int *result = malloc(sizeof(int));
    if (result == NULL)
    {
        printf("Error: couldn't allocate memory for result in divdoub\n");
        exit(EXIT_FAILURE);
    }
    *result = *(int*)nb / 2;
    return result;
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *a;

	if (!lst || !new)
	{
		printf("error data entered in lstadd_back");
		return;
	}
	if (!*lst)
	{
		*lst = new;
		return;
	}
	a = ft_lstlast(*lst);
	a->next = new;
}

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return;
	del(lst->content);
	free(lst);
}

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *a;

	if (!lst || !del)
		return;
	while (*lst)
	{
		a = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = a;
	}
	*lst = NULL;
}

int main()
{
    int *content = malloc(sizeof(int));
    if (content == NULL)
    {
        printf("Error: couldn't allocate memory for content in main\n");
        exit(EXIT_FAILURE);
    }
    *content = 84;

    t_list *lst = NULL;
    lst = ft_lstnew(content);

    void *(*dd)(void *);
    dd = &divdoub;

    int *cont2 = dd(content);
    int *cont3 = dd(cont2);
    int *cont4 = dd(cont3);

    ft_lstadd_back(&lst, ft_lstnew(cont2));
    ft_lstadd_back(&lst, ft_lstnew(cont3));
    ft_lstadd_back(&lst, ft_lstnew(cont4));

    ft_lstprint(lst);

	ft_lstclear(&lst, free);

    return 0;
}