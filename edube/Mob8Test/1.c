#include <stdio.h>
#define X 2
#define Y X *X
#define Z Y + Y
#define MINUS 2 - 4

int main(void)
{
    int i = Z;
    int j = i * MINUS;
    int k = i + j;

    print("%d", k);
    return 0;
}