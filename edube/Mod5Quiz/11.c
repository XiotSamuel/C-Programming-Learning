#include <stdio.h>
void f(int i)
{
    i++;
}
int main(void)
{
    int i = 1;
    f(i);
    printf("%d", i);
    return 0;
}