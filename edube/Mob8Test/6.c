#include <stdio.h>
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
    return 0;
}