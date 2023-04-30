/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_linklist_modules.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <domarion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:52:10 by domarion          #+#    #+#             */
/*   Updated: 2023/04/13 11:38:12 by domarion         ###   ########.fr       */
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

int ft_strlen(void *str)
{
    int i;

    i = 0;
    while (((char*)str)[i] != '\0')
        i++;
    return (i);
}

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

// AUTOMATIZE TOOLS
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

// void *addthree(void *str)
// {
// 	char *s;
// 	int i;

// 	s = (char *)str;
// 	i = 0;
// 	while (s[i] != '\0')
// 	{
// 		s[i] = s[i] + 3;
// 		i++;
// 	}
// 	return (s);
// }

// NOUVELLE CORRECTION IL SEMBLE QUE LA VERSION PRECEDENTE MODIFIE LA CHAINE ORIGINALE

void *addthree(void *str)
{
    char *s;
    int i;
    char *newstr;

    s = (char *)str;
    newstr = malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (!newstr)
        return (NULL);
    i = 0;
    while (s[i] != '\0')
    {
        newstr[i] = s[i] + 3;
        i++;
    }
    newstr[i] = '\0';
    return (newstr);
}

void addthreeVoid(void *str)
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
}

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
	// int & char initialized, ready to use for list's content
	int a = 11;
	int b = 22;
	int c = 33;
	int d = 44;
	char ca = 'a';
	char cb = 'b';
	char cc = 'c';
	char cd = 'd';

	// int for store size of the list
	int lstsize = 0;
	
	// malloc & initialized of strings ready to put in contents
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
	
	// pointers for lst and tmp pointers
	t_list *lst;
	t_list *current;
	t_list *node;
	
	// building of a list "lst"
	lst = ft_lstnew(&a); 						// entry point, content int : 11

		ft_lstadd_back(&lst, ft_lstnew(&b));			// second node behind, chain is		: 11, 22
			ft_lstadd_front(&lst, ft_lstnew(&c));		// third node, before, chain is		: 33, 11, 22 
				ft_lstadd_front(&lst, ft_lstnew(&d));	// fourth node, before, chain is	: 44, 33, 11, 22
	
	node = ft_chooseNode(lst, 3); // chooseNode used to the adress of node specified, here the third one
	
	printf("Content int of 3th node : %d\n", (*(int *)(node->content))); // print the third node's content, adress stored in node : 11
	
	node = ft_chooseNode(lst, 2); // same thing for the second one
	
	printf("Content int of 2th node : %d\n", (*(int *)(node->content))); // print 2nd node's content : 33

	// print all the list, when contents are int
	ft_lstprint_int(&lst);

	// free all nodes of the list, when no malloc used for contents
	ft_clear_nomalloc(&lst);
	
	// building of a new list whith strings

	lst = ft_lstnew(stra); 								// entry point, chain is : aaa

		ft_lstadd_back(&lst, ft_lstnew(strb));			// 2nd node after the last node, chain is : aaa, bbb
			ft_lstadd_front(&lst, ft_lstnew(strc));		// third node before the first node, chain is : ccc, aaa, bbb 
				ft_lstadd_front(&lst, ft_lstnew(strd));	// fourth node before the first node, chain is : ddd, ccc, aaa, bbb 
	
	// print the list with strings
	printf("\n");
		printf("lst\n");
	ft_lstprint_str(lst);

// lstmap
//////////////////////////////////////////////////////////////
	printf("\n");

	printf("use lstmap\n");

	// initialize a pointer for the new list, build with a copy of lst, called here lstTwo,
	// with contents modified (or not) by the function sent to lstmap, here "addthree"

	t_list *lstTwo;
	lstTwo = ft_lstmap(lst, addthree, free);
	
	printf("\n");
	printf("lst\n");
	ft_lstprint_str(lst);

	printf("size lst : %d\n", ft_lstsize(lst));
	printf("size lstTwo : %d\n\n", ft_lstsize(lstTwo));
	
	printf("\n");
		printf("lstTwo whith addThree applyed by lstmap\n");

	ft_lstprint_str(lstTwo);

// lstiter
//////////////////////////////////////////////////////////////

	// lstiter automatize the applying of a function on contents
	// here addthreeVoid that add 3 to the ascii of each char
	
	printf("\n");
	printf("lst\n");
	ft_lstprint_str(lst);

	ft_lstiter(lst, addthreeVoid);

	printf("\n");
		printf("lst whith addThree applyed by lstiter\n");
	ft_lstprint_str(lst);

	// clear the contents & the nodes of lst
	ft_lstclear(&lst, free);
	
	// same for lstTwo
	ft_lstclear(&lstTwo, free);

	return (0);
}
