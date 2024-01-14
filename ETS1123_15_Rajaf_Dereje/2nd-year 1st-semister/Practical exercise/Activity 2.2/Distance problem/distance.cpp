//this program calculates the maximum distance car can travel with one full tank
#include <iostream>

using namespace std;

int main()
{
    double cp, mpg, m;//cp:capacity per gallon, mpg:mile per gallon, m: distance in miles
    cout<<"insert your cars fuil capacity in gallon :";
    cin>>cp;
    cout<<"insert mile per gallon of your car :";
    cin>>mpg;
    m = cp*mpg;
    cout<<"your car can move a maximum of "<< m <<" miles without refuling";
    return 0;
}
