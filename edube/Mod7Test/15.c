#include <stdio.h>

int i = 0;

int *f(int *i)
{
    (*i)++;
    return i;
}

int main(void)
{
    int i = 1;
    i = *f(&i);
    printf("%d", i);
    return 0;
}