#include <iostream>
using namespace std;
//Function For Counting Number Of Character We Are Searching For
int countChar(char arr[], int n, char search) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == search) count++;
    }
    return count;
}

int main() {
    int n;
    cout << "Enter number of characters: ";
    cin >> n;
    char arr[n];
    cout << "Enter characters: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    char search;
    cout << "Enter character to search: ";
    cin >> search;
    cout << search << " count is " << countChar(arr, n, search) << endl;
    return 0;
}
