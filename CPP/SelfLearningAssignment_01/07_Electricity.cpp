#include <iostream>
using namespace std;

int main()
{
    char name[50];
    int units;
    float bill = 0;

    cout<<"Enter User Name: ";
    cin>>name;

    cout<<"Enter Units Consumed: ";
    cin>>units;

    if(units <= 100)
    {
        bill = units * 5.5;
    }
    else if(units <= 300)
    {
        bill = (100 * 5.5) + (units - 100) * 7.25;
    }
    else
    {
        bill = (100 * 5.5) + (200 * 7.25) + (units - 300) * 8.75;
    }

    if(bill < 60)
        bill = 60;

    if(bill > 750)
        bill = bill + (bill * 0.10);

    cout<<"Name: "<<name<<endl;
    cout<<"Total Bill = "<<bill<<endl;

    return 0;
}
