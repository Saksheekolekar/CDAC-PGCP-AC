#include <iostream>
using namespace std;
//multiply given numbers array by 2
void multiplyByTwo(int arr[], int n) {
    for (int i = 0; i < n; i++) arr[i] *= 2;
    cout << "Result: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    multiplyByTwo(arr, n);
    return 0;
}
