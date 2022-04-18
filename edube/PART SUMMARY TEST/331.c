#include <stdio.h>
#include <string.h>

struct S
{
    int S[8];
};

int main(void)
{
    struct S S = {'a', 'b', 'c', 'd'};
    printf("sizeof: %d\n", sizeof(S));
    printf("strlen: %d\n", strlen(S.S));
    printf("S.S: %d\n", S.S[4]);
    printf("%d\n", sizeof(S.S) - strlen(S.S) + S.S[4]);
    return 0;
}