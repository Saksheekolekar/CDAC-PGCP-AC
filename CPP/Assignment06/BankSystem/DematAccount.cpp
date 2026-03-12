#include"Account.cpp"
#include"Share.cpp"
class DematAccount : public Account
{
    Share s;

public:
    void accept()
    {
        acceptHolder();
        s.accept();
    }

    void display()
    {
        displayHolder();
        s.display();
    }
};
