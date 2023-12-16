/*
this program performs the following :
a) takes gender, mass and height input
b) calculates the BMI and your weight type when you input valid gender character
*/
#include <iostream>

using namespace std;

int main()
{
   float mass, height, BMI;
   char gender;
   int i,n;

   cout<< "Enter how many person is using this program : ";
   cin>> n;
   cout<< endl;

   for (i=1;i<=n;i++) {
     cout<< "Enter you gender as 'm' for male and 'f' for female ";
     cin>> gender;


     gender = toupper(gender);

     if (gender == 'M'|| gender == 'F') {
      cout<< "Enter your mass in kilogram: ";
      cin>> mass;
      cout<< "Enter your height in meter: ";
      cin>> height;

      BMI = mass/(height*height);

      if (BMI>=30) {
        cout<< "person "<<i<< " has a BMI of "<<BMI<< " and is obese"<< "\n"<< "\n";
      }
      else if (gender == 'M') {
        if (BMI <20.5) {
            cout<< "person "<<i<< " has a BMI of "<<BMI<< " and is under weight"<< "\n"<< "\n";
        }
        else if (BMI>=20.5&&BMI<=25.9) {
            cout<< "person "<<i<< " has a BMI of "<<BMI<< " and is normal weight"<< "\n"<< "\n";
        }
        else if (BMI>=26&&BMI<=29.9) {
            cout<< "person "<<i<< " has a BMI of "<<BMI<< " and is over weight"<< "\n"<< "\n";
        }
      }
      else {
        if (BMI<18.5){
            cout<< "person "<<i<< " has a BMI of "<<BMI<< " and is under weight"<<"\n"<< "\n";
        }
        else if(BMI>=18.5&&BMI<=24.9) {
            cout<< "person "<<i<< " has a BMI of "<<BMI<< " and is normal weight"<< "\n"<< "\n";
        }
        else if(BMI>=25&&BMI<=29.9) {
            cout<< "person "<<i<< " has a BMI of "<<BMI<< " and is normal weight"<<"\n"<< "\n";
        }
     }
     }
     else {
      cout<< "person "<<i<<" Invalid gender character please reenter a valid gender to proceed "<<"\n"<< "\n";
      
     }
     }
    return 0;
}

