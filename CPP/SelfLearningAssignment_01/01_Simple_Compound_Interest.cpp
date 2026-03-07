#include <iostream>
using namespace std;

int main()
{
    float P, R, T;
    float SI, CI;
    float amount = 1;

    cout << "Enter Principal: ";
    cin >> P;

    cout << "Enter Rate: ";
    cin >> R;

    cout << "Enter Time: ";
    cin >> T;

    // Simple Interest
    SI = (P * R * T) / 100;

    // Calculate (1 + R/100)^T manually
    float base = 1 + R / 100;

    for(int i = 0; i < T; i++)
    {
        amount = amount * base;
    }

    CI = P * amount - P;

    cout << "Simple Interest = " << SI << endl;
    cout << "Compound Interest = " << CI << endl;

    return 0;
}
