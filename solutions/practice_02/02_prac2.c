#include<stdio.h>

int main(){
    int a = 9, b = 4;
    double div;

    div = a/b;
    printf("int / int: %lf\n", div);
    div = (double)a/b;
    printf("double / int: %lf\n", div);
    div = a/(double)b;
    printf("int / double: %lf\n", div);

    return 0;
}
