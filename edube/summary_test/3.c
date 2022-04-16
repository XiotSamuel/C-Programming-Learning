// #include <stdio.h>

// #define ONE 1
// #define TWO ONE + ONE

// int main(void)
// {
//     int i = 2;
//     i = i - 2 * TWO;

//     print("%d\n", i);
//     return 0;
// }

#include <stdio.h>

int main(void)
{
    int x = 1, y = 1;
    float k = -1e0, m = 2e1;

    printf("%d\n", (x >= y) + (x >= y) + (k >= y) + (m >= k) + ('q' <= 'z'));
    return 0;
}