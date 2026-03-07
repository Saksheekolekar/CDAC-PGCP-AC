#ifndef PAYSLIP_H
#define PAYSLIP_H

#include <iostream>
using namespace std;

class Payslip
{
private:
    int empNo;
    char empName[50];
    float DA;
    float HRA;
    float basicSalary;

public:
    Payslip();
    Payslip(int,char[],float,float,float);

    void accept();
    void display();
    float calculateSalary();
};

#endif
