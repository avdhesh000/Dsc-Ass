//   6. W.A.P in C to multiply two matrixes. 

#include<stdio.h>
void main()
{
    int arr1[2][3]={2,1,4,0,2,1};
    int arr2[3][2]={1,0,0,2,1,3};
    int mul[2][2]={0,0,0,0};

    int i,j,k;

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<3;k++)
            {
                mul[i][j]+=arr1[i][k]*arr2[k][j];   
            }
            printf("%d\t",mul[i][j]);  
        }
        printf("\n");
    }
}