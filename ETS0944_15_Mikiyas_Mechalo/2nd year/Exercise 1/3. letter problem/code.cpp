//this code accepts a letter and converts to uppercase if small and viseversa.
#include <iostream>
#include <ctype.h>

using namespace std;

int main(){

    char letter;

    cout << "please enter a letter: ";
    cin >> letter;

    if (isupper(letter)){
        letter = tolower(letter);
        cout << "Your letter in upper case is: " << letter ;
    }
    else if (islower(letter)){
        letter = toupper(letter);
        cout << "Your letter in upper case is: " << letter ;
    }
    else {
        cout << "Invalid input";
    }
    

   




    return 0;
} 
