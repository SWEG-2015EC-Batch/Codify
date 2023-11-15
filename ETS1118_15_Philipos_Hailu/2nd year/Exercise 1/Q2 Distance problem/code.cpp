//This program calculates the distance that  can be traveled without refueling for an automobile given the size of the fuel tank and miles per gallon
#include <iostream>
int main() {
    using namespace std;
    
 float c, mpg; // capacity in gallons = c and miles per gallon = mpg
 cout<< " enter the capacity in galon:- ";
 cin>> c;
 cout<<"enter miles per gallon:- ";
 cin>> mpg;
 cout<<"number of miles:- "<< c * mpg;

    return 0;
}
