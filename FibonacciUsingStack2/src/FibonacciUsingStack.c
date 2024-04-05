#include <stdio.h>

// Define the maximum number of terms in the Fibonacci series
#define MAX_TERMS 20
int top=-1;
int items[MAX_TERMS];

// Define a structure to represent the stack

// Function to initialize the stack

// Function to push an item onto the stack
void push(int value) {
    if (top == MAX_TERMS - 1) {
        printf("Stack overflow\n");
    } else {
        items[++top] = value;
    }
}

// Function to pop an item from the stack
int pop() {
    if (top == -1) {
        printf("Stack underflow\n");
        return -1;
    } else {
        return items[top--];
    }
}

// Function to calculate the Fibonacci series using a stack
void fibonacciWithStack(int n) {

    printf("Fibonacci Series for %d terms:\n", n);

    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            push(i);
        } else {
            int a = pop();
            int b = pop();
            int next = a + b;
            push(b);
            push(next);
        }
        printf("%d ", items[top]);
    }
    printf("\n");
}

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);
	int n;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    fibonacciWithStack(n);

    return 0;
}
