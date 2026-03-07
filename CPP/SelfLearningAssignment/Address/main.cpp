#include "Address.h"

int main()
{
    Address a1,a2;

    cout<<"Enter Address 1\n";
    a1.accept();

    cout<<"\nEnter Address 2\n";
    a2.accept();

    cout<<"\nAddress 1";
    a1.display();

    cout<<"\nAddress 2";
    a2.display();

    if(a1==a2)
        cout<<"\nAddresses are SAME";
    else
        cout<<"\nAddresses are DIFFERENT";

    return 0;
}
