#include <stdio.h>
<<<<<<< HEAD
#define X 1
#define Y 2

int main(void)
{
    int i =
#if X >> Y > 0
        -X
#else
        -Y
#endif
        ;
    printf("%d", i);
=======

#define F1(X) X*X
#define F2(X) ((X)*(X))
#define F3(X) ((X)*X)


int main(void){
    int i=1;
    int j=2;
    int k=5;
    int s;
    //s=F1(i+j)+F2(i-j)+F3(i+k);
    printf("%d\n",F1(j+k));
    //printf("%d\n",F2(i-j));
    //printf("%d\n",F3(i+k));

    //printf("%d",s);
>>>>>>> fded0d502c65e5a2e5621f3c93ae31a085e9df0f
    return 0;
}