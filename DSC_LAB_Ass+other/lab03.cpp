// 3. W.A.P in C to insert an element in array.

#include<iostream>
int main()
{
    using namespace std;
    int arr[2][3];
    int i,j;

    cout<<"Enter the array elements :"<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
        cin>>arr[i][j];
        }
    }

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