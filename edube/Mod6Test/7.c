#include <stdio.h>

int f(int t[2][])
{
    return t[0][0] + t[1][0];
}

int main(void)
{
    int i, a[2][2] = {{-2, -1}, {1, 2}};
    i = f(a + 2);
    printf("%d", i);
    return 0;
}