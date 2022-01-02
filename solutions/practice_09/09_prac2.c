#include<stdio.h>

int main()
{
	int i = 10, j = 15;
	int *p_i, *p_j;

	p_i = &i;
	p_j = &j;

    printf("---Before Changing Values---\n");

	printf("Value of '*p_i': %d\n", *p_i);
	printf("Value of '*p_j': %d\n\n", *p_j);

	printf("Address of 'i': %p\n", &i);
	printf("Address of 'j': %p\n\n", &j);

	printf("Value of 'p_i': %p\n", p_i);
	printf("Value of 'p_j': %p\n\n", p_j);

	*p_i = 20;
	*p_j = 25;

	printf("---After Changing Values---\n");

	printf("Value of '*p_i': %d\n", *p_i);
	printf("Value of '*p_j': %d\n\n", *p_j);

	printf("Address of 'i': %p\n", &i);
	printf("Address of 'j': %p\n\n", &j);

	printf("Value of 'p_i': %p\n", p_i);
	printf("Value of 'p_j': %p\n\n", p_j);

	return 0;

}
