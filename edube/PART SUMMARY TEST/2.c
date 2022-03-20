#include <stdio.h>

int main(void)
{
    int a, b, c;

    a = -1;
    b = 2;

    if (a)
        a--;

    if (b)
        b++;

    c = a * b;

    printf("%d", c);

    return 0;
}