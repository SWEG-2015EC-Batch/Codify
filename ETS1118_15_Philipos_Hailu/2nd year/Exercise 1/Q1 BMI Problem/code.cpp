//This program calculates the distance that  can be traveled without refueling for an automobile given the size of the fuel tank and miles per gallon
#include <iostream>
int main() {
    using namespace std;
    float h, w, BMI; // h = height, w = weight and BMI = body mass index
    cout<<" enter your weight in kilograms:- ";
    cin>>w;
     cout<<" enter your height in meters:- ";
    cin>>h;
    cout<<" BMI:- "<< w/(h*h);

    return 0;
}
