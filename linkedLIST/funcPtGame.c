#include <stdlib.h>
#include <stdio.h>

typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

t_list *ft_lstnew(void *content)
{
	t_list *new;

	new = malloc(sizeof(t_list));
	if(!new)
		return(NULL);
	new->content = content;
	new->next = NULL;

	return(new);
}

t_list *ft_lstLast(t_list *lst)
{
	while(lst->next != NULL)
		lst = lst->next;
	return(lst);
}

t_list *ft_lstAddLast(t_list *lst, void *content)
{
	t_list *newLast = NULL;
	newLast = malloc(sizeof(t_list));
	if(!newLast)
		return(NULL);
	lst = ft_lstLast(lst);
	newLast->content = content;
	newLast->next = NULL;
	lst->next = newLast;
	return(newLast);
}

int ft_lstprint(t_list *lst)
{
	while(lst->content)
	{
		printf("%d\n", *((int*)lst->content));
		if(lst->next == NULL)
			return 0;
		lst = lst->next;
	}
}

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	//del(lst->content);
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

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	t_list *lst;
	int a = 42;
		int b = 21;
			int c = 11;
				int d = 66;
	lst = NULL;
	lst = ft_lstnew((void *)&a);
	ft_lstAddLast(lst, (void *)&b);
		ft_lstAddLast(lst, (void *)&c);
				ft_lstAddLast(lst, (void *)&d);

	ft_lstprint(lst);

ft_lstclear(&lst, (void (*)(void *))free);
	return 0;
}