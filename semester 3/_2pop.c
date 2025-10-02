// 11.	W.A.P in C to implement the concept of POP operation of stack.

// PUSH Program to enter and print a element in stack

#include <stdio.h>
# define MAX 5
int main() 
{
    int element=0, tos=4,  i, flag=0;
    int stack[MAX]={51,44,34,20,13};       // initilization of stack

    printf("\nStack before POP operation :\n");
    for(i=4;i>=0;i--)     // Why it runs even if increment of 'i' is done??????????????
    {
        printf("%d\n",stack[i]);
    }

   for(i=MAX-1;i>=-1;i--)
   {

    if(tos==-1)                 // condition to check if stack is Underflow
    {
    printf("\nStack is UNDERFLOW\n");
    break;
    }

    else
    {
       printf("\nType 1 to pop element from stack else 0 :\t");
       scanf("%d",&flag);

       if(flag == 1)
       {
        element=stack[tos];
        stack[tos]=0;
        tos=tos-1;
        printf("Element Poped is : %d\t",element);
       }

       else 
       {
        break;
       }
    }
}
    
printf("\nStack after POP operation is :\n");
    for(i=MAX-1;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
    
        // printf("\n Element inserted is %d\n",element);
    

//printf("")
    return 0;
}