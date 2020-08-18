// Aug 18, 2020
// Runitor
// Insertion sort in ascending order

/*** includes ***/

#include <stddef.h>
#include <stdio.h>

/*** Function to print an array ***/

void print_array(int *arr, size_t size) {
	for (size_t i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

/*** Function to sort an array using insertion sort ***/

void insertion_sort(int *arr, size_t size) {

	int key;
	size_t i;

	for (size_t j = 1; j < size; j++) {
		key = arr[j];
		i = j - 1;
		while (i >= 0 && arr[i] > key) {
			arr[i+1] = arr[i];
			i--;
		}
		arr[i+1] = key;
	}
}

/*** Test insertion sort ***/

int main() {
	
	int arr1[] = {5, 2, 4, 6, 1, 3};
	size_t size1 = sizeof(arr1) / sizeof(arr1[0]);

	int arr2[] = {31, 41, 59, 32, 41, 58};
	size_t size2 = sizeof(arr2) / sizeof(arr2[0]);

	insertion_sort(arr1, size1);
	insertion_sort(arr2, size2);
	
	print_array(arr1, size1);
	print_array(arr2, size2);

	return 0;
}

