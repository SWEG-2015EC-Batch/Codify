//this program solves power problems by taking the base number and its exponent.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Enter the base number:" ;
    int x ;
    cin>> x ;
    cout<< "Enter the number on the exponent:" ;
    int y ;
    cin>> y;
    int Z ;
    Z = pow(x,y);
    cout << x <<  "the power of" << y << "is " << Z ;
    return 0;
}

