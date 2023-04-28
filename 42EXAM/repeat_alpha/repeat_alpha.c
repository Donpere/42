#include <unistd.h>
#include <stdio.h>

void repeat_maj(char c)
{
	int i;

	i =(int)c - 64;
	while (i > 0)
	{
		write(1, &c, 1);
		i--;
	}
}

void repeat_min(char c)
{
	int i;

	i =(int)c - 96;
	while (i > 0)
	{
		write(1, &c, 1);
		i--;
	}
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
			repeat_maj(argv[1][i]);
		else if (argv[1][i] >= 97 && argv[1][i] <= 122)
		 	repeat_min(argv[1][i]);
		else
			write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
return (0);
}