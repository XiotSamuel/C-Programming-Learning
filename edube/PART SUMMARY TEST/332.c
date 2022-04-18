#include <stdio.h>

struct S
{
    int Var;
    struct S *Str;
};

int main(void)
{
    struct S S[] = {{8, NULL}, {4, &S[0]}, {2, &S[1]}};
    printf("%d\n", S[2]);
    printf("%d\n", S[2].Str->Var);
    printf("%d\n", S[2].Str->Str->Var);
    //-> pointer in the structure
    // point to the S[1] than S[0] than var
    return 0;
}