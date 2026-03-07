#include "Mobile.h"
#include <cstring>

MobilePhone::MobilePhone()
{
    price=0;
    quantity=0;
    modelNo[0]='\0';
    manufacturer[0]='\0';
}

MobilePhone::MobilePhone(char m[],float p,char man[],int q)
{
    price=p;
    quantity=q;

    strcpy(modelNo,m);
    strcpy(manufacturer,man);
}

void MobilePhone::accept()
{
    cout<<"Enter Model No: ";
    cin>>modelNo;

    cout<<"Enter Manufacturer: ";
    cin>>manufacturer;

    cout<<"Enter Price: ";
    cin>>price;

    cout<<"Enter Quantity: ";
    cin>>quantity;
}

void MobilePhone::display()
{
    cout<<"\nModel No: "<<modelNo;
    cout<<"\nManufacturer: "<<manufacturer;
    cout<<"\nPrice: "<<price;
    cout<<"\nQuantity: "<<quantity<<endl;
}

bool MobilePhone::searchModel(char m[])
{
    if(strcmp(modelNo,m)==0)
        return true;
    else
        return false;
}

int MobilePhone::getQuantity()
{
    return quantity;
}
