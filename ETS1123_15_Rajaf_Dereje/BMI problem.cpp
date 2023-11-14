//this program finds body mass index
#include <iostream>

using namespace std;

int main()
{
   cout<<"enter your mass in kilogram";
   double M;
   cin>>M;
   cout<<"enter your height in meter";
   double H;
   cin>>H;
   double BMI;
   BMI=M /(H*H);
   cout<<"your BMI is :"<<BMI;
    return 0;
}

