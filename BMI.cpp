#include<iostream>
#include<cmath>
using namespace std;

// this programe calculate BMI by taking height and weight

int main()
{
    double weight, height, BMI;
    cout<<" Enter your weigt in kg: ";
    cin>> weight;
    cout<<" Enter your height in meter: ";
    cin>> height;

    cout<<"Your BMI is: "<< weight/pow(height, 2);
    
    return 0;

}
