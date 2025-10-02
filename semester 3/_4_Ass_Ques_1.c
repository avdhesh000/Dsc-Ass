//    1. W.A.P in C / C++ to create an array of 10 elements.

// How to make a function program for the same?????????????????????


#include<stdio.h>
void main()
{
    int arr[10];
    int i;
    printf("Enter the 10 elements in an array :\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n10 elements in your array are :\t");
    for(i=0;i<10;i++)
    {
        printf("%d\t",arr[i]);
    }


}

