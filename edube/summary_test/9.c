#include <stdio.h>

int main(void)
{
    int i = -1, j = 1;
    for (i++; i++; i++)
    {
        j++;
        printf("lala");
    }

    printf("%d", i);
    printf("%d", j);
    printf("%d", i + j);
    return 0;
}