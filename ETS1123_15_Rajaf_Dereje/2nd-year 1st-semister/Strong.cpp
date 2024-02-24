/*
This program tells if a number is a Strong number or not
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int num(0),mod,fac(1);
    cout<< "Enter a number: ";
    cin>>num;

    int sum(0);
    while(num>=0){
        mod = num%10; //to split the number into individual digit
          if(mod>0){
            while(mod >0){
                fac*=mod;
                --mod;
            }
          }
        sum += fac;
        num /=10;
    }

    switch(num == sum){
    case 1:
        cout<< "Your number is strong";
        break;
    default :
        cout<< "Your number is not strong";
        break;
    }


    return 0;
}
