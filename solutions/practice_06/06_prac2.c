#include <stdio.h>
#include <stdlib.h>

int formula(int num){

    if(num == 1)    return 2;
    if(num == 2)    return 3;
    return formula(num-1) - (2 * formula(num-2)) + 5;

}

int main()
{
    int num;

    printf("input number : ");
    scanf("%d", &num);

    printf("the result of A%d is %d.\n", num, formula(num));

    return 0;
}
