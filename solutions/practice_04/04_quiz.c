#include<stdio.h>
int sum_of_max_min_value(int arr[],int num){
    int max_value,min_value;
    max_value=min_value=arr[0];

    for(int i=1;i<num;i++){
        if(arr[i]>max_value)
            max_value=arr[i];
        if(arr[i]<min_value)
            min_value=arr[i];
    }

    return max_value+min_value;

}

int main(){
    int arr[5];

    printf("Input the numbers : ");
    for(int i=0;i<5;i++)
        scanf("%d",&arr[i]);

    printf("The summation of Maximum value and Minimum value is %d",sum_of_max_min_value(arr,5));

    return 0;
}
