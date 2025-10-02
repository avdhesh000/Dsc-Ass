//  2. W.A.P in C to create an 2 D array.


#include<stdio.h>
void main()
{
    int arr[3][4]={1,3,4,0,5,6,1,3,4,0,5,6};
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}