// #include <stdio.h>


// int main(void)
// {
//     int i;

//     for (i = 0; i < 5; ++i)
//         printf("la variable i vaut %d\n", i);

//     printf("i = %d\n", i); /* Ok */
//     return 0;
// }

#include <string.h>
#include <sys/types.h>
#include <stdio.h>

//size_t strlcpy(char *dst, const char *src, size_t size)
int main()
{
    size_t i;
    size_t size = 8;
    char src [] = "Salut !";
    char dst [9];

    for (i = 0; i < size - 1 && src[i] != '\0'; i++)
        dst[i] = src[i];

    dst[i] = '\0';

printf("i = %ld", i);
    while (src[i])
        i++;
printf("i = %ld", i);

    return 0;
}