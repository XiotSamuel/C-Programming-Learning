<<<<<<< HEAD
// #include <stdio.h>
// #define A(x) ((x) ? -1 : 0)
// #define B(a) !(a)

// int main(void)
// {
//     int i = 2;
//     int i2 = A(B(i));

//     printf("%d", i2);
//     return 0;
// }

#include <stdio.h>
#define B
#define C

int main(void)
{
    int i =
#ifdef A
#ifdef C
        -1
#else
        -2
#endif
#else
        -3
#endif
        ;

    printf("%d", i);
=======
#include <stdio.h>

int vr = 10;

int fun1(int param)
{
    int vr = 1;
    vr++;
    return vr + param;
}

int main(void)
{
    printf("%d", fun1(1) + fun1(1));
>>>>>>> fded0d502c65e5a2e5621f3c93ae31a085e9df0f
    return 0;
}