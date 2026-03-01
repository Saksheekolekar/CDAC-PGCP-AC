#include <iostream>
using namespace std;
//program for calculating compound interest
int main() {
    double P, R, T;

    cout << "Enter Principal, Rate(%), Time(years): ";
    cin >> P >> R >> T;

    double rate = 1 + (R / 100);
    double power = 1;

    // Manually calculate (1 + R/100)^T
    for (int i = 0; i < T; i++) {
        power = power * rate;
    }

    double CI = P * power - P;

    cout << "Compound Interest = " << CI << endl;

    return 0;
}
