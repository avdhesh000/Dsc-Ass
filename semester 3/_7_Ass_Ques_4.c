//  4. W.A.P in C to delete an element from array.


#include<stdio.h>
void main()
{
    int arr[5]={10,23,43,55,65};    
    int i,element;

    printf("Elements in an array are :\t");
    for(i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }

    printf("\nEnter the element you want to delete :\t");
    scanf("%d",&element);

    for(i=0;i<5;i++)
    {
        if(arr[i]==element)
        {
            arr[i]=0;
        }
    }

    printf("After deletion elements in array are :\t");
    for(i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
}