//an application that inputs a line of text and outputs the text twice, once in all uppercaseand once in all lowercase letters.
#include <string.h>
#include <iostream>
#include <cstring>

using namespace std;
int main(){

    string input;
    char ch;

    cout<<"Enter a line of text: ";
    getline(cin,input);

    cout<<"The uppercase vesrsion of "<<"\""<<input<<"\""<<" is: ";

    for (int i = 0; i < input.length(); i++){

        ch = toupper(input[i]);
        cout<<ch;
        
    }
    cout<<endl;

    cout<<"The lowercase vesrsion of "<<"\""<<input<<"\""<<" is: ";

    for (int i = 0; i < input.length(); i++){

        ch = tolower(input[i]);
        cout<<ch;
        
    }
    cout<<endl;

    return 0;

}
