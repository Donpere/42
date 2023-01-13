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

//fonctions cell
t_list *emptyCell(void);
t_list *createCell(int);

t_list *addCell(t_list *, int, int);
t_list *freeCell(t_list *, int);

// fonctions test
int isListEmpty(t_list*);

// fonctions print
void printList(t_list *);



#endif