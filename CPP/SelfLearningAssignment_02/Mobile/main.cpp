#include "Mobile.h"
#include <cstring>

int main()
{
    MobilePhone m[50];
    int count=0;
    int choice;
    char search[30];

    do
    {
        cout<<"\n1 Add Mobile";
        cout<<"\n2 Display Mobiles";
        cout<<"\n3 Find Quantity of Model";
        cout<<"\n4 Check Availability";
        cout<<"\n5 Exit";

        cout<<"\nEnter Choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                m[count].accept();
                count++;
                break;

            case 2:
                for(int i=0;i<count;i++)
                    m[i].display();
                break;

            case 3:
                cout<<"Enter Model: ";
                cin>>search;

                for(int i=0;i<count;i++)
                {
                    if(m[i].searchModel(search))
                        cout<<"Quantity: "<<m[i].getQuantity()<<endl;
                }
                break;

            case 4:
                cout<<"Enter Model: ";
                cin>>search;

                for(int i=0;i<count;i++)
                {
                    if(m[i].searchModel(search))
                        cout<<"Model Available"<<endl;
                }
                break;
        }

    }while(choice!=5);

    return 0;
}
