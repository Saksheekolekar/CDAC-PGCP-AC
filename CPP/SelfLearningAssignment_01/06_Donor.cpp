#include <iostream>
#include <cstring>
using namespace std;

class Donor
{
public:
    int number;
    char name[50];
    int age;
    char address[100];
    char sex;
    char blood[5];

    void accept()
    {
        cout<<"Enter Donor Number: ";
        cin>>number;

        cout<<"Enter Name: ";
        cin>>name;

        cout<<"Enter Age: ";
        cin>>age;

        cout<<"Enter Address: ";
        cin>>address;

        cout<<"Enter Sex (M/F): ";
        cin>>sex;

        cout<<"Enter Blood Group: ";
        cin>>blood;
    }

    void display()
    {
        cout<<number<<" "<<name<<" "<<address<<endl;
    }
};

int main()
{
    Donor d[50];
    int n;

    cout<<"Enter number of donors: ";
    cin>>n;

    for(int i=0;i<n;i++)
        d[i].accept();

    cout<<"Donors with Blood Group O+\n";

    for(int i=0;i<n;i++)
        if(strcmp(d[i].blood,"O+")==0)
            d[i].display();

    return 0;
}
