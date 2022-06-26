#include <stdio.h>

int f(char t[])
{
    return t[0] - t[-1];
}

int main(void)
{

    printf("%d\n", f("ABDGK" + 1));
    int i = 2;
    i -= f("ABDGK" + 1);

    printf("%d\n", i);
    return 0;
}