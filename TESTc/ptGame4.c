#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

t_list *ft_lstnew(void *content)
{
	t_list *new;
	
	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

t_list *ft_lstlast(t_list *lst)
{
	while (lst && lst->next != NULL)
		lst = lst->next;
	return (lst);
}

void ft_addlast(t_list **lst, void *content)
{
	if (!lst)
		return;
	t_list *lastNew;

	lastNew = ft_lstnew(content);

	if (!lastNew)
		return;
	if (!*lst)
		*lst = lastNew;
	else
		ft_lstlast(*lst)->next = lastNew;
}

int main(int argc, char **argv)
{
	t_list *lst = NULL;
	t_list *current;
	int i = 1;
	if (argc < 1)
		return 1;
	while(i < argc)
	{
		ft_addlast(&lst, argv[i]);
		i++;
	}
	current = lst;
	while (current)
	{
		printf("%s\n", (char*)current->content);
		current = current->next;
	}
	return 0;
}
