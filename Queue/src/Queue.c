#include <stdio.h>
#include <stdlib.h>
struct Node {
	int data;
	struct Node *link;
} rear;

struct Node* enque(struct Node *front, struct Node *rear, int value) {
	struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));
	newNode->data = value;
	newNode->link = front;
	front = newNode;
	if (front == NULL) {
		rear = newNode;
	}
	return front;
}
struct Node* deque(struct Node *front) {
	struct Node *prev = front;
	struct Node *head=front;
	if (front != NULL) {
		while (front->link != NULL) {
			prev = front;
			front = front->link;
		}
		prev->link = NULL;
		printf("popped value is %d \n", front->data);
		front=head;
	}else{
		printf("Nothing to be removed");
	}
	return front;
}
void display(struct Node *front) {
	if (front != NULL) {
		while (front->link != NULL) {
			printf("%d\n", front->data);
			front = front->link;
		}
		printf("%d\n", front->data);
	}else{
		printf("queue is empty");
	}
}

int main(void) {
	struct Node *front = NULL;
	struct Node *rear = NULL;
	front = enque(front, rear, 10);
	front = enque(front, rear, 20);
	display(front);
	front = deque(front);
	display(front);

}
