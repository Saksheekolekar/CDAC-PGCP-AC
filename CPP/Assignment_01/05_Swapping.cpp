#include <iostream>
using namespace std;
//swapping of two variables
void swapNumbers(int &x, int &y) {
    x = x+y;
    y = x-y;
    x=x-y;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    swapNumbers(a, b);
    cout << "After swap: a=" << a << " b=" << b << endl;
    return 0;
}
