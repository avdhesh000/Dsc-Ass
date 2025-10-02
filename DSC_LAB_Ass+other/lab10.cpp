// 10. W.A.P in C to PUSH 5th element in a stack of having 4 elements. 

#include<iostream>
#define max 5
using namespace std;
int main()
{
    int stack[max]={11,21,32,49};
    int i, element, tos = 3;

    // Printing initial stack 
    cout<<"Stack elements are :"<<endl;
    for(i=max-2;i>=0;i--)
    {
        cout<<stack[i]<<endl;
    }

    // Logic of PUSH
    if(tos>=max-1)
    {
        cout<<"OVERFLOW"<<endl;
    }
    
    cout<<"Enter the 5th element:\t";
    cin>>element;       // Input 5th element

    if(tos<max-1)
    {
        tos=tos+1;
        stack[tos]=element;
    }

    // Printing the Stack elements
    cout<<"Final Stack elements are :"<<endl;
    for(i=max-1;i>=0;i--)
    {
        cout<<stack[i]<<endl;
    }
    return 0;
}