#include <stdio.h>
#include <stdlib.h>

int add(int x)
{
    static int sum;
    sum += x;
    return (sum);
}

int  main(void)
{
    printf("%d\n", add(5));
    printf("%d\n", add(5));
    printf("%d\n", add(6));
    printf("%d\n", add(5));
    printf("%d\n", add(10));
    return (0);
}