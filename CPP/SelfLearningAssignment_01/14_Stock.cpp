#include <iostream>
using namespace std;

class Stock
{
private:
    int code;
    int qty;
    float price;

public:

    void set(int c,int q,float p)
    {
        code=c;
        qty=q;
        price=p;
    }

    void purchase(int q)
    {
        qty = qty + q;
    }

    void sell(int q)
    {
        if(qty>=q)
            qty = qty - q;
        else
            cout<<"Not enough stock\n";
    }

    void display()
    {
        cout<<"Item Code: "<<code<<endl;
        cout<<"Quantity: "<<qty<<endl;
        cout<<"Price: "<<price<<endl;
    }
};

int main()
{
    Stock s;

    s.set(101,50,100);

    s.purchase(20);
    s.sell(10);

    s.display();

    return 0;
}
