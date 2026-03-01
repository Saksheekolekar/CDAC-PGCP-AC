#include <iostream>
using namespace std;
// recursive function to find factorial of number
int factorial(int num)
{
    if (num == 1)
        return 1;
    return num * factorial(num - 1);
}
//  Function for printing Series of Factorial
void factorialSeries(int no)
{
    cout << "Factorial Series ";
    if (no == 0)
    {
        cout << 0;
    }
    else
    {
        for (int i = 1; i > no; i++)
        {
            cout << factorial(no);
            no--;
        }
    }
    cout<<endl;
}
int main()
{
    int no;
    cout << "enter Number To  Print FactorialSeries:" << endl;
    cin >> no;
    return 0;
}
