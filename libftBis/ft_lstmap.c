
#include "libft.h"

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
