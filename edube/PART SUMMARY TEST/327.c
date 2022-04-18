#include <stdio.h>

int main(void)
{
    int i = 1, j;
    for (j = 0; j; j--)
    {
        i *= 2;
        printf("loop i: %d\n", i);
    }
    printf("i: %d\n", i);
    printf("j: %d\n", j);
    printf("i+j: %d", i + j);
    return 0;
}