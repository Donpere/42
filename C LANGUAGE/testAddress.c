#include <stdio.h>
#include <stdlib.h>

int main()
{
	int len = 20;
	int a = 7;
		int b = 7;
			int c = 0;
				int d = 2;
					int e = 8;
						int f = 6;
printf("add a : %p\n add b : %p\n add c : %p\n add d : %p\n add e : %p\nadd f : %p\n", &a, &b, &c, &d, &e, &f);

int *AA = NULL;
int *BB = NULL;
int *CC = NULL;
int *DD = NULL;
int *EE = NULL;
int *FF = NULL;

	AA = malloc(sizeof(int)*len);
		BB = malloc(sizeof(int)*len);
			CC = malloc(sizeof(int)*len);
				DD = malloc(sizeof(int)*len);
					EE = malloc(sizeof(int)*len);
						FF = malloc(sizeof(int)*len);

printf("\n\n");    
printf("add AA : %p\n add BB : %p\n add CC : %p\n add DD : %p\n add EE : %p\nadd FF : %p\n", &AA, &BB, &CC, &DD, &EE, &FF);

int i = 0;
while(i <= len+10)
	{
	CC[i] = 5;
	i++; 
	}

int j = 0;
while(j <= len+10)
	{
	printf("CC[%d] = %d", j, CC[j]);
	j++; 
	}

	if (AA || BB|| CC || DD || EE || FF == NULL) // On vérifie si la mémoire a été allouée
	{
		exit(0);
	}


int *tabP[6];

tabP[0] = AA;
tabP[1] = BB;
tabP[2] = CC;
tabP[3] = DD;
tabP[4] = EE;
tabP[5] = FF;


int k = 0;
while(k <= 6)
	{
	free(tabP[k]);
	k++; 
	}
	return 0;
}