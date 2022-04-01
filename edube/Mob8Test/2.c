#include <stdio.h>

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
    return 0;
}