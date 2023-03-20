#include "libMath.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int nb;
	if (argc < 2)
		return -1;
	printf("%s\n", argv[1]);
	nb = doub(ft_atoi(argv[1]));

	printf("%d\n", nb);


	return (0);
}
