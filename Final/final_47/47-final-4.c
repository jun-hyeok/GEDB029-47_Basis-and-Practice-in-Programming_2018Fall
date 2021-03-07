#include<stdio.h>
#include<string.h>
int main(){
    char ch;
    int size=1;
    int index=0;
    char *str=(char*)malloc(sizeof(char));

    printf("Enter a string in one line : ");

    //Write your own code!

    printf("Size of str : %d\n",size);
    printf("Length of str : %d\n",strlen(str));
    printf("Content of str : %s\n",str);

    return 0;
}
