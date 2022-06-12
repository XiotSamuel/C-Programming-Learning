#include <stdio.h>

int main(void)
{
    int t[4] = {0, -1, -2, -3}, *p = t + 3;
    printf("%d\n", p[*p]);
    printf("%d\n", t[2]);
    printf("%d\n", p[*p] - t[2]);
    return 0;
}