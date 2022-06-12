#include <stdio.h>

int main(void)
{
    int i, t[4];
    for (i = 3; i; i--)
    {
        printf("i: %d\n", i);
        t[i] = i - 1;
        t[t[i]] = t[i];
        printf("t[%d]: %d\n", i, t[i]);
        printf("t[t[%d]]: %d\n", i, t[t[i]]);
    }
    printf("t[0]: %d\n", t[0]);
    return 0;
}