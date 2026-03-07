#include <iostream>
using namespace std;

void oddEven(int n)
{
    if(n%2==0)
        cout<<"Even Number\n";
    else
        cout<<"Odd Number\n";
}

void posNeg(int n)
{
    if(n>=0)
        cout<<"Positive Number\n";
    else
        cout<<"Negative Number\n";
}

int main()
{
    int num,choice;

    cout<<"Enter Number: ";
    cin>>num;

    cout<<"1 Prime or not\n2 Odd or Even\n3 Positive or Negative\n4 Exit\n";

    cin>>choice;

    switch(choice)
    {
        case 2: oddEven(num); break;
        case 3: posNeg(num); break;
        case 4: break;
        default: cout<<"Invalid choice";
    }

    return 0;
}
