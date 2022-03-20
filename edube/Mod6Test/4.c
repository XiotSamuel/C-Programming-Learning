#include <stdio.h>

struct Q
{
    int a, b, c;
};

struct S
{
    int a, b, c;
    struct Q Q;
};

int main(void)
{
    struct Q Q = {3, 2, 1};
    struct S S = {4, 5, 6};
    S.Q = Q;
    printf("S.Q: %d\n", S.Q);
    printf("S.Q.b: %d\n", S.Q.b);
    printf("S.b: %d\n", S.b);
    printf("result  %d\n", S.b - S.Q.b);
    return 0;
}