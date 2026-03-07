#include <iostream>
using namespace std;

class Time
{
private:
    int h,m,s;

public:

    void accept()
    {
        cout<<"Enter Hours Minutes Seconds: ";
        cin>>h>>m>>s;
    }

    void addHours(int x)
    {
        h = h + x;
    }

    void addMinutes(int x)
    {
        m = m + x;

        if(m>=60)
        {
            h = h + m/60;
            m = m % 60;
        }
    }

    void addSeconds(int x)
    {
        s = s + x;

        if(s>=60)
        {
            m = m + s/60;
            s = s % 60;
        }
    }

    void display()
    {
        cout<<"Time = "<<h<<":"<<m<<":"<<s<<endl;
    }
};

int main()
{
    Time t;
    int choice,x;

    t.accept();

    cout<<"1 Add Hours\n2 Add Minutes\n3 Add Seconds\n";
    cin>>choice;

    cout<<"Enter value: ";
    cin>>x;

    if(choice==1)
        t.addHours(x);

    else if(choice==2)
        t.addMinutes(x);

    else
        t.addSeconds(x);

    t.display();

    return 0;
}
