
#include <stdio.h>
#include <stdlib.h>
struct Student {
	int age;
	struct Student *next;

};

int main(void) {
	int noOfNodes;
	struct Student *current = NULL;
	//struct Student a[noOfNodes];
	printf("Enter No of Nodes");
	scanf("%d", &noOfNodes);
	int nodeData[noOfNodes];
	for (int j = 0; j < noOfNodes; ++j) {
		scanf("%d", &nodeData[j]);
	}
	for (int i = 0; i < noOfNodes; i++) {
		struct Student *s = (struct Student*) malloc(sizeof(struct Student));

		s->age = nodeData[i];
		if (noOfNodes == 1)
			s->next = NULL;
		else {
			s->next = current;
			s = current;
		}
		current = s;
	}
	while (current->next != NULL) {
		printf("%d \n", current->age);
		current = current->next;
	}
	return 1;
}
