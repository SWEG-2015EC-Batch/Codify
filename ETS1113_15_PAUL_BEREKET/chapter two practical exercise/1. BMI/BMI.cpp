//this code calculates the Body mass index by accepting mass and height
#include <iostream>

using namespace std;

int main(){

    float height, mass, BMI;
    cout << "Please enter your mass in kilograms:" ;
    cin >> mass;
    cout << "Please enter your height in meters:" ;
    cin >> height;
    BMI = mass/ (height * height);

    cout << "Your Body Mass Index is: " << BMI<<"gram per meter squared" << endl ;

    //This code is optional and was added to improve the response
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

