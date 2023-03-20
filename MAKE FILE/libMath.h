#ifndef LIB_MATH
# define LIB_MATH

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}t_list;

int doub(int nb);
int ft_atoi(const char *nptr);




#endif