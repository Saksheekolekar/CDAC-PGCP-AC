#include <iostream>
using namespace std;
//Program for Checking characters Case
int main()
{
    char ch;
    cout << "Enter Character:" << endl;
    cin >> ch;
    if (ch <= 'a' && ch >= 'z')
        cout << "Character Is Lower Case" << endl;
    else if (ch <= 'A' && ch >= 'Z')
        cout << "Character Is Upper Case" << endl;
    else
        cout << "Character Is not Alphabet" << endl;
    return 0;
}