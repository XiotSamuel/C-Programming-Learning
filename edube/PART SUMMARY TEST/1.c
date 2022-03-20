#include <stdio.h>

int fun()
{
    int a;
    return ++a;
}

int main()
{
    printf("%d", fun());
    return 0;
}