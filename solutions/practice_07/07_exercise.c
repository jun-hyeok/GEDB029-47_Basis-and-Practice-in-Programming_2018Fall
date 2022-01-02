#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void AssignArr(int arr[]){
  for(int i =0; i <10; i++){
    arr[i]=rand()%10+1;
    printf("%d ",arr[i]);
  }
  printf("\n");
}

void CompareArr(int arr[], int arr_len, float *avg, int *count){
  float sum=0;
  for(int i =0; i <10; i++)
    sum+=arr[i];
  *avg=sum/arr_len;
  for(int i =0; i <10; i++){
    if(*avg<arr[i])
        *count=(*count)+1;
  }
}

int main()
{
    int arr[10];
    int arr_len=10, cnt_num=0;
    float avg_num;
    double temp=3.0;

    srand((unsigned int)time(NULL));
    printf("Array Component : ");
    AssignArr(arr);
    CompareArr(arr, arr_len, &avg_num, &cnt_num);
    printf("the number of components bigger than average value %f is %d \n", avg_num, cnt_num);
    return 0;
}


