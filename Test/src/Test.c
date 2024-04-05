#include <stdio.h>
#include <stdlib.h>
struct Node {
	int data;
	struct Node *lnext;
	struct Node *rnext;
};
int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	struct Node *a = (struct Node*) malloc(sizeof(struct Node));
	struct Node *b = (struct Node*) malloc(sizeof(struct Node));
	struct Node *c = (struct Node*) malloc(sizeof(struct Node));
	a->lnext = NULL;
	a->rnext = b;
	b->lnext = a;
	b->rnext = c;
	c->lnext = b;
	c->rnext = NULL;
	a->data = 10;
	b->data = 20;
	c->data = 30;

	/*while (a->rnext != NULL) {
	 printf("%d\n", a->data);
	 a = a->rnext;
	 }
	 printf("%d\n", a->data);*/

	struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));
	/*printf("enter choice\n");
	int ch;
	scanf("%d", &ch);*/
	int ch=2;
	if (ch == 1) {
		newNode->data = 40;
		newNode->lnext = NULL;
		newNode->rnext = a;
		/*while (newNode->rnext != NULL) {
		 printf("%d\n", newNode->data);
		 newNode = newNode->rnext;
		 }
		 printf("%d\n", newNode->data);*/
	}
	if (ch == 3) {
		newNode->data = 40;
		newNode->lnext = c;
		newNode->rnext = NULL;
		c->rnext=newNode;
		while (a->rnext != NULL) {
			printf("%d\n", a->data);
			a = a->rnext;
		}
		printf("%d\n", a->data);
	} else {
		struct Node *head = a;
//		printf("enter your position");
//		scanf("%d\n", &pos);
		int pos=2;
		for (int i = 0; i < pos - 1; i++) {
			head = head->rnext;
		}
		(head->lnext)->rnext = newNode;
		head->lnext = newNode;
		newNode->lnext=head->lnext;
		newNode->rnext=head;
		newNode->data=50;

		while (a->rnext != NULL) {
			printf("%d\n", a->data);
			a = a->rnext;
		}
		printf("%d\n", a->data);

	}

}
