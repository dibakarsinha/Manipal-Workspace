#include <stdio.h>
#include <stdlib.h>

void TwoDArray() {
	//int array[]={10,23,45,43};
	int a[2][2];
	for (int var1 = 0; var1 < 2; ++var1) {
		for (int var2 = 0; var2 < 2; ++var2) {
			scanf("%d", &a[var1][var2]);
		}
	}
	for (int var1 = 0; var1 < 2; ++var1) {
		for (int var2 = 0; var2 < 2; ++var2) {
			printf("%d", a[var1][var2]);
		}
	}
}
