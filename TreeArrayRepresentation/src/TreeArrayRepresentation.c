#include <stdio.h>
#include <stdlib.h>
int d[50], noOfItems;
int i = 0;
int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	printf("enter no of items to be entered");
	scanf("%d", &noOfItems);
	int i = 0, a, b, c;
	for (int i = 0; noOfItems != 0; i++) {
		if (d[i] != NULL) {
			scanf("%d", &a);
			d[i] = a;
		}
		noOfItems--;
		if (noOfItems == 0)
			break;
		if (d[2 * i + 1] != NULL) {
			scanf("%d", &b);
			d[2 * i + 1] = b;
		}
		noOfItems--;
		if (noOfItems == 0)
			break;
		if (d[2 * i + 2] != NULL) {
			scanf("%d", &c);
			d[2 * i + 2] = c;
		}
		noOfItems--;
	}
	printf("The Preorder traversal of given binary tree is -\n");
	int noOfItems = 3;
	while (i < 50) {
		if (d[i] != NULL) {
			printf("%d", d[i]);
		}
		i++;

	}

}
