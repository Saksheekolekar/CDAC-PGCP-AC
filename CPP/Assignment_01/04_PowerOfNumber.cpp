#include <iostream>
using namespace std;
//power of number
int main() {
    long long base, exp;
    long long result = 1;

    cout << "Enter base and exponent: ";
    cin >> base >> exp;

    for (int i = 0; i < exp; i++) {
        result = result * base;
    }

    cout << "Power = " << result << endl;

    return 0;
}
