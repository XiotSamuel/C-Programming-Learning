#include <stdio.h>

void fun(int a, int b)
{
    printf("%d", b);
    printf("%d", a);
}
int main()
{
    int arr[] = {1, 2, 3, 4};
    fun(arr[1], arr[3]);
    return 0;
}