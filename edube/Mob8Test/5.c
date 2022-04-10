#include <stdio.h>
<<<<<<< HEAD
#define ALPHA -1 + 2

int main(void)
{
    int i = -1;
    i += ALPHA;

    printf("%d", i);
=======
#define CIT(X) #X;
#define CNC(X,Y,Z) X##Y##Z
#define VAL 641221

int main(void){
    int i = CNC(64,12,21);
    int j = i + VAL;
    char *s = CIT(i);

    printf ("%d%s",j,s);
>>>>>>> fded0d502c65e5a2e5621f3c93ae31a085e9df0f
    return 0;
}