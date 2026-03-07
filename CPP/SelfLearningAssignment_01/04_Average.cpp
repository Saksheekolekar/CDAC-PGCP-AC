#include <iostream>
using namespace std;

int main()
{
    int marks[5];
    int sum=0,count=0;

    cout<<"Enter 5 marks\n";

    for(int i=0;i<5;i++)
    {
        cin>>marks[i];
        sum+=marks[i];

        if(marks[i] < 65)
            count++;
    }

    float avg = sum / 5.0;

    cout<<"Average = "<<avg<<endl;
    cout<<"Marks less than 65 = "<<count<<endl;

    return 0;
}
