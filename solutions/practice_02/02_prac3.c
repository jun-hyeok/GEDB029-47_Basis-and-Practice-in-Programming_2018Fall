/*                                       */
/* Comparison to 25 between input number */
/*                                       */

#include <stdio.h>

int main()
{
    int input_number;
    int target_number;
    int sum=0;

    printf("What is target number? : ");
    scanf("%d",&target_number);
    while(sum<=target_number){
        printf("Please input the number: ");
        scanf("%d",&input_number);
        sum+=input_number;
        printf("Sum of all of input numbers is %d\n",sum);
    }
    printf("Now %d is bigger than %d. end the program",sum,target_number);
    return 0;
}
