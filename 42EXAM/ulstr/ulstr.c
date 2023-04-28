#include <unistd.h>
#include <stdio.h>

void down_maj(char c)
{
	char down = c + 32;
	write(1, &down, 1);
}

void up_min(char c)
{
	char up = c - 32;
	write(1, &up, 1);
}

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc < 2 || argc >2)
	{
		write(1, "\n", 1);
		return (1);
	}
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	while (argv[1][i])
	{
		if (argv[1][i] >= 65 && argv[1][i] <= 90)
			down_maj(argv[1][i]);
		else if (argv[1][i] >= 97 && argv[1][i] <= 122)
		 	up_min(argv[1][i]);
		else
			write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
return (0);
}