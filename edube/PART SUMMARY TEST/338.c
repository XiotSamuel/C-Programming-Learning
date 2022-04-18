#include <stdio.h>

int main(void)
{
    int i = -1, j = 1;
    for (i++; i++; i++)
    {
        printf("loop: %d\n", j);
        j++;
    }
    printf("%d", i + j);
    return 0;
}