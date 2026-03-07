 #include "Payslip.h"

int main()
{
    Payslip p;

    cout<<"Enter Employee Details\n";
    p.accept();
    

    cout<<"\nEmployee Payslip\n";
    p.display();

    return 0;
}
