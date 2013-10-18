#include <stdio.h>
#include <stddef.h>

// This is a simple bubblesort
void sort(int array[], size_t len)
{
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len-i; j++) {
			if (array[j-1] > array[j]) {
				int tmp = array[j-1];
				array[j-1] = array[j];
				array[j] = tmp;
			}
		}
	}
}

int main(void)
{
	int A[] = { 12, 3, 5, 2, 1, 8 };

	sort(A, 6);

	for (int i = 0; i < 6; i++)
		printf("%i ", A[i]);
	printf("\n");

	return 0;
}
