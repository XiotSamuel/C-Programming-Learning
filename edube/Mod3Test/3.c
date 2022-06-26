#include <stdio.h>

int main(void)
{
    int i = 1, j = 2;
    for (;;)
    {
        i *= 3;
        printf("%d\n", i);
        j++;
        printf("%d\n", j);
        if (i > 30)
            break;
    }
    printf("%d", j);
    return 0;
}