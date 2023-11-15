// This programe will display the letter respctive uppercae or lowercase letter

#include<iostream>
using namespace std;
#include<ctype.h>


int main()
{
    char x;
    cout<<"enter x: ";
    cin>>x;

    if (islower(x))
    {
        cout<<"uppercase: " <<(char)toupper(x)<<endl;
    }
    else if (isupper(x))
    {
        cout<<"lowercase: "<<(char)tolower(x)<<endl;
    }
    else
    {
        cout<<"invalid input"<<endl;
    }

    return 0;
}
