#include<iostream>
using namespace std;

class Student
{
    int rollNo;
    string name;

public:

    void accept()
    {
        cout<<"Enter RollNo: ";
        cin>>rollNo;

        cout<<"Enter Name: ";
        cin>>name;
    }

    void display()
    {
        cout<<rollNo<<" "<<name<<endl;
    }
};

void Accept(Student s[], int &count, int size)
{
    if(count<size)
    {
        s[count].accept();
        count++;
    }
    else
    {
        cout<<"Array Full\n";
    }
}

void Display(Student s[], int count)
{
    cout<<"\nStudent List\n";
    for(int i=0;i<count;i++)
        s[i].display();
}

int main()
{
    Student s[10];
    int count=0;
    int choice;

    do
    {
        cout<<"\n1.Add Student\n2.Display\n3.Exit\n";
        cin>>choice;

        if(choice==1)
            Accept(s,count,10);
        else if(choice==2)
            Display(s,count);

    }while(choice!=3);

    return 0;
}
