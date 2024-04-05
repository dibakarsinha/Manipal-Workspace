#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct Node {
	int data;
	struct Node *link;
};
bool isEmpty(struct Node *root) {
	if (root == NULL) {
		printf("stack is empty");
		return true;
	} else {
		return false;
	}
}
struct Node* pop(struct Node *root) {
	if (isEmpty(root)) {
		return NULL;
	}
	printf("\n pooped element is %d \n", root->data);
	root = root->link;
	return root;
}

struct Node* push(struct Node *root, int data) {
	struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));
	newNode->link = root;
	newNode->data = data;
	root = newNode;
	return root;
}

void display(struct Node *root) {
	if (!isEmpty(root)) {
		while (root->link != NULL) {
			printf("%d \n", root->data);
			root = root->link;
		}
		printf("%d", root->data);
	}

}
int main() {
	struct Node *root = NULL;
	root = push(root, 10);
	root = push(root, 20);
	root = push(root, 30);
	display(root);
	root = pop(root);
	display(root);
	return 0;
}

