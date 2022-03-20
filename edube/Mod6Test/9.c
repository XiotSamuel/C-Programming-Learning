#include <stdio.h>

int f(int t[])
{
    printf("%d\n", t[2]);
    return t[0] + t[2];
}

int main(void)
{
    int i, a[] = {-2, -1, 0, 1, 2};
    i = f(a + 2);
    printf("%d", i);
    return 0;
}