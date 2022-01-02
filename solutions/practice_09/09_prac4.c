#include <stdio.h>
void reverse_between_two_negative(int *arr, int size)
{
	int *first = 0;
	int *second = 0;

	for (int i = 0; i < size; i++) {
		if(*(arr+i)<0){
			if (first == 0) {
				first = arr + i;
			}
			else {
				second = arr + i;
				break;
			}
		}
	}

	while (first < second) {
		int temp = *first;
		*first = *second;
		*second = temp;
		first++;
		second--;
	}
}

int main()
{
	int arr[10] = { 7, 6, 11, -1, 10, 8, 4, 1, -10, 19 };
	printf("---Before reverse---\n");
	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	reverse_between_two_negative(arr, 10);
	printf("\n\n---After reverse---\n");
	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n");
	return 0;
}
