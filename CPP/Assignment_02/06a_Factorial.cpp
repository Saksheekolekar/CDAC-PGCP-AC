#include <iostream>
using namespace std;
// recursive function to find factorial of number
int factorial(int num)
{
    if (num == 1)
        return 1;
    return num * factorial(num - 1);
}

int main()
{
    int num;
    cout << "enter Number To Find Factorial Of Number:" << endl;
    cin >> num;
    cout << "Factorial Of " << num << "is" << factorial(num) << endl;

    return 0;
}