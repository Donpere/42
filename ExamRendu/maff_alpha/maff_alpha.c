#include <unistd.h>

void maff_alpha(void)
{
	write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ", 26);
	write(1, "\n", 1);
}

int main()
{
	maff_alpha();
	return 0;
}