#include <stdio.h>
#include <stdlib.h>

void reverse(char* front, char* back){
    if(front >= back) return;
    else{
        char temp = *front;
        *front = *back;
        *back = temp;
        reverse(++front, --back);
    }
}

int main(){

    char arr[11];
    int len;

    printf("number of input (1~10) : ");
    scanf("%d", &len);
    printf("input numbers : ");
    scanf("%s", arr);

    reverse(arr, arr+len-1);

    printf("reversed :%s\n", arr);
}

