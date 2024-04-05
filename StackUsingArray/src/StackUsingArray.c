#include <stdio.h>
#include <stdlib.h>

int push(int a[], int top, int value, int n) {
	if (top == n) {
		printf("stack is full\n");
		return top;
	} else {
		a[top++] = value;
		return top;
	}
}
void display(int top, int a[]) {
	if (top != 0) {
		for (int i = top; i > 0; i--) {
			printf("%d\n",a[top]);
		}
	}
}

int pop(int top,int a[]){
	if(top=-1){
		printf("stack empty");
	}else{
		int value=a[top];
		top=top-1;
	}
	return top;
}
int main(void) {
	int n, top = 0;
	setvbuf(stdout, NULL, _IONBF, 0);
	printf("Enter the size of array\n");
	scanf("%d", &n);
	printf("Hello World");
	int a[n];
	top = push(a, top, 10, n);
	display(top, a);
}
