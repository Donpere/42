#include <stdio.h>

int main()
{
	int *a;
	
	printf("pt a = %d\n", *(void*)42);
	printf("pt a = %p", a);

	return 0;
}