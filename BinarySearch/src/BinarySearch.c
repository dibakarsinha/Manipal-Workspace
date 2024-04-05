#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr[] = { 2, 6, 7, 3, 10, 9 };
	int x = 10;
	int l = 0, m= 2, r = 4;
	int flag = -1;
	while (l <= r) {
		int m = l + (r - l) / 2;

		// Check if x is present at mid
		if (arr[m] == x)
			return m;

		// If x greater, ignore left half
		if (arr[m] < x)
			l = m + 1;

		// If x is smaller, ignore right half
		else
			r = m - 1;
	}
	if (flag == -1) {
		printf("record not found");
	}
	return 0;
}
