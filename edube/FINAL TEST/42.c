#include <stdio.h>

int main(void)
{
    int i = 16, j = 8;
    while (j > 0)
    {
        i /= 2;
        j -= i / 2;
        printf("i: %d ", i);
        printf("j: %d\n", j);
    }
    printf("%d\n", i + j);
    return 0;
}