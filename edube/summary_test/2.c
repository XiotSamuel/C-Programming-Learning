// #include <stdio.h>

// int main(void)
// {
//     int X;
//     X = ('r' - 's') * ('A' / 'Z');
//     return 0;
// }

#include <stdio.h>
#include <string.h>

struct S
{
    char S[8];
};

int main(void)
{
    struct S S = {'a', 'b', 'c', 'd'};
    printf("%d", sizeof(S.S) - strlen(S.S) + S.S[4]);
    return 0;
}