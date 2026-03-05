#include <iostream>
using namespace std;
//function for finding max among number
void findMinMax(int arr[], int n) {
    // First sort manually
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout << "Min: " << arr[0] << endl;
    cout << "Second Min: " << arr[1] << endl;
    cout << "Max: " << arr[n-1] << endl;
    cout << "Second Max: " << arr[n-2] << endl;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    findMinMax(arr, n);
    return 0;
}
