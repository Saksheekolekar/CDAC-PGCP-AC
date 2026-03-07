#include "PaySlip.h"
#include <cstring>

Payslip::Payslip()
{
    empNo = 0;
    DA = 0;
    HRA = 0;
    basicSalary = 0;
    empName[0]='\0';
}

Payslip::Payslip(int e,char n[],float d,float h,float b)
{
    empNo=e;
    DA=d;
    HRA=h;
    basicSalary=b;
    strcpy(empName,n);
}

void Payslip::accept()
{
    cout<<"Enter Employee No: ";
    cin>>empNo;

    cout<<"Enter Employee Name: ";
    cin>>empName;

    cout<<"Enter Basic Salary: ";
    cin>>basicSalary;

    cout<<"Enter DA: ";
    cin>>DA;

    cout<<"Enter HRA: ";
    cin>>HRA;
}

float Payslip::calculateSalary()
{
    return basicSalary + DA + HRA;
}

void Payslip::display()
{
    cout<<"\nEmployee No: "<<empNo;
    cout<<"\nEmployee Name: "<<empName;
    cout<<"\nBasic Salary: "<<basicSalary;
    cout<<"\nDA: "<<DA;
    cout<<"\nHRA: "<<HRA;
    cout<<"\nTotal Salary: "<<calculateSalary()<<endl;
}
