#include <stdio.h>

int main(void)
{
    int i = 5, j = 4; // int i=0;i<10;i++
    printf("init i: %d\n", i);
    printf("init j: %d\n", j);
    for (i--; i--; printf("3 i: %d\n", i--))
    {
        printf("i: %d\n", i);
        j--;
        printf("j: %d\n", j);
    }
    printf("i: %d\n", i);
    printf("j: %d\n", j);
    printf("%d", i + j);
    return 0;
}