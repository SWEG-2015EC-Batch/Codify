#include <iostream>

using namespace std;

int main(){

    double height, mass, BMI;
    cout << "********* Body mass index calculator *********\n";
    cout << "Please enter your mass in kilograms: ";
    cin >> mass;
    cout << "Please enter your height in meters: ";
    cin >> height;
    BMI = mass/ (height * height);

    cout << "Your Body Mass Index is: " << BMI << '\n'; 
    
    //This code is optional and was added to improve the response
    if (BMI >= 30){
        cout << "You have a Significantly increased risk of chronic diseases";
    }
    else if (BMI < 18.5){
        cout << "You have an Increased risk of nutritional deficiencies and osteoporosis";
    }
    else if(BMI > 25 && BMI < 30){
        cout << "You are at Increased risk of chronic diseases, \n such as heart disease, stroke, type 2 diabetes, and certain types of cancer";
    }
    else {
        cout << "You have a normal BMI and are at Lowest risk of chronic diseases";
    }





    return 0;

}
