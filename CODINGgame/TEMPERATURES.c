#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>


int main()
{
	int n;
	scanf("%d", &n);

	int tab[n];
	for (int i = 0; i < n; i++) 
	{
		int t;
		scanf("%d", &t);
		tab[i] = t;
	}

	if (n < 1)
	{
		printf("0\n");
		return 0;
	}

	int result = tab[0];

	for (int i = 0; i < (n - 1); i++)
	{
		if (abs (tab[i]) < abs (result))
			{
				result = tab[i];
			}

		else if ((tab[i] * -1) == result)
			result = abs (result);
	}

	printf("%d\n", result);

	return 0;
}