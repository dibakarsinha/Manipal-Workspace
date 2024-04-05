#include <stdio.h>
#include <stdlib.h>

struct Node {
	int priority;
	struct Node *next;
};
struct Node* enqueu(struct Node *a, struct Node *front) {
	setvbuf(stdout, NULL, _IONBF, 0);
	struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));
	newNode = a;
	newNode->next = front;
	front = newNode;
	return front;
}
struct Node* dequeu(struct Node *front) {
	setvbuf(stdout, NULL, _IONBF, 0);
	if (front->next != NULL) {
		struct Node *prev = (struct Node*) malloc(sizeof(struct Node));
		struct Node *head = (struct Node*) malloc(sizeof(struct Node));
		head = front;
		while (front->next != NULL) {
			prev = front;
			front = front->next;
		}
		prev->next = NULL;
		front = head;
		return front;
	} else {
		front=NULL;
		return front;
	}
}
int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	struct Node *a = (struct Node*) malloc(sizeof(struct Node));
	struct Node *b = (struct Node*) malloc(sizeof(struct Node));
	struct Node *c = (struct Node*) malloc(sizeof(struct Node));
	struct Node *front = NULL;
	a->priority = 1;
	b->priority = 2;
	c->priority = 3;
	a->next = b;
	b->next = c;
	c->next = NULL;
	int priority = 1;

	while (priority <= 3) {
		if (priority == a->priority) {
			front = enqueue(a, front);
			priority++;
		} else {
			a = a->next;
		}
	}
	if(front==NULL){
		print("Queue Empty");
	}else{
		front=dequeu(front);
	}
}

