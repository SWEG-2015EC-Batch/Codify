
#include <iostream>
#include <ctype.h>
using namespace std;
int main() {
    char letter;
    cout<< "enter a letter:- ";
    cin>> letter;
    if (islower(letter)){
        letter = toupper(letter);
        cout<<" your letter in upper case:- "<< letter;
    }
   else if (isupper(letter)){
    letter = tolower(letter);
    cout<<" your letter in lower case:- "<< letter;
    }
    return 0;
}
