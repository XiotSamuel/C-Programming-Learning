#include <stdio.h>
int main(void)
{
    int i, t[5];
    for (i = 0; i < 5; i++)
    {
        t[i] = 2 * i;
        printf("value of i %d\n", i);
        printf("value of t[i] %d\n", t[i]);
    }
    i = 0;
    for (i = 0; i < 5; i++)
    {
        i += t[i];
        printf("sec loop %d\n", i);
        printf("sec loop value of t[%d] %d\n", i, t[i]);
    }
    printf("%d", i);
    return 0;
}