/*
 ============================================================================
 Name        : Misc.c
 Author      : Dibakar Sinha
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct Student {
	int age;
	float marks;
} s, s1;
int main(void) {
	s.age = 10;
	s.marks = 23.45;
	s1=s;

	printf("%d", s1.age);
}
