#include <stdio.h>
#define X 3
#define Y X *X
#define Z Y + X
#define F(A) A *(A + 2)

int main(void)
{
#if F(3) + (Z) == 27
    int i = 27 + F(5);
#else
    int i = F(5);
#endif
    printf("%d", i);

    return 0;
}

// the program outputs 0