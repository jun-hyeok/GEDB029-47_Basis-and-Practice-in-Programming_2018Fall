#include <stdio.h>
#include <stdlib.h>

int gcd(int num1, int num2){
    int i = 1;
    int divisor;
    while(i <= num1 || i <= num2){
        if(num1 % i == 0 && num2 % i == 0)
            divisor = i;
        i++;
    }

    return divisor;
}

int main()
{
    int num1, num2;

    printf("input two number : ");
    scanf("%d %d", &num1, &num2);

    printf("gcd(greatest common divisor) of two number is %d \n", gcd(num1, num2));

    return 0;

}
