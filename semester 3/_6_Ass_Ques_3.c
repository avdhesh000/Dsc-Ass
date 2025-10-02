//  3. W.A.P in C to insert an element in array.


#include<stdio.h>
void main()
{
    int arr[5];    // If only 4 elements are their in an array how to insert 5th element in it.
    int i;
    printf("Enter 5 elements:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Elements in an array are :\t");
    for(i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }

    

}