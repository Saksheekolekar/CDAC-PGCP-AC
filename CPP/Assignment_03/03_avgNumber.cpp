#include <iostream>
using namespace std;
//Function to find average of number
double findAverage(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    return (double)sum / n;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << "Average: " << findAverage(arr, n) << endl;
    return 0;
}
