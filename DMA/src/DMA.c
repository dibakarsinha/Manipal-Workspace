#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int *ptr, i, max = 5;
	int *ptr_new;
	ptr = (int*) malloc(5 * sizeof(int));
	for (i = 0; i < max; ++i) {
		ptr[i] = i + 1;
	}
	for (i = 0; i < max; ++i) {
		printf("%d", ptr[i]);
	}
	printf("\n");
	ptr = (int*) calloc(5, sizeof(int));
	for (i = 0; i < max; ++i) {
		ptr[i] = i + 1;
	}
	for (i = 0; i < max; ++i) {
		printf("%d", ptr[i]);
	}
	printf("\n");
	ptr_new = realloc(ptr,5*sizeof(int));
	for (i = 5; i < 10; ++i) {
		ptr[i] = i + 1;
	}
	for (i = 0; i < 10; ++i) {
		printf("%d", ptr[i]);
	}
}
