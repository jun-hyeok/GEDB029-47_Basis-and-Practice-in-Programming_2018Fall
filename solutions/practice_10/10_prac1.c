#include <stdio.h>
#include <stdlib.h>


int main()
{
    char str[6] = "hello";
    // 'h', 'e', 'l', 'l', 'o', '\0' -> "str" needs 6 character spaces

    char str2[] = {'H','e','l','l','o','W','o','r','l','d','\0'};

    char* pointer = str2;

    printf("[%s]\n", str);
    printf("[%s]\n", str2);
    printf("[%s]\n\n", pointer);

    while(*pointer != '\0'){
        int i = 0;
        while(*(pointer + i) != '\0'){
            printf("%c", *(pointer+i));
            i++;
        }
        printf("\n");
        pointer++;
    }
}
