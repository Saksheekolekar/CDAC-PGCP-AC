#include<iostream>
using namespace std;

class Account
{
protected:
    string fname,lname,mobile,email;

public:
    void acceptHolder()
    {
        cout<<"Enter First Name: ";
        cin>>fname;

        cout<<"Enter Last Name: ";
        cin>>lname;

        cout<<"Enter Mobile: ";
        cin>>mobile;

        cout<<"Enter Email: ";
        cin>>email;
    }

    void displayHolder()
    {
        cout<<fname<<" "<<lname<<" "<<mobile<<" "<<email<<endl;
    }
};
