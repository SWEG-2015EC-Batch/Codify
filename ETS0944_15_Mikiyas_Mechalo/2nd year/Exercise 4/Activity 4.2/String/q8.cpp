// Write an application that inputs a line of text and outputs the text twice, once in all uppercase
// and once in all lowercase letters
#include <iostream>
#include <string.h>
using namespace std;

int main(){

    string word;

    cout << "Enter a line of text: ";
    getline(cin, word);

    string upper = word, lower = word;

    for (char& ch : upper) {
        ch = toupper(ch);
    }
    
    for (char& ch : lower) {
        ch = tolower(ch);
    }
    
    cout << "All in upper case: " << upper << '\n';
    cout << "All in lower case: " << lower << '\n';



    return 0;
}
