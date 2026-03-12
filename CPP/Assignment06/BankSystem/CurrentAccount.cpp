#include"Account.cpp"
class CurrentAccount : public Account
{
    int transactionsPerDay;
    float interestRate;
    int minBalance;

public:
    CurrentAccount()
    {
        interestRate=1;
        minBalance=1000;
    }

    void accept()
    {
        acceptHolder();
        cout<<"Enter Transactions per day: ";
        cin>>transactionsPerDay;
    }

    void display()
    {
        displayHolder();
        cout<<"Transactions/day: "<<transactionsPerDay<<endl;
        cout<<"Interest: "<<interestRate<<"%\n";
        cout<<"Min Balance: "<<minBalance<<endl;
    }
};
