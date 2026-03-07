#include <iostream>
using namespace std;

int main()
{
    char s1[50], s2[50];
    int i=0;

    cout<<"Enter String 1: ";
    cin>>s1;

    cout<<"Enter String 2: ";
    cin>>s2;

    while(s1[i]==s2[i] && s1[i]!='\0' && s2[i]!='\0')
        i++;

    if(s1[i]=='\0' && s2[i]=='\0')
        cout<<"Strings are Equal";
    else
        cout<<"Strings are Different";

    return 0;
}
