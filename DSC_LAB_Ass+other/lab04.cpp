// 4.	W.A.P in C to delete an element from array.	

#include<iostream>
int main()
{
    using namespace std;
    int n=8;
    int arr[n]={2,3,4,5,6,7,8,9};
    int i,pos;

    cout<<"The array elements are :"<<endl;         // Print Initial Array
    for(i=0;i<n;i++)
    {
    cout<<arr[i]<<" ";
    }

    cout<<endl;

    cout<<"Enter the position of element you want to delete :"<<endl;     // Input Position of element
    cin>>pos;

    for(i=pos-1;i<n-1;i++)                           // overwrite element at that position
    {
        arr[i]=arr[i+1];
    }

    cout<<"The array elements are :"<<endl;           // print elements after overwriting
    for(i=0;i<n-1;i++)
    {
    cout<<arr[i]<<" ";
    }

    return 0;

}