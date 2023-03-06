// code pour inverser la liste (elle-même) :

void	ft_list_reverse(t_list **list)
{
	t_list *tmp;
	t_list *next;

        next = NULL;
	while (*list)
	{
		tmp = (*list)->next;
		(*list)->next = next;
		next = *list;
		*list = tmp;
	}
	*list = next;
}