#include <stdio.h>

int main(void)
{
    int i = -3, j = 0;
    for (i++; i++; i++)
        j--;
    printf("%d", i - j);
    return 0;
}