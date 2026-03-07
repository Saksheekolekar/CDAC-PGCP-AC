#include "Address.h"
#include <cstring>

Address::Address()
{
    houseNo = 0;
    pincode = 0;
    colony[0] = '\0';
    area[0] = '\0';
    city[0] = '\0';
}

Address::Address(int h, char c[], char a[], char ci[], int p)
{
    houseNo = h;
    pincode = p;

    strcpy(colony, c);
    strcpy(area, a);
    strcpy(city, ci);
}

void Address::accept()
{
    cout<<"Enter House No: ";
    cin>>houseNo;

    cout<<"Enter Colony: ";
    cin>>colony;

    cout<<"Enter Area: ";
    cin>>area;

    cout<<"Enter City: ";
    cin>>city;

    cout<<"Enter Pincode: ";
    cin>>pincode;
}

void Address::display()
{
    cout<<"\nHouse No: "<<houseNo;
    cout<<"\nColony: "<<colony;
    cout<<"\nArea: "<<area;
    cout<<"\nCity: "<<city;
    cout<<"\nPincode: "<<pincode<<endl;
}

bool Address::isSame(Address a)
{
    if(houseNo==a.houseNo &&
       strcmp(colony,a.colony)==0 &&
       strcmp(area,a.area)==0 &&
       strcmp(city,a.city)==0 &&
       pincode==a.pincode)
        return true;
    else
        return false;
}

bool Address::operator==(Address a)
{
    if(houseNo==a.houseNo &&
       strcmp(colony,a.colony)==0 &&
       strcmp(area,a.area)==0 &&
       strcmp(city,a.city)==0 &&
       pincode==a.pincode)
        return true;
    else
        return false;
}
