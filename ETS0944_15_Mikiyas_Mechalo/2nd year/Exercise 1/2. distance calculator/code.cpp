#include <iostream>

using namespace std;

int main(){

    double capacity, MPG, Pd; //MPG = miles per gallon and Pd = Possible distance without refueling

    cout << "Please enter the automobile's fuel tank capacity: ";
    cin >> capacity;
    cout << "please enter the miles per gallon for the automobile: ";
    cin >> MPG;

    Pd = capacity * MPG;

    
    cout << "\nThe automobile can go a distance of * " << Pd << " * miles without refueling\n";


    return 0;
}
