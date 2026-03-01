#include <iostream>
using namespace std;
//Recursive Function for Running Sum
int runningSum(int num)
{
    if (num == 0)
        return 0;
    return num + runningSum(num);
}
int main()
{

    int num;
    cout << "Enter Number :" << endl;
    cin >> num;
    cout << " Running Sum is :" << runningSum(num);
    return 0;
}