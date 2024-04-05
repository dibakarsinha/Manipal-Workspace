/*
 ============================================================================
 Name        : SelectionSort.c
 Author      : Dibakar Sinha
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[] = { 12, 31, 25, 8, 32, 17 };
	int n = sizeof(a) / sizeof(a[0]);
	int i, j, small;
	printf("Before sorting array elements are - \n");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);

	for (i = 0; i < n - 1; i++) { // One by one move boundary of unsorted subarray

		small = i; //minimum element in unsorted array

		for (j = i + 1; j < n; j++) {
			if (a[j] < a[small]) {
				small = j;
				/*int temp = a[small];
				 a[small] = a[i];
				 a[i] = temp;*/
			}
		}
		// Swap the minimum element with the first element
		int temp = a[small];
		a[small] = a[i];
		a[i] = temp;
	}
	printf("After sorting array elements are - \n");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);

}
