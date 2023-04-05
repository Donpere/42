#include <stdio.h>

int main()
{
    int a = 12;
    int *b = &a;
    int **c = &b;
 
    printf("c : %p\n", (void*)&c);
    printf("*c : %p\n", (void*)c);
    printf("**c : %p\n", (void*)*c);
    
    c = NULL;
    
    printf("**c : %p\n", (void*)*c);
        
    // printf("*b : %p\n", (void*)*b);
    
    // printf("c[0][0] : %p\n", (void*)c[0][0]);
    // printf("c[0][1] : %p\n", (void*)c[0][1]);
    // printf("c[1][0] : %p\n", (void*)c[1][0]);
    // printf("c[1][1] : %p\n", (void*)c[1][1]);
    
    // printf("(c[0][0])+1 : %p\n", ((void*)c[0][0])+1);
    
    // printf("c[3][3] : %p\n", (void*)c[3][3]);
    
    // printf("c[0][3] : %p\n", (void*)c[0][3]);
    
    // printf("c[0][2] : %p\n", (void*)c[0][2]);
    
    return 0;
}