#include <stdio.h>
#include <stdlib.h>

char square[10][10];

void make_square(int num){

    for(int i = 0; i <num; i ++){
        for(int j = 0; j < num; j ++){
            if(num%2 == 0)  square[i][j] = '+';
            else            square[i][j] = '.';
        }
    }
    if(num > 1)    make_square(num-1);
    else return 0;
}

int main()
{
    make_square(10);

    for(int i =0; i <10; i++){
        for(int j = 0; j <10 ; j++){
            printf("%c ", square[i][j]);
        }
        printf("\n");
    }

    return 0;
}
