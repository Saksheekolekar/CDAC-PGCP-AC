#include <iostream>
using namespace std;

int main()
{
    float a, b, result;
    char op;

    cout<<"Enter operand 1: ";
    cin>>a;

    cout<<"Enter operand 2: ";
    cin>>b;

    cout<<"Enter operation (+,-,*,/): ";
    cin>>op;

    switch(op)
    {
        case '+':
            result = a + b;
            break;

        case '-':
            result = a - b;
            break;

        case '*':
            result = a * b;
            break;

        case '/':
            result = a / b;
            break;

        default:
            cout<<"Invalid Operation";
            return 0;
    }

    cout<<"Result = "<<result;

    return 0;
}
    