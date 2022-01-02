#include <stdio.h>
#include <stdlib.h>

void factorial(){
    double res = 1;
    int num;

    printf("input number : ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        res *= i;
    }

    printf("%d! is %lf \n", num, res);

    return 0;
}

void check_prime(){
    int count = 0;
    int num;

    printf("input number : ");
    scanf("%d", &num);

    for(int i = 1; i <= num ; i++){
        if(num % i == 0) count++;
    }

    if(count > 2)
        printf("%d is not prime number.\n", num);
    else
        printf("%d is prime number.\n", num);

    return 0;
}

int main()
{
    char select;
    int flag = 1;

    while(flag){
        printf("'f'actorial, 'c'heck_prime, e'x'it : ");
        scanf(" %c", &select);
        switch (select){
            case 'f':
                factorial();
                break;
            case 'c':
                check_prime();
                break;
            case 'x':
                printf("Good bye~");
                flag = 0;
                break;
        }

    }

}
