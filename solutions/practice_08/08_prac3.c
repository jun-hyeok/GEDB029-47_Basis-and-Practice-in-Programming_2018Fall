#include <stdio.h>
#include <stdlib.h>

int main(){
    //
    //  0   0   0   0   0   5   0   0   0   0
    //  0   0   -8  6   0   0   0   -4  0   0
    //  0   -7  0   0   0   -10 0   0   -26   0

    int board[30] = {0,0,0,0,0,5,0,0,0,0,0,0,-4,0,0,0,6,-8,0,0,0,-7,0,0,0,-10,0,0,-26,0};
    int* now = board;

    while(now < board+29){
        if(*now == 0){
            int move;
            printf("input number (1~6) : ");
            scanf("%d", &move);
            now += move;
        }else{
            now += *now;
        }
        printf("now position is %d\n", now-board+1);
    }

}


