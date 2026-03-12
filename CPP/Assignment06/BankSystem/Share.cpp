#include"Account.cpp"
class Share
{
public:
    string name;
    int shares;
    float buyPrice;
    string buyDate;
    float sellPrice;
    string sellDate;

    void accept()
    {
        cout<<"Share Name: ";
        cin>>name;

        cout<<"Number of Shares: ";
        cin>>shares;

        cout<<"Buying Price: ";
        cin>>buyPrice;

        cout<<"Buying Date: ";
        cin>>buyDate;

        cout<<"Selling Price: ";
        cin>>sellPrice;

        cout<<"Selling Date: ";
        cin>>sellDate;
    }

    void display()
    {
        cout<<name<<" "<<shares<<" "<<buyPrice<<" "<<buyDate<<" "<<sellPrice<<" "<<sellDate<<endl;
    }
};

