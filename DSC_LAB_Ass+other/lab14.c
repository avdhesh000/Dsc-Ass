// 14. W.A.P in C for insertion in a simple queue.

#include <stdio.h>
#define max 5

void main()
{
    int i, r = -1, f = -1, element, queue[max];

    for (i = 0; i < max; i++)
    {
        printf("Enter the %d element :\t",i+1);
        scanf("%d", &element);

        if (r >= max - 1)
        {
            printf("OVERFLOW!\n");
            break;
        }
        else
        {
            r = r + 1;
            queue[r] = element;
        }
        if (r == 0)
        {
            f = 0;
        }
    }

    printf("The final Queue after insertion is:\n");
    for (i = 0; i < max; i++)
    {
        printf("%d\t", queue[i]);
    }
}
