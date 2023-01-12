#ifndef LIST_H
# define LIST_H

typedef struct s_list
{
	int data;
	struct s_list *next;
} t_list;

//fonctions print
void	ft_putchar(char);
void	ft_putstr(char *);
void	ft_putnbr(int);

//fonctions linked list
t_list *creatCell(void);
int isListEmpty(t_list*);



#endif