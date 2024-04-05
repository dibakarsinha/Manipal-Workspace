#include <stdio.h>

// Define the maximum number of terms in the Fibonacci series
#define MAX_TERMS 20

// Define a structure to represent the stack
struct Stack {
    int items[MAX_TERMS];
    int top;
};

// Function to initialize the stack
void initialize(struct Stack *s) {
    s->top = -1;
}

// Function to push an item onto the stack
void push(struct Stack *s, int value) {
    if (s->top == MAX_TERMS - 1) {
        printf("Stack overflow\n");
    } else {
        s->items[++(s->top)] = value;
    }
}

// Function to pop an item from the stack
int pop(struct Stack *s) {
    if (s->top == -1) {
        printf("Stack underflow\n");
        return -1;
    } else {
        return s->items[(s->top)--];
    }
}

// Function to calculate the Fibonacci series using a stack
void fibonacciWithStack(int n) {
    struct Stack stack;
    initialize(&stack);

    printf("Fibonacci Series (using Stack) for %d terms:\n", n);

    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            push(&stack, i);
        } else {
            int a = pop(&stack);
            int b = pop(&stack);
            int next = a + b;
            push(&stack, b);
            push(&stack, next);
        }
        printf("%d ", stack.items[stack.top]);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    fibonacciWithStack(n);

    return 0;
}
