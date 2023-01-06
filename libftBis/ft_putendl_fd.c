
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (fd < 1 || !s)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
/*
int	main(void)
{
	ft_putendl_fd("hello les loulous", 1);
	return (0);
}
*/
