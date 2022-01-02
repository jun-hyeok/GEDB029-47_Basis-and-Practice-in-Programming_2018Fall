#include <stdio.h>
void find_two_negative(int *arr, int size)
{
	int *first = 0;
	int *second = 0;
	for (int i = 0; i < size; i++) {
		if(*(arr+i)<0){
			if (first == 0) {
				first = arr + i;
				*first=0;
			}
			else {
				second = arr + i;
				*second=0;
				break;
			}
		}
	}
	printf("\n\nThe difference between two negative value`s indexes is %d",second-first);
}

int main()
{
	int arr[10] = { 7, 6, 11, -1, 10, 8, 4, 1, -10, 19 };
	printf("---Before change---\n");
	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	find_two_negative(arr, 10);
	printf("\n\n---After change---\n");
	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n");
	return 0;
}
