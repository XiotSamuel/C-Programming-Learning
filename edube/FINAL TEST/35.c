#include <stdio.h>

int f(int t[][2])
{
    return t[0][0] + t[0][1];
}

int main(void)
{
    int i, t[2][2] = {{0, 4}, {4, 2}};
    i = f(t);
    printf("%d", i);
    return 0;
}