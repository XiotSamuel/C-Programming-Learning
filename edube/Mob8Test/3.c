#include <stdio.h>
<<<<<<< HEAD
#define ALPHA -1 - 2

int main(void)
{
    int i = -1;
    i = i * ALPHA;

    printf("%d", i);
=======

int main(void)
{
    int X = 200;
    int a = X;
    a += X;

#define X 200
    a += X;

#undef X
    printf("%d", a);
>>>>>>> fded0d502c65e5a2e5621f3c93ae31a085e9df0f
    return 0;
}