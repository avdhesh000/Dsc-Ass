// 9.	W.A.P in C to PUSH more than 1 element in a stack.

//  Program to (PUSH) enter and print element of stack

#include <stdio.h>
# define MAX 5
int main() 
{
    int element, tos=3,  i;
    int stack[MAX];
   for(i=0;i<=MAX-1;i++)
    {
    if(tos==MAX-1)
    {
        printf("Stack is OVERFLOW\n");
         break;
    }
    else
    {
        printf("Enter the %d element to Push:\t",(i+1));
        
        scanf("%d",&element);
        printf("\n");
        tos=tos+1;
        stack[tos]=element;
        }
         
    }
    
    printf("\nTraversing the stack:\n");
    for(i=4;i>=0;i--)
    {
        printf("%d\n",stack[i],i);
    }
    
    


    return 0;
}