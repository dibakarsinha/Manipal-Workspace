#include <stdio.h>
#include <stdlib.h>

struct Student {
	int age;
	struct Student *next;

} *s1, *s2;
int main(void) {
	s1 = (struct Student*) malloc(sizeof(struct Student));
	s2 = (struct Student*) malloc(sizeof(struct Student));
	struct Student *newNode = (struct Student*) malloc(sizeof(struct Student));
	struct Student *prev = (struct Student*) malloc(sizeof(struct Student));
	s1->age = 20;
	s1->next = s2;
	s2->age = 30;
	s2->next = NULL;
	struct Student *head = s1;
	int pos=1;
	int i = 0;
	while(1) {
		if (pos == 0) {
			newNode->age=40;
			newNode->next = s1;
			head=newNode;
			break;
		} else if (i == pos) {
			newNode->age=40;
			newNode->next = s1;
			prev->next = newNode;
			break;
		}
		prev = s1;
		s1 = s1->next;
		i++;
	}

	while (head->next != NULL) {
		printf("%d \n", head->age);
		head = head->next;
	}
	printf("%d \n", head->age);
}
