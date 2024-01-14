// a program to store and print the names of your two favorite television programs.Initialize one of the strings (assign it the first program’s name) at the time you declare the array. Initialize the second value in the body of the program with the strcpy() function.
#include <iostream>
#include <string.h>

using namespace std;
int main(){

    char firstProgram[] = "over lord";
    char secondProgram[150];
    strcpy(secondProgram,"The life of the holy");

    cout<<"Your favorite Tv programs are: "<<firstProgram<<", "<<secondProgram<<endl;

    return 0;
}
