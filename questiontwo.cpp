#include<iostream>
using namespace std;
 // this programe calculate

 int main()
 {
    double capacity, Mg, psd;
// Mg= mile per  gallon, psd= possible distance ith ou refuelling
    cout<< " Enter the automobile fueltank capacity: ";
    cin>> capacity;
    cout<<"Enter the miles per gallon for the automobile: ";
    cin>> Mg;

    psd = capacity * Mg;
    cout<<" the automible can go a distance of  "<< psd <<"  miles with out refueling";

    return 0;
 }