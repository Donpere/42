#include <stddef.h>
#include <stdio.h>


static void affiche_pair(int a)
{
    printf("%d est pair.\n", a);
}


static void affiche_impair(int a)
{
    printf("%d est impair.\n", a);
}

/////////////////////////////

static void (*affiche(int a))(int)
{
    if (a % 2 == 0)
        return &affiche_pair;
    else
        return &affiche_impair;
}

////////////////////////////
    
int ft_atoi(const char *nptr)
{
	int i;
	int rslt;
	int neg;

	i = 0;
	rslt = 0;
	neg = 1;
	while(nptr[i] == ' ' || (nptr[i]) >= 9 && nptr[i] <= 13)
		i++;
	while(nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			neg = -neg;
		i++;
	}
	while (nptr[i] != '\0' && nptr[i] >= '0' && nptr[i] <= '9')
	{
		rslt = rslt * 10 + nptr[i] -48;
		i++;
	}
	return (rslt * neg);
}

int main(int argc, char **argv)
{
	if(argc <= 0 || argc >= 3)
	{
		printf("enter good data");
		return(1);
	}
    void (*pf)(int);
    int a;

	a = ft_atoi(argv[1]);
    pf = affiche(a);
    (*pf)(a);
    return 0;
}