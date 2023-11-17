//this code calculates the Body mass index by accepting mass and height
#include <iostream>

#include <cmath>
using namespace std;

int main(){

    float height, mass, BMI;
    cout << "Please enter your mass in kilograms: " ;
    cin >> mass;
    cout << "Please enter your height in meters: " ;
    cin >> height;
    BMI= mass/pow(height,2);
    cout << "Your Body Mass Index is: " << BMI << endl ;

    //This code is optional and was added to improve the response
   BMI= mass/pow(height,2);
        if (BMI <= 18.5){
        cout << "You are underweight, You should start taking more calories than your expenditure.";
    }
    else if (BMI > 18.5 && BMI <= 25){
        cout << "You are at normal weight.";
    }
    else {
        cout << "you are overweight." ;}

    return 0;
    }


