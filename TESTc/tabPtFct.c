#include <stdio.h>

int len_tab_pt(int (*math_functions[])(int, int)) 
{
    int i = 0;
    while (math_functions[i] != NULL) {
        i++;
    }
    return (i);
}


int add(int a, int b) 
{
	return a + b;
}

int sub(int a, int b) 
{
	return a - b;
}

int mult(int a, int b) 
{
	return a * b;
}

int div(int a, int b) 
{
	if (b == 0) 
	{
		printf("Error: Division by zero\n");
		return 0;
	} 
	else 
	{
		return a / b;
	}
}

int addSq(int a, int b) 
{
	return a * a + b * b;
}

int multAdd(int a, int b) 
{
	return (a + b) * (a + b);
}

int main() 
{
	int (*math_functions[7])(int, int) = {add, sub, mult, div, addSq, multAdd, NULL};
  
	int a = 10;
	int b = 5;
	int i = 0;
	int len = 0;

	len = len_tab_pt(math_functions);

	printf("how many functions : %d\n", len);

	while (i < len) 
	{
		int result = math_functions[i](a, b);
		printf("Result of function %d: %d\n", i+1, result);
		i++;
  	}

	printf("%d\n", math_functions[0](a, b));
	printf("%d\n", math_functions[2](a, b));
	
  
	return 0;
}
