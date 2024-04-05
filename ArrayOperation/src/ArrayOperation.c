#include <stdio.h>
#include <stdlib.h>
#define max 4
int a[max], n, i, x, chos,val;
int main() {
	if(chos<0 || chos>max){
		printf("invalid entry");
	}

	if(n>=max)
		printf("array full");
	for(int i=n-1;i>=chos;i--){
		a[i+1]=a[i];
	}
	a[chos]=val;
	n++;
	printf("\nvalue %d inserted at position %d\n",val,chos);

	if(n==0)
		printf("Array empty");
	int del=a[chos];
	for(i=chos;i<n;i++){
		a[i]=a[i+1];
	}
	n--;
	printf("\nvalue %d deleted at position %d\n",del,chos);
}
