//  10.	W.A.P in C to PUSH 5th element in a stack of having 4 elements. 

// Valid if we need to add 5th element by thinking that stack is of 5 element itself


#include<stdio.h>
# define MAX 5
void main()
{
    int stack[MAX]={24,54,78,12};
    int element,i,tos=3;

    printf("Current elements in Stack are :\n");
    for(i=MAX-1;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }

    printf("Enter the 5th element :\t");
    scanf("%d",&element);

    for(i=0;i<MAX;i++)
    { 
        if(tos==(MAX-1))
        {
            printf("\n Stack is OVERFLOW\n");
            break;
        }
        else
        {
            tos=tos+1;
            stack[tos]=element;
        }
    }

    printf("\nStack after adding 5th element is :\n");
    for(i=MAX-1;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }


}



// //  10.	W.A.P in C to PUSH 5th element in a stack of having 4 elements. 

// // Valid if stack will overflow

// #include<stdio.h>
// # define MAX 4
// void main()
// {
//     int stack[MAX]={24,54,78,13};
//     int element,i,tos=3;

//     printf("Current elements in Stack are :\n");
//     for(i=MAX-1;i>=0;i--)
//     {
//         printf("%d\n",stack[i]);
//     }

//     printf("Enter the 5th element :\t");
//     scanf("%d",&element);

//     for(i=0;i<MAX;i++)
//     { 
//         if(tos==(MAX-1))
//         {
//             printf("\n Stack is OVERFLOW\n");
//             break;
//         }
//         else
//         {
//             tos=tos+1;
//             stack[tos]=element;
//         }
//     }

//     printf("\nStack after adding 5th element is :\n");
//     for(i=MAX-1;i>=0;i--)
//     {
//         printf("%d\n",stack[i]);
//     }


// }
