/*
 ============================================================================
 Name        : InsertionSort.c
 Author      : Dibakar Sinha
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, j, a[4] = { 6, 3, 5, 8 }, key;
	printf("Unsorted Array \n");
	for (i = 0; i < 4; i++) {
		printf("%d\t", a[i]);
	}
	for (i = 0; i < 4; i++) {
		key = a[i];
		j = i - 1;
		while (j >= 0 && a[j] > key) {
			a[j + 1] = a[j];
			j = j - 1;
		}
		a[j + 1] = key;
	}
	printf("\nsorted array \n");
	for (i = 0; i < 4; i++) {
		printf("%d\t", a[i]);
	}
}
