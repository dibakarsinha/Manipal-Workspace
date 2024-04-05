
#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node *ln;
	struct Node *rn;
};
void traversePreorder(struct Node* root)
{
    if (root == NULL)
        return;
    printf(" %d ", root->data);
    traversePreorder(root->ln);
    traversePreorder(root->rn);
}
struct Node* createNode(int val)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->ln = NULL;
    newNode->rn = NULL;

    return (newNode);
}
int main(void) {
struct Node *root=createNode(10);
root->ln=createNode(20);
root->rn=createNode(30);
root->ln->ln=createNode(40);
root->ln->rn=createNode(50);
printf("\n The Preorder traversal of given binary tree is -\n");
    traversePreorder(root);
}
