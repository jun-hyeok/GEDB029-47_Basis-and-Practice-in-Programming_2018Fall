#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 10

void initializerArray(int line[])
{
    int i;
    for (i=0; i<N; i++){
        line[i] = i;
    }
}

void printArray(int line[]){
    int i;
    for (i=0; i<N; i++){
        printf(" %d", line[i]);
    }
    printf("\n\n");
}

void loopRightShift(int line){
    int num;
    printf("How many times to shift to the right: ");
    scanf("%d", &num);
    while(num-- > 0){
        rightShift(line);
    }
}

void rightShift(int line[]){
    int temp = line[N-1];
    int i = N;
    while(--i > 0){
        line[i] = line[i-1];
    }
    line[0] = temp;
}

void loopLeftShift(int line){
    int num;
    printf("How many times to shift to the left: ");
    scanf("%d", &num);
    while(num-- > 0){
        leftShift(line);
    }
}

void leftShift(int line[]){
    int temp = line[0];
    int i = 0;
    while(++i < N){
        line[i-1] = line[i];
    }
    line[N-1] = temp;
}

void main(void){
    int line[N];

    initializerArray(line);
    printf("Initial Line :");
    printArray(line);

    loopRightShift(line);
    printf("Right Shift Line :");
    printArray(line);

    loopLeftShift(line);
    printf("Left Shift Line :");
    printArray(line);
}
