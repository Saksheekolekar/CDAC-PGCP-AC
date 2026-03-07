#ifndef MOBILEPHONE_H
#define MOBILEPHONE_H

#include <iostream>
using namespace std;

class MobilePhone
{
private:
    char modelNo[30];
    float price;
    char manufacturer[50];
    int quantity;

public:
    MobilePhone();
    MobilePhone(char[],float,char[],int);

    void accept();
    void display();

    bool searchModel(char[]);
    int getQuantity();
};

#endif
