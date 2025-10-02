// 9. W.A.P in C to PUSH more than 1 element in a stack.

#include <stdio.h>
#define SIZE 5   // Max size of stack

int stack[SIZE];
int top = -1;

// Function to push element
void push(int value) {
    if(top == SIZE - 1) {
        printf("Stack Overflow! Cannot push %d\n", value);
    } else {
        top++;
        stack[top] = value;
        printf("%d pushed into stack\n", value);
    }
}

// Function to display stack
void display() {
    int i;
    if(top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements:\n");
        for(i = 0; i <= top; i++) {
            printf("%d\n", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    // Pushing multiple elements
    int i,n[SIZE];
    for(i=0;i<SIZE;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<5;i++)
    {
        push(n[i]);
    }
    // push(10);
    // push(20);
    // push(30);
    display();

    return 0;
}
