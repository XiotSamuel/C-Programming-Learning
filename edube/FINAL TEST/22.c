#include <stdio.h>

struct S
{
    int S[2];
};

void f(struct S *S)
{
    S->S[1] = S->S[0] + 2;
};

int main(void)
{
    struct S S = {{4, 8}}, *P = &S;
    f(P);
    printf("S.S[0] %d\n", S.S[0]);
    printf("S.S[1] %d\n", S.S[1]);
    printf("%d\n", S.S[1] / S.S[0]);
    return 0;
}