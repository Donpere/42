#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main()
{
t_list MyList = newList();
char str[] = "Liste vide.";

if (isListEmpty(MyList))
	ft_putstr(str);

return 0;
}
