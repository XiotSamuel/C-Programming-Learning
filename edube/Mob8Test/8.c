#include <stdio.h>

<<<<<<< HEAD
int main(void)
{
#undef X
    int X = 1;
    int Y = X - 2;
#define X -2
    printf("%d", Y + X);
=======
int vr = 10;

int fun1(int param)
{
    int vr;

    vr = 2;
    return vr + param;
}

int fun2(int param)
{
    vr += param;
    return param + 1;
}

int main(void)
{
    int s;
    vr /= 2;
    s = fun1(vr) + fun2(vr);
    printf("%d", s);
>>>>>>> fded0d502c65e5a2e5621f3c93ae31a085e9df0f
    return 0;
}