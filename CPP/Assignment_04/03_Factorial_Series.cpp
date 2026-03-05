#include <iostream>
using namespace std;

int factorial(int n) {
    if(n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

void factorialSeries(int n) {
    for(int i = 1; i <= n; i++) {
        cout << factorial(i) << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter limit: ";
    cin >> n;

    factorialSeries(n);
    return 0;
}
