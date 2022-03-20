#include <stdio.h>

struct S
{
    char *p;
};

int main(void)
{
    char *p = "abcd";
    struct S S[2];
    int i;
    for (i = 0; i < 2; i++)
    {
        S[i].p = p + 1;
        printf("%c", S[i].p);
    }
    printf("%c", S[1].p[0]);
    return 0;
}