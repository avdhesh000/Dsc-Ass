// 8. W.A.P in C to implement the concept of PUSH operation in stack.
#include<iostream>
# define max 5
using namespace std;

int main()
{
    int element,i;
    int stack[max], tos=-1;
    cout<<"Enter the element to insert:\t";
    cin>>element;

    if(tos>=max-1)
    {
        cout<<"Overflow"<<endl;
        exit;
    }
    else
    {
        tos=tos+1;
        stack[tos]=element;
    }

    cout<<"The stack after PUSH Operation is :"<<endl;
    for(i=tos;i>=0;i--)
    {
        cout<<stack[i]<<endl;
    }
return 0;
}
