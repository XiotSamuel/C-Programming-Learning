#include <stdio.h>

int main(void)
{
    int i = 4, j = 1;
    while (j > 0)
    {
        i /= 2;
        printf("%d", i);
    }
    printf("%d", i + j);
    return 0;
}