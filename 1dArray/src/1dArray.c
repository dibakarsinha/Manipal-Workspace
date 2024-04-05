/*
 ============================================================================
 Name        : 1dArray.c
 Author      : Dibakar Sinha
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int array[]={10,23,45,43};
	for (int var = 0; var < 4; ++var) {
		printf("%d\t",array[var]);
	}
}
