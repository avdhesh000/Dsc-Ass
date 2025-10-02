// 1. W.A.P in C / C++ to create an array of 10 elements.
#include<iostream>
int main()
{
    using namespace std;
    int arr[10];
    int i;
    cout<<"Enter the 10 elements:"<<endl;
    for(i=0;i<10;i++)
    {
    cin>>arr[i];
    }

    cout<<"The array elements are :"<<endl;
    for(i=0;i<10;i++)
    {
    cout<<arr[i]<<"\t";
    }

    return 0;
}