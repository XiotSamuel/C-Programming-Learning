#include <stdio.h>

int main(void)
{
    int i = 7, j = i - i;

    printf("%d\n", !i);
    while (!i)
    {
        i /= 2;
        j++;
    }
    printf("%d", j);
    return 0;
}