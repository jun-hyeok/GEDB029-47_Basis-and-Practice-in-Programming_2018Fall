#include <stdio.h>
#include <stdlib.h>


int* max_of_array(int* arr, int len){
    int* max = arr;
    for( int i =0; i< len-1; i++){
        arr++;
        if(*max <= *arr) max = arr;
    }
    return max;
}

int main()
{
    int *max;
    int arr[10];
    int len;

    printf("number of input (1~10): ");
    scanf("%d", &len);
    printf("input numbers : ");
    for(int i = 0; i < len; i++){
        scanf("%d", (arr+i));
    }

    printf("%d is maximum value of this array.\n", *max_of_array(arr, len));

    return 0;
}


