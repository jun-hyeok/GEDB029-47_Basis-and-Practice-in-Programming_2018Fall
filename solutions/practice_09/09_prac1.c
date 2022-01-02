#include<stdio.h>

void input(int *ptr)
{
    *ptr=0;
    while(*ptr<=0){
        printf("Input a positive number : ");
        scanf("%d",ptr);
        if(*ptr<=0)
            printf("You have to input a positive value!\n\n");
    }
}

void swap(int *ptr_i, int *ptr_j)
{
	int temp = *ptr_j;
	*ptr_j = *ptr_i;
	*ptr_i = temp;
}

int main()
{
	int i, j;

	input(&i);
	input(&j);

	printf("\ni : %d\n", i);
	printf("j : %d\n\n", j);

	swap(&i, &j);

	printf("i : %d\n", i);
	printf("j : %d\n", j);

	return 0;
}

