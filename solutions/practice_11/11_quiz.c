#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100] = "hello c world what is the index of word you want";
    char str2[20];

    printf("input the string :");
    scanf("%s", str2);


    int check = 0;
    for(int i = 0; i < strlen(str); i++){
        if(!strncmp(str+i, str2, strlen(str2))){
            check = 1;
            printf("index is %d\n", i+1);
            break;
        }
    }
    if(check == 0){
        printf("there is no that string\n");
    }

}
