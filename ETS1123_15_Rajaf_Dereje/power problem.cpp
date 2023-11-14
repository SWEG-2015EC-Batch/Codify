//this program gives us the exponential function value of two numbers 
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
 double x,y,z;
 cout<<"enter the base number :";
 cin>>x;
 cout<<"enter the exponent :";
 cin>>y;
 z = pow(x,y) ;
 cout<<"the resulting value is :"<<z;
    return 0;
}

