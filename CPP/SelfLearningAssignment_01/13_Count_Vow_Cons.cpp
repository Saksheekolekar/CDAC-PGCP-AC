#include <iostream>
using namespace std;

int main()
{
    char str[200];
    int v=0,c=0,i=0;

    cout<<"Enter text: ";
    cin.getline(str,200);

    while(str[i]!='\0')
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
           str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            v++;

        else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
            c++;

        i++;
    }

    cout<<"Vowels = "<<v<<endl;
    cout<<"Consonants = "<<c<<endl;

    return 0;
}
