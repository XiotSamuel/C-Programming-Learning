#include <stdio.h>

int fun(int a = 1)
{
    return a;
}

int main()
{
    printf("%d", fun(2));
}