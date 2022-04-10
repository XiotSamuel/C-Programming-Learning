#include <stdio.h>
#define X 2
#define Y X *X
#define Z Y + Y
#define MINUS 2 - 4

int main(void)
{
    int i = Z; // i = 2*2 + 2*2=8
    printf("%d\n", i);
    int j = i * MINUS; // j=8* 2 -4 // need to cal the 8 * 2 first
    printf("%d\n", j);
    int k = i + j;
    printf("%d\n", k);

    printf("%d", k);
    return 0;
}