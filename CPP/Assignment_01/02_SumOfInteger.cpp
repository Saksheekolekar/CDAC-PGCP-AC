#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Sum = " << a + b << endl;

    char c1, c2;
    cout << "Enter two characters: ";
    cin >> c1 >> c2;
    cout << "Sum of ASCII values = " << int(c1) + int(c2) << endl;

    return 0;
}
