#include <stdio.h>

int fun(int a)
{
    printf("a: %d\n", a);
    return a + 1;
}

int main()
{
    int a = 0;
    fun(1);
    printf("%d", a);
}