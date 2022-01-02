#include <stdio.h>
#include <stdlib.h>

void print_stars(int num)
{
    if(num == 0)
        return;
    print_stars(num-1);
    for(int i=0; i<num; i++)
        printf("*");
    printf("\n");
}

int main()
{
    print_stars(10);
}
