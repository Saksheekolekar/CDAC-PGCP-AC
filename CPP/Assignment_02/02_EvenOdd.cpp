#include <iostream>
using namespace std;
//function for checking Number Is Even Or Odd Using Bitwise Operator
int main()
{
    int num;
    cout << "Enter Number To Check:" << endl;
    cin >> num;
    if ((num & 1) == 0)
        cout << "Number Is Even" << endl;
    else
        cout << "Number is Odd";
    return 0;
}