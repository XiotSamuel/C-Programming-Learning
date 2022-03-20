#include <stdio.h>

int fun(int a)
{
    int b = 1;
    return a << b;
}

int main()
{
    int x;
    scanf("%d", &x);

    printf("%d", fun(x));
    return 0;
}