// 11. W.A.P in C to implement the concept of POP operation of stack.

#include<iostream>
# define max 5
using namespace std;

int main()
{
    int stack[max]={11,12,13,14,15};
    int tos=max-1, i,num;
    

    // Printing initial stack 
    cout<<"Stack elements are :"<<endl;
    for(i=tos;i>=0;i--)
    {
      cout<<stack[i]<<endl;
    }

    // Ask how many elements to POP
    cout<<"Enter how many elements you want to remove :\t";
    cin>>num;
    
    for(i=max-1;i>=(max-num);i--)
    {

    // Perform POP operation
      if(tos==-1 || tos<0)
      {
      cout<<"Stack UNDERFLOW! Cannot pop more elements.\n"<<endl;
      break;
      }
      else if(tos>=0)
      {
      cout << "Popped element: " << stack[tos] << endl;
      tos=tos-1;
      }
     }

     // Stack after POP Operation
     cout << "\nStack after POP operation:\n";
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