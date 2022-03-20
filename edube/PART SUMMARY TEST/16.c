#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    arr[1] = 0;
    arr[3] = 0;
    for (int i = 0; i < 5; ++i)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}