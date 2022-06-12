#include <stdio.h>

struct S
{
    int S[2];
};

void f(struct S S)
{
    S.S[0] = S.S[1] + 4;
    printf("S.S[1]: %d\n", S.S[1]);
    printf("S.S[0]: %d\n", S.S[0]);
}

int main(void)
{
    struct S S = {{4, 8}};
    f(S);
    printf("S.S[1]: %d\n", S.S[1]);
    printf("S.S[0]: %d\n", S.S[0]);
    printf("%d", S.S[1] / S.S[0]);
    return 0;
}