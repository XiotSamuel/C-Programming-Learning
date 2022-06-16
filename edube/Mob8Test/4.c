#include <stdio.h>
int X = 0;

#define X 100;

int fun1(void)
{
    return X;
}

#undef X
int fun2(void)
{
    return X;
}

int main(void)
{
    int s;
    s = fun1() + fun2();
    printf("%d", s);
    return 0;
}