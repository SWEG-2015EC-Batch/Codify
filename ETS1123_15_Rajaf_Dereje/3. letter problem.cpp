//this program converts a given lowercase character  into its upperclass counter fit
#include <iostream>
#include <ctype.h>


using namespace std;

int main(){

char letter;
cout<< "enter a lower case letter :";
cin>>letter;
letter = toupper(letter);
cout<< "Uppercase of the letter you entered is : " <<letter;
   return 0;
}
