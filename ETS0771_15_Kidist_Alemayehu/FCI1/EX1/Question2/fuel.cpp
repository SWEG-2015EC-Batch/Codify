// this programe calculate the distance an autombile can go with out refueling
#include<iostream>

using namespace std;
int main(){
    double capacity, psd, Mg;
    cout<<" Enter the automible fuel tank capacity: ";
    cin>> capacity;
    cout<<" Enter the mile per gallon for for automobile: ";
    cin>> Mg;

    psd = capacity * Mg;
    cout<<"the automible can go a distance of "<< psd<< " mile ith out refueling";

    return 0;
}
