#include <iostream>
using namespace std;

class Student
{
public:
    int rollNo;
    char name[50];

    void Accept()
    {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cin.ignore();
        cout << "Enter Name: ";
        cin.getline(name, 50);
    }

    void Display()
    {
        cout << "Roll No: " << rollNo << ", Name: " << name << endl;
    }
};

int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student students[n];
    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << ":\n";
        students[i].Accept();
    }

    cout << "\n--- Student Data ---\n";
    for (int i = 0; i < n; i++)
    {
        students[i].Display();
    }
    return 0;
}
