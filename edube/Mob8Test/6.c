#include <stdio.h>
<<<<<<< HEAD
#define ALPHA -2

int main(void)
{
    int i = -1;
    i += ALPHA;

    printf("%d", i);
=======
#define SYM
#define BOL 100
#define SMB SYM##BOL
#define SBL #BOL
#undef  sys

int main(void){
    #ifdef SYM
    int i =100;
    #ifdef SYMBOL
    int j = i +200;
    #else
    int j = i + 222;
    #endif
    #else
    int i = 200;
    #ifdef SYMBOL
    int j = i +100;
    #else
    int j = i + 111;
    #endif
    #endif
    printf("%d", i+j);
>>>>>>> fded0d502c65e5a2e5621f3c93ae31a085e9df0f
    return 0;
}