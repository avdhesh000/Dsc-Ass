// 5. W.A.P in C for traversing in an array.
#include<iostream>
using namespace std;
int main()
{
    int i;
    int arr[5];

    // Input
    cout<<"Enter the 5 numbers:"<<endl;
    for(i=0;i<5;i++)
    {
    cin>>arr[i];
    }

    // Traversing and displaying numbers
    cout<<"OUTPUT:"<<endl;
    cout<<"The array elements are as:\t";
    for(i=0;i<5;i++)
    {
    cout<<arr[i]<<"\t";
    }

    return 0;
}