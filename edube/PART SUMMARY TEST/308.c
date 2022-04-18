#include <stdio.h>

int main(void)
{
    int i = 5, j = 16;
    printf("here");
    while (j >= 0)
    {
        i /= 2;
        j -= i / 2;
        printf("i am here\n");
    }
    printf("here");
    printf("%d", i + j);
    return 0;
}