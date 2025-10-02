// 7. W.A.P in C to add two matrixes. 

#include<iostream>

using namespace std;

int add[2][1];

int main()
{
    int arr1[2][1]={2,4};
    int arr2[2][1]={3,4};
    int i,j;

    for(i=0;i<2;i++)
    {
        for(j=0;j<1;j++)
        {
            add[i][j]=arr1[i][j]+arr2[i][j];
            cout<<add[i][j]<<"\t";
        }
        cout<<endl;
    }
return 0;
}