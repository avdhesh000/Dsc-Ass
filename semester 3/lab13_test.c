// Function declarations
int input_push();
int input_pop();
void push(int z);
void pop(int z);
void print_push();
void print_pop();
int ask_continue();

#include <stdio.h>
#define MAX 5

int stack[MAX];
int tos = -1;
int i;

int main() {
    int z;
    int choice;

    // PUSH operation
    z = input_push();
    push(z);
    print_push();

    // Ask if user wants to continue with POP operation
    choice = ask_continue();

    // If user chooses Yes (1), start POP loop
    while(choice == 1) {
        z = input_pop();
        pop(z);
        print_pop();
        choice = ask_continue();
    }

    printf("\nExiting the program.\n");

    return 0;
}

int input_push() {
    int num;
    printf("Enter number of elements to PUSH: ");
    scanf("%d", &num);
    return num;
}

int input_pop() {
    int num;
    printf("Enter number of elements to POP: ");
    scanf("%d", &num);
    return num;
}

void push(int z) {
    int element;
    printf("Enter the elements to PUSH:\n");

    for(i = 0; i < z; i++) {
        if(tos >= MAX - 1) {
            printf("Overflow! Stack is full.\n");
            break;
        } else {
            printf("Enter element %d: ", i + 1);
            scanf("%d", &element);
            tos++;
            stack[tos] = element;
        }
    }
}

void print_push() {
    printf("\nStack elements after PUSH operation OR ");
    printf("Traversing the stack from top to bottom:\n");
    if(tos < 0) {
        printf("Stack is empty.\n");
    } else {
        for(i = tos; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

void pop(int z) {
    printf("\nPerforming POP operation:\n");
    for(i = 0; i < z; i++) {
        if(tos < 0) {
            printf("Underflow! Stack is empty.\n");
            break;
        } else {
            printf("Popped element: %d\n", stack[tos]);
            tos--;
        }
    }
}

void print_pop() {
    printf("\nStack elements after POP operation OR ");
    printf("Traversing the stack from top to bottom:\n");
    if(tos < 0) {
        printf("Stack is empty.\n");
    } else {
        for(i = tos; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int ask_continue() {
    int choice;
    printf("\nDo you want to continue POP operation? (1 = Yes, 0 = No): ");
    scanf("%d", &choice);
    return choice;
}
