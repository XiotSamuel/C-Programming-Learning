#include <stdio.h>
int main(void)
{
    int t[5] = {1, 2, 3, 4, 5};
    int *p1, *p2, s = 1;
    p1 = &t[0];
    printf("p1: %p\n", p1);
    p2 = &t[4];
    printf("p2: %p\n", p2);
    s += *p1 + *p2;
    printf("*p1: %d\n", *p1);
    printf("*p2: %d\n", *p2);
    printf("s: %d\n", s);
    return 0;
}