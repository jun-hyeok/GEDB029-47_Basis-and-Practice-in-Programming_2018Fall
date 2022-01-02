#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int index_of_number(int arr[], int num){
    int idx=-1;
    for(int i=0;i<5;i++){
        if(arr[i]==num){
            idx=i;
            break;
        }
    }
    return idx;
}
int main(){
    int arr[5];
    int input_number;
    srand((unsigned int)time(0));
    for(int i=0;i<5;i++) {
        arr[i]=rand()%20+1;
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Input a number you want to find : ");
    scanf("%d",&input_number);
    printf("The number`s index is %d",index_of_number(arr,input_number));

    return 0;
}
