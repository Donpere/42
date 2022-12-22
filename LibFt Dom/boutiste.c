#include <stdio.h>


int main(void)
{
    unsigned short n = 1;
    unsigned char *p = (unsigned char *)&n;

    if (*p != 0)
        printf("Je suis petit-boutiste.\n");
    else
        printf("Je suis gros-boutiste.\n");

    return 0;
}