
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr[] = { 2, 4, 5, 6 };
	for (int var = 0; var < 4; ++var) {
		if (4 != arr[var]) {
			continue;

		}else{
			printf("found at location %d",++var);
			break;
		}
	}


	return EXIT_SUCCESS;
}
