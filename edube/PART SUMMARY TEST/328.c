#include <stdio.h>

int main(void)
{
    float a = 3.14E0, *b = &a, **c = &b;

    printf("a: %f\n", a);
    printf("b: %f\n", b);
    printf("c: %f\n", c);

    **c = a + (a == *b);
    printf("result a: %f\n", a);
    printf("result c: %f\n", **c);
    return 0;
}