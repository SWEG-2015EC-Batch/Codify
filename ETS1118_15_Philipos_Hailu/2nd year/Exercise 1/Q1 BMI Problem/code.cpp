// A program that calculates and display the Body Mass Index (BMI) of a person. 
#include <iostream>
int main() {
    using namespace std;
    float h, w; // h = height and w = weight 
    cout<<" enter your weight in kilograms:- ";
    cin>>w;
     cout<<" enter your height in meters:- ";
    cin>>h;
    cout<<" BMI:- "<< w/(h*h);

    return 0;
}
