/*
This program identifies what type of character you input into it as :
1. uppercase and lowercase vowel or consonant 
2. digit 
3. special character 
*/

#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
    //declaring a variable
    char x; // x stands for a character

    cout<< "Enter a character: ";
    cin>>x;

    // to identify if it's a letter character
    if (isalpha(x)) {
        if (isupper(x)) {
            if ( x == 'A'|| x == 'E'|| x =='I'|| x =='O'|| x =='U'){
                cout<< "Your input is an uppercase vowel letter";
            }
            else {
                cout<< "Your input is an uppercase consonant letter";
            }
        }
        else if (x == 'a'|| x == 'e'|| x =='i'|| x =='o'|| x =='u' ) {
            cout<< "Your input is a lowercase Vowel letter";
        }
        else {
            cout<< "Your input is a lowercase consonant letter";
        }
    }
    
    //to identify if its a number
    else if (isdigit(x)) {
        if (x%2==0) {
            cout<< "Your input is an even number";
        }
        else {
            cout<< "Your input is an odd number";
        }
    }
    
    //to identify if it's a special character
    else if (ispunct(x)) {
        cout<< "your input is a spacial character";
    }
    
    return 0;
}

