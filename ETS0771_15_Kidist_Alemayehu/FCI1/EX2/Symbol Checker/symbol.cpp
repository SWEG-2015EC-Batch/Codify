/* this programme tells whether a character entered from the keyboard 
 is uppercase, lowercase, digit or special character*/

#include <iostream>
using namespace std;

int main() {
    char input;
    cout << "Enter a character: ";
    cin >> input;

    if (isalpha(input)) {
        if (isupper(input)) {
            cout << "The input is an uppercase letter." << endl;
        } else if (islower(input)) {
            cout << "The input is a lowercase letter." << endl;
        }

        
    } else if (isdigit(input)) {
        int num = int(input) - 48; // Convert char to integer
        if (num % 2 == 0) {
            cout << "The number is even." << endl;
        } else {
            cout << "The number is odd." << endl;
        }
    } else {
        cout << "The character is a special character." << endl;
    }

    return 0;
}
