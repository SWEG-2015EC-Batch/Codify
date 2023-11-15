// this programe calculate BMI by taking height and weight

#include<iostream>
#include<cmath>
using namespace std;


int main()
{
    double weight, height, BMI;   // BMI means body mass index
    
    cout<<" Enter your weigt in kg: ";
    cin>> weight;
    cout<<" Enter your height in meter: ";
    cin>> height;

    cout<<"Your BMI is: "<< weight/pow(height, 2);
    
    return 0;

}
