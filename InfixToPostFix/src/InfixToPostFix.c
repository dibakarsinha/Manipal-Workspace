#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
char alpha[20]; //contains all alphabet
char symbols[20] = { '-', '+', '*', '/' };
char postFix[20];
int top = -1;
int getIndexOf(char str) {
	int i;
	for(i=0;i<4;i++){
		if(str==symbols[i])
			break;
	}
	return i;
}
char getTopOfStack() {
	if(top==-1){
		printf("stack empty\n");
		return "-";
	}else{
		top++;
		return postFix[top];
	}
}
void insertPostFix(char str) {
	bool flag = false;
	if (getIndexOf(str) < getIndexOf(getTopOfStack)) {
		top++;
		postFix[top] = getTopOfStack;
		flag = true;
	}
	if(flag==true){
		insertPostFix(str);
	}
	postFix[top]=str;
}

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	//char str[20];
	//printf("enter the string");
	//scanf("%s",&str);
	char str[20]="a+b-c";
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] != ' ') { // not a white space
			if (isalpha(str[i])) {
				//alpha[i] = str[i];
				top++;
				postFix[top] = str[i];
			} else {
				if (getIndexOf(str[i]) > getIndexOf(getTopOfStack)) {
					top++;
					postFix[top] = str[i];
				} else {
					insertPostFix(str[i]);
				}
			}
		}
	}
}
