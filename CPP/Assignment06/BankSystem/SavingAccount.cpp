#include"Account.cpp"
class SavingAccount : public Account
{
    int chequebookNo;
    float interestRate;
    int minBalance;

public:
    SavingAccount()
    {
        interestRate=4;
        minBalance=20000;
    }

    void accept()
    {
        acceptHolder();
        cout<<"Enter ChequeBook Number: ";
        cin>>chequebookNo;
    }

    void display()
    {
        displayHolder();
        cout<<"ChequeBook: "<<chequebookNo<<endl;
        cout<<"Interest: "<<interestRate<<"%\n";
        cout<<"Min Balance: "<<minBalance<<endl;
    }
};
