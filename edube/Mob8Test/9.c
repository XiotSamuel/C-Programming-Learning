#include <stdio.h>
<<<<<<< HEAD
#define A(x) #x

int main(void)
{
    int i = -1;
    char *s = A(i);

    i = -(s[0] == 'i');

    printf("%d", i);
=======

int vr = 10;

int fun1(int param)
{
    static int vr = 1;
    vr++;
    return vr + param;
}

int main(void)
{
    printf("%d", fun1(1) + fun1(1));
>>>>>>> fded0d502c65e5a2e5621f3c93ae31a085e9df0f
    return 0;
}