#include <stdio.h>

int main(void)
{
    int i = -3, j = 0;
    for (i++; i++; i++)
    {
        printf("i: %d\n", i);
        printf("j: %d\n", j);
        j--;
    }
    printf("i: %d\n", i);
    printf("j: %d\n", j);
    printf("%d", i - j);
    return 0;
}