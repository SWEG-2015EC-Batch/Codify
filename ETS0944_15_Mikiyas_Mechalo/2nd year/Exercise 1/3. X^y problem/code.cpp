#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int x, y, z;

    cout << "Enter the number to be powered: ";
    cin >> x;
    cout << "Enter the power: ";
    cin >> y;
    
    z= pow(x, y);
    cout << x << " the power of " << y << " is " << z;

    return 0;
}
