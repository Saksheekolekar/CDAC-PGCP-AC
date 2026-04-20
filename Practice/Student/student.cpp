#include <iostream>
#include "student.h"
using namespace std;

void Student::accept()
{
    cout << "Enter student Roll No ,Student Name,course" << endl;
    cin >> RN >> name >> course;
}
void Student::display()
{
    cout << "Roll No ,Student Name,course" << endl;
    cout << RN << name << course;
}
int Student::getId()
{
    return this->RN;
}
 void Student::findRecord(int n,int size,Student* s){
 for(int i=0;i<n;i++){
    if(s[i].getId()==n)
    s[i].display();
 }
 }