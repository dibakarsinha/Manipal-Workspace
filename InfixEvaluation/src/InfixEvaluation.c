#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
char expr[5] = { '5', '+', '4', '@' };
char a[5];
int j=0;
int k=0;
char saved[5];
void push(int b) {
	a[j++] = b;
}
void pop(char p,char q) {
	int x = a[j];
	saved[k]=x;
	saved[k++]=p;
	saved[k++]=q;
}
int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);

	for (int i = 0; i < 5; i++) {
		if (isdigit(expr[i]) || (expr[i] >= 'A' && expr[i] <= 'Z')
				|| (expr[i] >= 'a' && expr[i] <= 'z')) {
			printf("%c entered\n", expr[i]);
		} else {
			pop(expr[i],expr[i++]);
		}
	}
}
