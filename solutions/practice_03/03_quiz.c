#include <stdio.h>
#include <stdlib.h>

int odd_number_range_summation(int min, int max){
    int sum = 0;

    for(int i = min; i <= max; i++){
        if(i % 2 == 1){
            sum += i;
        }
    }
    return sum;
}

int main()
{
    char select;
    int min, max;

    while(1){
        printf("input min, max number!\n");
        scanf("%d %d", &min, &max);

        if(min != max)
            printf("odd number range sum is %d.\n", odd_number_range_summation(min, max));
        else
            break;
    }
    printf("program end..\n");
}

