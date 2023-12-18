// This program tells whether a character entered from the keyboard is in upper case or in lower case , a vowel or a consonant or digit or special character

#include<iostream>

using namespace std;

int main(){

    char character;
    
    cout << "Enter any character: ";
    cin >> character;
    
    if (isalpha(character)){
        cout << "The character you entered is an alphabet" << endl;
        if (isupper(character)){
            cout << "an upper case and" << endl;
        }
        else{
            cout << "a lower case and" << endl;
        }
        if(character=='a' || character=='e' || character=='i' || character=='o' || character=='u' || character=='A' || character=='E' || character=='I' || character=='O' || character=='U'){
            cout << "a vowel" << endl;
        }
        else{
            cout << "a consonant" << endl;
        }
    }
    
    
    else if(isdigit(character)){
        cout << "The character you entered is a digit" << endl;
    }
    else{
        cout << "The character you entered is a special character" << endl;
    }
    
    
    return 0;
}
