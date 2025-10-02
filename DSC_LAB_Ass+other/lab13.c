// 13. W.A.P in C for (push, pop & traversing) in a stack by using function.

#include <stdio.h>
#include <stdlib.h>
#define max 5

int stack[max];
int element, i, tos = -1;

void push();
void pop();
void display();

void main()
{
    int choice;
    while (1)
    {
        printf("Enter Your choice:\n 1 for push.\n 2 for pop.\n 3 for display.\n 4 for exit\n");
        printf("Enter your choice:\t");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:  
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);     // present in stdlib library
            break;
        default:
            printf("\nWrong choice!!\n");
        }
    }
}

void push()
{
    printf("Enter the element to PUSH :\n");
    for (i = 0; i < max; i++)
    {
        if (tos >= max - 1)
        {
            printf("Underflow!\n");
            break;
        }
        scanf("%d", &element);
        if (tos < max - 1)
        {
            tos = tos + 1;
            stack[tos] = element;
        }
    }
}

void pop()
{
    if (tos < 0)
    {
        printf("Underflow!\n");
    }
    else
    {
        printf("Popped elemnt is : %d\n", stack[tos]);
        tos = tos - 1;
    }
}

void display()
{
    printf("Your stack elements are :\n");
    for (i = tos; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
}