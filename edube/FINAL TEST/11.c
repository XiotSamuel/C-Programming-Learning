#include <stdio.h>

int main(void)
{
    int i = 2, j;
    for (j = 0; j < 0; j -= i)
    {
        printf("i: %d\n", i);
        printf("j: %d\n", j);
        i /= 2;
    }

    printf("%d", i + j);
    return 0;
}