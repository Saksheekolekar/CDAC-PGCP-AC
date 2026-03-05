#include <iostream>
using namespace std;

void sortArray(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void averageArray(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    cout << "Average: " << (float)sum / n << endl;
}

void multiplyArray(int arr[], int n)
{
    cout << "Array after multiplying by 2: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] * 2 << " ";
    cout << endl;
}

int main()
{
    int choice, n;
    do
    {
        cout << "\nMenu:\n";
        cout << "1. Accept n numbers and sort\n";
        cout << "2. Accept n characters and print as string\n";
        cout << "3. Find average of n numbers\n";
        cout << "4. Multiply each number by 2\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << "Enter n: ";
            cin >> n;
            int *arr = new int[n];
            cout << "Enter numbers: ";
            for (int i = 0; i < n; i++)
                cin >> arr[i];
            sortArray(arr, n);
            delete[] arr;
            break;
        }
        case 2:
        {
            cout << "Enter n: ";
            cin >> n;
            char *arr = new char[n + 1];
            cout << "Enter characters: ";
            for (int i = 0; i < n; i++)
                cin >> arr[i];
            arr[n] = '\0';
            cout << "String: " << arr << endl;
            delete[] arr;
            break;
        }
        case 3:
        {
            cout << "Enter n: ";
            cin >> n;
            int *arr = new int[n];
            cout << "Enter numbers: ";
            for (int i = 0; i < n; i++)
                cin >> arr[i];
            averageArray(arr, n);
            delete[] arr;
            break;
        }
        case 4:
        {
            cout << "Enter n: ";
            cin >> n;
            int *arr = new int[n];
            cout << "Enter numbers: ";
            for (int i = 0; i < n; i++)
                cin >> arr[i];
            multiplyArray(arr, n);
            delete[] arr;
            break;
        }
        }
    } while (choice != 5);

    return 0;
}
