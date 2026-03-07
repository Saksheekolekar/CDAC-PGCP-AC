#include <iostream>
using namespace std;

void reverse(char str[])
{
    int i=0,len=0;

    while(str[len]!='\0')
        len++;

    for(i=len-1;i>=0;i--)
        cout<<str[i];
}

int main()
{
    char str[100];

    cout<<"Enter String: ";
    cin>>str;

    cout<<"Reverse = ";
    reverse(str);

    return 0;
}
