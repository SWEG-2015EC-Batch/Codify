// Write a program that asks the user for its first, middle and last name and then prints the
// user’s initials on-screen by printing the first character of each name.
#include <iostream>
#include <cstring> 
using namespace std;

int main() {

    string name[3];

    cout << "Enter your first name: ";
    cin >> name[0];
    cout << "Enter your middle name: ";
    cin >> name[1];
    cout << "Enter your last name: ";
    cin >> name[2];

    cout << "Your initias are " << name[0].front() << name[1].front() << name[2].front() << ' ';
    cout << "Or " << char(toupper(name[0].front())) << char(toupper(name[1].front())) << char(toupper(name[2].front()));

    return 0;
}
