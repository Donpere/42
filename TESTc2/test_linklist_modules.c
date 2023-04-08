/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_linklist_modules.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <domarion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:52:10 by domarion          #+#    #+#             */
/*   Updated: 2023/04/07 18:00:13 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

// create a new linked list by applying a given function 
// to every node of an existing linked list
// RETURN : pointer on the new list
// if lstnew fail -> while clear the new list & return NULL

typedef struct s_list
{
	void *content;
	struct s_list *next;
}	t_list;


// VARIOUS TOOLS
////////////////////////////////////////////////////////////////////////

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// MOVE TOOLS
////////////////////////////////////////////////////////////////////////

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

t_list *ft_chooseNode(t_list *lst, int nb)
{
    int i;
    t_list *node;

    i = 1;
    node = lst;
    if (!lst || nb < 1)
        return (NULL);
    while (i < nb && node)
    {
        node = node->next;
        i++;
    }
    return (node);
}


// AUTOMATIZE TOOLS
////////////////////////////////////////////////////////////////////////

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}	
}

// NODES BUILDER
////////////////////////////////////////////////////////////////////////

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

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	new->next = *lst;
	*lst = new;
}

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

// CLEAN TOOLS
////////////////////////////////////////////////////////////////////////

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

void	ft_clear_nomalloc(t_list **lst)
{
		t_list	*a;

	if (!lst)
		return ;
	while (*lst)
	{
		a = (*lst)->next;
		free(*lst);
		*lst = a;
	}
	*lst = NULL;
}

// COPY LIST
////////////////////////////////////////////////////////////////////////

// void *addthree(char *str)
// {
// 	int i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		str[i] = str[i] + 3;
// 		i++;
// 	}
// 	return (str);
// }

// CORRECTION

void *addthree(void *str)
{
	char *s;
	int i;

	s = (char *)str;
	i = 0;
	while (s[i] != '\0')
	{
		s[i] = s[i] + 3;
		i++;
	}
	return (s);
}


t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*temp_new_lst;

	if (!lst || !f)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		temp_new_lst = ft_lstnew(f(lst->content));
		if (!temp_new_lst)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, temp_new_lst);
		lst = lst->next;
	}
	return (new_lst);
}

// PRINT LIST TOOLS
////////////////////////////////////////////////////////////////////////

void ft_lstprint_int(t_list **lst)
{
	int i = 1;
	t_list *a;
	a = *lst;
	while(a)
	{
		printf("node %d content : %d\n", i, *(int *)(a->content));
		a = a->next;
		i++;
	}
}

void	ft_lstprint_str(t_list *lst)
{
	int i = 1;
	t_list *current;

	if (!lst)
		return ;
	current = lst;
	while (current)
	{
		printf("block %d : %s\n", i, (char*)current->content);
		current = current->next;
		i++;
	}
}

// MAIN
////////////////////////////////////////////////////////////////////////

int main()
{
	int a = 11;
	int b = 22;
	int c = 33;
	int d = 44;
	char ca = 'a';
	char cb = 'b';
	char cc = 'c';
	char cd = 'd';
	
	char *stra = malloc(sizeof(char) * 50);
		char *strb = malloc(sizeof(char) * 50);
			char *strc = malloc(sizeof(char) * 50);
				char *strd = malloc(sizeof(char) * 50);
	stra[0] = 'a';
		stra[1] = 'a';
			stra[2] = 'a';
				stra[3] = '\0';
				
	strb[0] = 'b';
		strb[1] = 'b';
			strb[2] = 'b';
				strb[3] = '\0';
				
	strc[0] = 'c';
		strc[1] = 'c';
			strc[2] = 'c';
				strc[3] = '\0';

	strd[0] = 'd';
		strd[1] = 'd';
			strd[2] = 'd';
				strd[3] = '\0';
	
	t_list *lst;
	t_list *current;
	t_list *node;
	
	lst = ft_lstnew(&a); 						// point d'entree. Chaine : 11

		ft_lstadd_back(&lst, ft_lstnew(&b));	// second bloc derriere. Chaine : 11, 22
			ft_lstadd_front(&lst, ft_lstnew(&c));		// troisieme noeud devant. chaine : 33, 11, 22 
				ft_lstadd_front(&lst, ft_lstnew(&d));	// troisieme noeud devant. chaine : 44, 33, 11, 22
	
	node = ft_chooseNode(lst, 3); // recuperation de l'adresse du 3eme noeud
	
	printf("Content int of 3th node : %d\n", (*(int *)(node->content))); // affichage du contenu du 2eme noeud, donc 11
	
	node = ft_chooseNode(lst, 2); // recuperation de l'adresse du 2eme noeud
	
	printf("Content int of 3th node : %d\n", (*(int *)(node->content))); // affichage du contenu du 2eme noeud, donc 33

	ft_lstprint_int(&lst);

	ft_clear_nomalloc(&lst);

	lst = ft_lstnew(stra); 						// point d'entree. Chaine : aaa

		ft_lstadd_back(&lst, ft_lstnew(strb));	// second bloc derriere. Chaine : 11, 22
			ft_lstadd_front(&lst, ft_lstnew(strc));		// troisieme noeud devant. chaine : 33, 11, 22 
				ft_lstadd_front(&lst, ft_lstnew(strd));	// troisieme noeud devant. chaine : 44, 33, 11, 22
	
	printf("\n");
		printf("lst\n");
	ft_lstprint_str(lst);

	t_list *lstTwo;
	lstTwo = ft_lstmap(lst, addthree, free);

	printf("\n");
		printf("lstTwo whith addThree applyed\n");

	ft_lstprint_str(lstTwo);
	
	ft_lstclear(&lst, free);
//	ft_lstclear(&lstTwo, free);
	ft_clear_nomalloc(&lstTwo);

	return (0);
}
