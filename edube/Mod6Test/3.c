#include <stdio.h>

struct S
{
    int S;
};

int f(struct S *s)
{
    return --s.S;
}

int main(void)
{
    int i;
    struct S S = {2};
    i = f(S);

    printf("%d", i);
    return 0;
}