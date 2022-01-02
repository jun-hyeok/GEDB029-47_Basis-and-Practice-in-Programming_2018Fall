#include <stdio.h>
#include <stdlib.h>

int number_of_divisors(int number){
    int count = 0;

    for(int i = 1; i <= number; i++){
        if(number % i == 0){
            count ++;
            printf("%d is divisor of %d.\n", i, number);
        }
    }

    return count;
}

int main(){
    int number;

    while(1){
        printf("input the number ( 0 : exit ) : ");
        scanf("%d", &number);
        if( number == 0)
            break;
        else
            printf("\n %d's number of divisor is %d. \n\n", number, number_of_divisors(number));
    }

    return 0;
}
