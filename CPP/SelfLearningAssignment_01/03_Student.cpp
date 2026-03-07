#include <iostream>
using namespace std;

class Student
{
private:
    char name[50];
    int m1,m2,m3;

public:
    void accept()
    {
        cout<<"Enter Name: ";
        cin>>name;

        cout<<"Enter Marks 1: ";
        cin>>m1;

        cout<<"Enter Marks 2: ";
        cin>>m2;

        cout<<"Enter Marks 3: ";
        cin>>m3;
    }

    void result()
    {
        if(m1>=50 && m2>=50 && m3>=50)
            cout<<name<<" PASS\n";
        else
            cout<<name<<" FAIL\n";
    }
};

int main()
{
    int n;

    cout<<"Enter number of students: ";
    cin>>n;

    Student s[50];

    for(int i=0;i<n;i++)
        s[i].accept();

    for(int i=0;i<n;i++)
        s[i].result();

    return 0;
}
