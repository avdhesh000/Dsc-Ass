// 9. W.A.P in C to PUSH more than 1 element in a stack.

#include<iostream>
# define max 5
using namespace std;

int main()
{
    int i,element;
    int stack[max]; int tos=-1;


    // Input
    cout<<"Enter 5 elements for Stack :"<<endl;
  


    // LOGIC TO ENTER MORE THAN ONE ELEMENT
    
        if(tos>=max-1)
        {
            cout<<"Overflow"<<endl;
            exit;
        }
        for(i=0;i<max;i++)
    {
        
        cin>>element;              // to take INPUT 
        

        if(tos<max-1)               
        {
            tos=tos+1;
            stack[tos]=element;
        }
    }

    // Printing the Stack elements
    cout<<"Stack elements are :"<<endl;
    for(i=max-1;i>=0;i--)
    {
        cout<<stack[i]<<endl;
    }

    
return 0;
}