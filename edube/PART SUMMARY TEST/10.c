// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char s[5] = "ABC";

//     strcat(s + 1, "ABC");
//     printf("%d", s[0] - s[1]);
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     char t[] = {'x', 'z', 'Y', 'Z', '2', '0'};
//     printf("%d\n", t[t[1] - t[0] - t[3] + t[2] + 3] - t[5]);
//     return 0;
// }

#include <stdio.h>

struct S
{
    int Var;
    struct S *Str;
};

int main(void)
{
    struct S S[] = {{8, NULL}, {4, &S[0]}, {2, &S[1]}};
    printf("%d", S[2].Str->Str->Var);
    return 0;
}