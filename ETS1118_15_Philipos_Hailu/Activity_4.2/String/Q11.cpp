//a program that asks the user for its first, middle and last name and then prints the

user’s initials on-screen by printing the first character of each name.
#include <iostream>
#include <string.h>

using namespace std;
int main(){

    char firstName[30];
    char middleName[30];
    char lastName[30];

    cout<<"Enter your first name: ";
    cin>>firstName;
    cout<<"Enter your middle name: ";
    cin>>middleName;
    cout<<"Enter your last name: ";
    cin>>lastName;

    cout<<"The initials of your name are: ";
    cout<<firstName[0]<<" "<<middleName[0]<<" "<<lastName[0]<<endl; 


    return 0;
}
