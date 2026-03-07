#ifndef ADDRESS_H
#define ADDRESS_H

#include <iostream>
using namespace std;

class Address
{
private:
    int houseNo;
    char colony[50];
    char area[50];
    char city[50];
    int pincode;

public:
    Address();
    Address(int, char[], char[], char[], int);

    void accept();
    void display();

    bool isSame(Address);
    bool operator==(Address);
};

#endif
