/*
This program asks the user for its first, middle and last name and then prints the
user’s initials on-screen by printing the first character of each name.
*/
#include <iostream>
using namespace std;

int main(){

    string words[3];

    cout<<"Enter your fullname includeing your gradfathers\n Name: ";
    cin>>words[0];
    cin>>words[1];
    cin>>words[2];
    cout<<"\nThe initials of the names are: "<<"'"<<words[0][0]<<"'"<<" for "<<words[0]<<" '"<<words[1][0]<<"' for "<<words[1]<<" '"<<words[2][0]<<"' for "<<words[2];
    

    return 0;
}
