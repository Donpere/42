#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void search_and_replace(char *str, char find, char replace)
{
    int i = 0;
    int found = 0;

    while (str[i] != '\0')
    {
        if (str[i] == find)
        {
            str[i] = replace;
            found = 1;
        }
        i++;
    }

    if (found)
    {
        while (*str != '\0')
        {
            write(1, str, 1);
            str++;
        }
        write(1, "\n", 1);
    }
    else
    {
        write(1, str, ft_strlen(str));
        write(1, "\n", 1);
    }
}

int main(int argc, char **argv)
{
  	if (argc == 4 && ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1)
    {
        search_and_replace(argv[1], argv[2][0], argv[3][0]);
    }

    else
    {
        write(1, "\n", 1);
    }
    return 0;
}
