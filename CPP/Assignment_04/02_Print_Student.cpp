#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    int students[n];
    cout << "Enter student roll numbers: ";
    for(int i = 0; i < n; i++) {
        cin >> students[i];
    }

    cout << "Student array: ";
    printArray(students, n);
    return 0;
}
