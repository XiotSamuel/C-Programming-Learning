#include <stdio.h>
<<<<<<< HEAD
#define ALPHA(x) -x

int main(void)
{
    int i = ALPHA(2 - 1);
=======
#define X 3
#define Y X *X
#define Z Y + X
#define F(A) A *(A + 2)

int main(void)
{
#if F(3) + (Z) == 27
    int i = 27 + F(5);
#else int i = F(5);
#endif
>>>>>>> fded0d502c65e5a2e5621f3c93ae31a085e9df0f
    printf("%d", i);
    return 0;
}