#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct S
{
    char *S;
};

int main(void)
{
    struct S *S = (struct S *)malloc(sizeof(struct S));
    S->S = "abc";
    printf("strlen(S->S+2) %d\n", strlen(S->S + 2));
    printf("S->S[3] %d\n", S->S[3]);
    printf("%d\n", strlen(S->S + 2) + S->S[3]);
    free(S);
    return 0;
}