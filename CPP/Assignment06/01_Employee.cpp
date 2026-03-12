#include<iostream>
using namespace std;

struct Employee
{
    int empid;
    string name;
    float sal;
};

void print(Employee e[], int n)
{
    cout<<"\nEmployee List\n";
    for(int i=0;i<n;i++)
    {
        cout<<e[i].empid<<" "<<e[i].name<<" "<<e[i].sal<<endl;
    }
}

void sortSalary(Employee e[], int n, int choice)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(choice==1) // ascending
            {
                if(e[i].sal > e[j].sal)
                {
                    Employee temp=e[i];
                    e[i]=e[j];
                    e[j]=temp;
                }
            }
            else // descending
            {
                if(e[i].sal < e[j].sal)
                {
                    Employee temp=e[i];
                    e[i]=e[j];
                    e[j]=temp;
                }
            }
        }
    }
}

int main()
{
    int n,choice;

    cout<<"Enter number of employees: ";
    cin>>n;

    Employee e[n];

    for(int i=0;i<n;i++)
    {
        cout<<"Enter EmpID Name Salary: ";
        cin>>e[i].empid>>e[i].name>>e[i].sal;
    }

    cout<<"1. Ascending\n2. Descending\n";
    cout<<"Enter choice: ";
    cin>>choice;

    sortSalary(e,n,choice);

    print(e,n);

    return 0;
}
