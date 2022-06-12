#include <stdio.h>
#include <string.h>

struct S
{
    char S[4];
};

int main(void)
{
    struct S S = {'a', 'b'};
    int 2R2D = 0;
    int _R2D2_ = 0;
    int _2R2D_ = 0;
    int R2D2 = 0;

    printf("%d\n", sizeof(S.S));
    printf("%d\n", strlen(S.S));
    printf("%d\n", S.S[3]);
    printf("%d\n", sizeof(S.S) - strlen(S.S) + S.S[3]);
    return 0;
}