#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;

} t_list;

t_list *ft_lstnew(void *content)
{
	t_list *new;

	new = malloc(sizeof(t_list));
	if(!new)
	{
		printf("Malloc error in ft_lstnew !");
		return(NULL);
	}
	new->content = content;
	new->next = NULL;
	
	return(new);
}

int main()
{
	t_list *lst;
	int nb = 42;

	lst = ft_lstnew((void*)&nb);
	printf("%d\n", *((int*)lst->content));
	return (0);
}
