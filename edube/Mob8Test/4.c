#include <stdio.h>
<<<<<<< HEAD
#define X 1
#define Y 2

int main(void)
{
    int i =

#if X << Y > 0
        -X
#else
        -Y
#endif
        ;

    printf("%d", i);
=======
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
>>>>>>> fded0d502c65e5a2e5621f3c93ae31a085e9df0f
    return 0;
}