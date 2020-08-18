// Aug 18, 2020
// Runitor
// Insertion sort in descending order

/*** includes ***/

#include <stddef.h>
#include <stdio.h>

/*** Function to print an array ***/

void print_array(int *arr, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

/*** Function to sort an array using insertion sort ***/

void insertion_sort(int *arr, int size) {
	for (int i = 1; i < size; i++) {
  		int key = arr[i];
		int j = i - 1;
		while (key > arr[j] && j >= 0) {
			arr[j + 1] = arr[j];
			--j;
		}
		arr[j + 1] = key;
	}
}

/*** Test insertion sort ***/

int main() {
	
	int arr1[] = {5, 2, 4, 6, 1, 3};
	int size1 = sizeof(arr1) / sizeof(arr1[0]);

	int arr2[] = {31, 41, 59, 26, 41, 58};
	int size2 = sizeof(arr2) / sizeof(arr2[0]);

	insertion_sort(arr1, size1);
	insertion_sort(arr2, size2);
	
	print_array(arr1, size1);
	print_array(arr2, size2);

	return 0;
}

