// 2. W.A.P in C to create an 2 D array.

#include<iostream>
int main()
{
    using namespace std;
    int arr[2][3]={2,3,4,5,0,3};
    int i,j;



    cout<<"The 2D array elements are :"<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
        cout<<arr[i][j]<<"\t";
        }
        cout<<endl;;
    }

    return 0;
}