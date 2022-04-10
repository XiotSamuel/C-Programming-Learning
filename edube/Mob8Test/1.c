#include <stdio.h>
<<<<<<< HEAD
#define ALPHA(x) -x

int main(void)
{
    int i = ALPHA(2 - 1);
    printf("%d", i);
=======
#define X 2
#define Y X*X
#define Z Y+Y
#define MINUS 2-4

int main (void){
    int i =Z;
    int j = i * MINUS;
    int k = i +j;

    print("%d", k);
>>>>>>> fded0d502c65e5a2e5621f3c93ae31a085e9df0f
    return 0;
}