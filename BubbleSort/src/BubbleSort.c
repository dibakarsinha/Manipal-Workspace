#include <stdbool.h>
#include <stdio.h>

// An optimized version of Bubble Sort
void bubbleSort(int arr[], int n) {

}

// Function to print an array
void printArray(int arr[], int size) {
	int i;

}

// Driver program to test above functions
int main() {
	int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int i, j;
	bool swapped;
	for (i = 0; i < n - 1; i++) {
		swapped = false;
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				swapped = true;
			}
		}

		if (swapped == false)
			break;
	}
	printf("Sorted array: \n");
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	return 0;
}
