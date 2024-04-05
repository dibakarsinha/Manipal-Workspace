
#include <stdio.h>
#include <stdlib.h>
struct Node{
	int data;
	struct Node * next;
};

void traversal(struct Node *a) {
	while (a->next != NULL) {
		printf("%d", a->data);
		a = a->next;
	}
	printf("%d\n", a->data);
}

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	struct Node *head=(struct Node*)malloc(sizeof(struct Node));
	struct Node *a=(struct Node*)malloc(sizeof(struct Node));
	struct Node *b=(struct Node*)malloc(sizeof(struct Node));
	struct Node *c=(struct Node*)malloc(sizeof(struct Node));
	a->data=10;
	b->data=20;
	c->data=30;
	a->next=b;
	b->next=c;
	c->next=NULL;
	head=a;
	struct Node *prev=NULL;
	printf("forward traversing\n");
	traversal(a);
	a=head;
	printf("reverse traversing\n");
		while(a!=NULL){
		while(a->next!=NULL){
			prev=a;
			a=a->next;
		}
		printf("%d\n",a->data);
		prev->next=NULL;
		a=head;
		if(prev==a)
			break;
	}
		printf("%d\n",prev->data);
	return EXIT_SUCCESS;
}
