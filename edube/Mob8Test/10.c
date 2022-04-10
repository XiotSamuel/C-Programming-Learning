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
    return 0;
}