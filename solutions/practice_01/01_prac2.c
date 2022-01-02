#include<stdio.h>

int main(){

    int integer, fixed;

    printf("[Input Floating Point Number]\n");
    printf("Integer Part: ");
    scanf("%d", &integer);
    printf("Fixed Point Part: ");
    scanf("%d", &fixed);

    printf("\nFloating Point Number: %d.%d", integer,fixed);

    return 0;
}
