// 8. W.A.P in C to implement the concept of PUSH operation in stack.


#include <stdio.h>
#define SIZE 5   // Max size of stack

int stack[SIZE];
int top = -1;   // Initially stack is empty

// Function to push element into stack
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
        printf("Stack elements: ");
        for(i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    // Push one element
    push(5);
    display();

    return 0;
}
