#include <stdio.h>
#include <limits.h>

int capacity = 50;
int top = -1;

// Stack is full when top is equal to the last index
int isFull()
{
    return top == capacity - 1;
}

// Stack is empty when top is equal to -1
int isEmpty()
{
    return top == -1;
}

// Function to add an item to stack.  It increases top by 1
void push(int *stack, int data)
{
    if (isFull())
        return;
    stack[++top] = data;
    printf("%d pushed to stack\n", data);
}

// Function to remove an item from stack.  It decreases top by 1
int pop(int *stack)
{
    if (isEmpty())
        return INT_MIN;
    return stack[top--];
}

// Function to get top item from stack
int peek(int *stack)
{
    if (isEmpty())
        return INT_MIN;
    return stack[top];
}

// Driver program to test above functions
int main()
{
    int stack[capacity];

    push(stack, 1);
    push(stack, 5);
    push(stack, 7);

    printf("%d popped from stack\n", pop(stack));

    printf("Top item is %d\n", peek(stack));

    return 0;
}