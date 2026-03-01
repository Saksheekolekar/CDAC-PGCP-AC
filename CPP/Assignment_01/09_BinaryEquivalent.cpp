#include <iostream>
using namespace std;

void toBinary(int n) {
    if(n == 0) return;
    toBinary(n / 2);
    cout << n % 2;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Binary equivalent: ";
    if(num == 0) cout << 0;
    else toBinary(num);
    cout << endl;
    return 0;
}