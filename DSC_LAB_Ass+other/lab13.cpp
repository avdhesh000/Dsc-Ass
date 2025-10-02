// 13. W.A.P in C for (push, pop & traversing) in a stack without using function.

#include <iostream>
#define max 5
using namespace std;

int main()
{
    int stack[max];
    int tos = -1;
    int i, num_push, num_pop, ask;

    // Ask how many elements to PUSH
    cout << "Stack limit: 5 elements:" << endl;
    cout << "Enter number of elements to PUSH:\t";
    cin >> num_push;

    if (num_push > 5)
    {
        cout << "Sorry, but your Stack limit is 5";
        return 0; 
    }

    // Ask elements to Insert and perform PUSH Operation.
    cout << "Enter the elements to PUSH in Stack:" << endl;
    for (i = 0; i < num_push; i++)
    {
        if (tos >= (max - 1))
        {
            cout << "Overflow! Stack is full." << endl;
            break;
        }
        else
        {
            tos = tos + 1;
            cin >> stack[tos];
        }
    }

    // Printing Stack after PUSH operation
    cout << "Stack elements are :" << endl;
    for (i = num_push - 1; i >= 0; i--)
    {
        cout << stack[i] << endl;
    }

    // Ask user if they want to continue POP operation.
    cout << "Would you like to continue POP operation? (1 = Yes, 0 = No):\t";
    cin >> ask;

    if (ask == 1)
    {
        cout << endl;

        // Ask how many elements to POP
        cout << "Stack limit: " << num_push << " elements:" << endl;
        cout << "Enter number of elements to POP:\t";
        cin >> num_pop;

        // Perform POP Operation.
        for (i = num_pop - 1; i >= 0; i--)
        {
            if (tos < 0)
            {
                cout << "Underflow! Stack is empty." << endl;
                break;
            }
            else
            {
                cout << "Popped element: " << stack[tos] << endl;
                tos = tos - 1;
            }
        }

        // Stack after POP Operation
        cout << "Traversing the stack from top to bottom:" << endl;
        if (tos < 0)
        {
            cout << "Stack is empty." << endl;
        }
        else
        {
            for (i = tos; i >= 0; i--)
            {
                cout << stack[i] << endl;
            }
        }
    }
    else
    {
        return 0;
    }

    return 0;
}
