#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand (time(NULL));

    int *pA,*pB;

    int temp1=rand()%45+1;
    pA=&temp1;
    int temp2=rand()%45+1;
    pB=&temp2;

    printf("pA is %d, pB is %d\n",*pA,*pB);

    return 0;
}

