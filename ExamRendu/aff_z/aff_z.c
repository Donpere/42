#include <unistd.h>

void aff_z(void)
{
	write(1, "z", 1);
	write(1, "\n", 1);
}

int main()
{
	aff_z();
	return 0;
}