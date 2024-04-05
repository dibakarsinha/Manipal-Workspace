#include <stdio.h>
#include <stdlib.h>

struct Student {
	int age;
	struct Student *ln;
	struct Student *rn;
};

struct Student* push(struct Student *root, int data) {
	struct Student *newNode = (struct Student*) malloc(sizeof(struct Student*));
	newNode->rn = root;
	newNode->age = data;
	newNode->ln = NULL;
	root = newNode;
	return root;
}
struct Student* pop(struct Student *root) {
	if (root != NULL) {
		printf("Popped element is %d\n", root->age);
		root = root->rn;
		return root;
	} else {
		printf("stack is empty");
		return NULL;
	}
}
void display(struct Student *root) {
	if (root != NULL) {
		while (root->rn != NULL) {
			printf("%d\n", root->age);
			root = root->rn;
		}
		printf("%d\n", root->age);
	}
}

int main(void) {
	struct Student *root = NULL;
	root = push(root, 10);
	//root = push(root, 20);
	display(root);
	root = pop(root);
	display(root);

}
