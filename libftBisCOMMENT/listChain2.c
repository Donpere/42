#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;

size_t	ft_strlen(const char *s)
{
	size_t	t;

	t = 0;
	while (s[t] != '\0')
		t++;
	return (t);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

t_list  *ft_lstnew(void *content)
{
    t_list  *new;

    new = (t_list *)malloc(sizeof(t_list));
    if (!new)
        return (NULL);
    new->content = content;
    new->next = NULL;
    return (new);
}

t_list  *ft_lstlast(t_list *lst)
{
    if (lst == NULL)
        return (NULL);
    while (lst->next)
        lst = lst->next;
    return (lst);
}

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *a;

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

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst != NULL)
	{
		if (del != NULL && lst->content != NULL)
	      	(del)(lst->content);
		free(lst);
	}
}


void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}

int     main(void)
{
    t_list  *lst = NULL;
    char *a, *b, *c;
    a = malloc(sizeof(char) * 1000);
    b = malloc(sizeof(char) * 1000);
    c = malloc(sizeof(char) * 1000);
    
ft_strlcpy(a, "bab", 4);
ft_strlcpy(b, "lol", 4);
ft_strlcpy(c, "ici", 4);

    lst = ft_lstnew(a);
    printf("%s\n",(char *)lst->content);

    ft_lstadd_back(&lst, ft_lstnew(b));
    ft_lstadd_back(&lst, ft_lstnew(c));

    // Parcours de la liste et affichage de chaque élément
    t_list *curr = lst;
    while (curr != NULL)
    {
        printf("%s\n", (char *)curr->content);
        curr = curr->next;
    }

    // Libération de la mémoire allouée pour la liste
    ft_lstclear(&lst, free);

curr = lst;
    while (curr != NULL)
    {
        printf("%s\n", (char *)curr->content);
        curr = curr->next;
    }

    return (0);
}
