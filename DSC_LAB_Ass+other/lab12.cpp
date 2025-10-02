// 12. W.A.P in C for traversing in a stack.

#include<iostream>
# define max 5
using namespace std;

int main()
{
    int stack[max]={50,40,30,20,10};
    int tos=max-1;
    int i;

    cout<<"Traversing the stack from top to bottom:"<<endl;
    if(tos<0)
    {
        cout<<"Stack is empty."<<endl;
    }
    else 
    {
        for(i=tos;i>=0;i--)
        {
            cout<<stack[i]<<endl;
        }
    }
    return 0;
}