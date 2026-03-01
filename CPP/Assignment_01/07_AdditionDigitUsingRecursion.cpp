#include <iostream>
using namespace std;
//recurssive function for sum of digits
int sumDigitsRec(int num) {
    if(num == 0) return 0;
    return (num % 10) + sumDigitsRec(num / 10);
}

int main() {
    int n;
    cout << "Enter 4-digit number: ";
    cin >> n;
    cout << "Sum of digits (recursion) = " << sumDigitsRec(n) << endl;
    return 0;
}
