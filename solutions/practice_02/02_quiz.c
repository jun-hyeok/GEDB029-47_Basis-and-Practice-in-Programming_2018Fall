/*                                       */
/* Comparison to 25 between input number */
/*                                       */

#include <stdio.h>

int main()
{
    int input_number;
    int num=0;

    printf("start the program\n");
    while(num<5){
        printf("Please input the number: ");
        scanf("%d",&input_number);
        num++;
        if(input_number>25)
            printf("%d is bigger than 25\n",input_number);
        else if (input_number==25)
            printf("%d is equal to 25\n",input_number);
        else
            printf("%d is smaller than 25\n",input_number);

    }
    printf("end the program");
    return 0;
}
