#include <stdlib.h>
#include <unistd.h>


typedef struct s_list
{
	void            *content;
	struct s_list   *next;
} t_list;

/////////////////////////////////////

void ft_putchar(char c)
{
	write(1, &c, 1);
}


void ft_putstr(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	write(1, "\n", 1);
}

void       print_string(void *content)
{
		ft_putstr((char *)content);
}

/////////////////////////////////////

t_list    *ft_lstnew(void *content)
{
	t_list    *new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

void    ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	new->next = *lst;
	*lst = new;
}

/////////////////////////////////////


void    ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
//    del(lst->content); les content n'etant pas malloc, pas de free a faire
	free(lst);
}


void    ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list    *a;

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

void    ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
//Par exemple, si vous avez une liste chaînée qui contient des chaînes de caractères, 
//vous pouvez utiliser ft_lstiter pour afficher chaque chaîne à l'écran :


int     main(void)
{
		t_list  *list;

		list = ft_lstnew("Hello");
		ft_lstadd_front(&list, ft_lstnew("world"));
		ft_lstiter(list, print_string);
		ft_lstclear(&list, free);
		return (0);
}