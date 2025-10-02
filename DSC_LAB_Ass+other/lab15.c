// //  15. W.A.P in C for deletion in a simple queue.

// #include <stdio.h>
// #include <stdlib.h>
// #define max 5

// int i, r = 4, f = 0, element;
// int queue[max] = {22, 23, 24, 25, 26};

// void dequeue();
// void display();

// void main()
// {
//     int choice;

//     while (1)
//     {
//         printf("Enter 1 for deletion\nEnter 2 to print\nEnter 3 to exit.");
//         printf("Enter your choice:\t");
//         scanf("%d", &choice);

//         switch (choice)
//         {
//         case 1:
//             dequeue();
//             break;
//         case 2:
//             display();
//             break;
//         case 3:
//             exit(0); // present in stdlib library
//             break;
//         default:
//             printf("\nWrong choice!!\n");
//         }
//     }
// }

// void display()
// {
//     printf("The Queue is :\t");
//     for (i = f; i <max; i++)
//     {
//         printf("%d\t", queue[i]);
//     }
// }

// void dequeue()
// {

//     if (f > r || f < 0)
//     {
//         printf("Underflow");
//         exit;
//     }
//     else
//     {
//         printf("Element deleted is :\t", queue[f]);
//         f = f + 1;
//     }
// }

#include <stdio.h>
#define max 5
int main()
{
    int i, r = 4, f = 0, num;
    int queue[max] = {22, 23, 24, 25, 26};

    printf("The initial Queue is :\t");
    for (i = 0; i <= r; i++)
    {
        printf("%d\t", queue[i]);
    }

    printf("\nEnter the number of elements to delete from queue:\t");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {

        if (f > r || f < 0) // no elements left
        {
            printf("\nUnderflow - Queue is empty!\n");
            break;
        }
        else
        {
            printf("\nElement %d deleted is :\t%d\n", i + 1, queue[f]);
            f = f + 1; // move front forward
        }
    }

    printf("\nThe final Queue after deletion is :\t");
    if (f > r)
    {
        printf("Empty\n");
    }
    else
    {

        for (i = f; i <= r; i++)
        {
            printf("%d\t", queue[i]);
        }
    }

    return 0;
}
