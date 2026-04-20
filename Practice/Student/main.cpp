#include <iostream>
#include "student.h"
using namespace std;

int main()
{
    int n = 5;
    Student *s[n];

    for (int i = 0; i < n; i++)
    {
        s[i] = new Student();   // create object
        s[i]->accept();         // access using ->
    }

    return 0;
}
