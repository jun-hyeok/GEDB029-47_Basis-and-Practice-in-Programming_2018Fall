#include<stdio.h>

int main(){
    int freq[10]={0,};
    int input_number;

    while(1){
        printf("Input number (range of 0 to 9 or exit program) : ");
        scanf("%d",&input_number);

        if(input_number>=0 && input_number<=9)
            freq[input_number]++;
        else {
            for(int i=0;i<10;i++)
            printf("%d is entered %d times\n",i,freq[i]);
            printf("Program ends...");
            break;
        }
    }

    return 0;
}
