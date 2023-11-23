// This code calculates  disatnce a car can tarvel without refueleing by taking tank's capacity and miles per gallon as inputs
#include <iostream>

using namespace std;

int main()
{
    float capacity, miles_per_galon, fuel_economy;
    cout <<"what is the fuel tank's capacity in gallon?: " ;
    cin>> capacity;
    cout<<" how many miles can this car travel per gallon?: " ;
    cin>> miles_per_galon ;
    fuel_economy = capacity*miles_per_galon ;
    cout<< " you can travel " << fuel_economy << "miles without refuling." << endl;
    return 0;
}
