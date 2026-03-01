#include <iostream>
using namespace std;
//sum of digits using loop
int sumDigitsLoop(int num) {
    int sum = 0;
    while(num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter 4-digit number: ";
    cin >> n;
    cout << "Sum of digits (loop) = " << sumDigitsLoop(n) << endl;
    return 0;
}
