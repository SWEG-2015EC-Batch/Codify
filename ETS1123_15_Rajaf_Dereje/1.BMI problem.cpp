//this program finds body mass index
#include <iostream>

using namespace std;

int main()
{
   float M,H;

   cout<<"enter your mass in kilogram : ";
   cin>>M;
   cout<<"enter your height in meter : ";
   cin>>H;

   cout<<"your BMI is :"<<M /(H*H);
    return 0;
}

