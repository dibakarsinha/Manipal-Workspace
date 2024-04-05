#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, j, k,max=2;
	int a[2][2][2]={{{1,2},{3,4}},{{5,6},{7,8}}};
	/*for (i = 0; i < 2; ++i) {
		for (j = 0; j < 2; ++j) {
			for (k = 0; k < max; ++k) {
				scanf("%d", &a[i][j][k]);
			}
		}
	}*/
	for (i = 0; i < max; ++i) {
		for (j = 0; j < max; ++j) {
			for (k = 0; k < max; ++k) {
				printf("%d",a[i][j][k]);
			}
		}
	}
}
