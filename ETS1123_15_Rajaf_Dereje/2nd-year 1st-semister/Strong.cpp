// This program tells weather a number is strong or not
// Feb 28, 2024

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num(0), sum(0);

    cout<<"\nEnter a negative number to exit the program\n";
    do{
        cout<<"Enter number: ";
        cin>>num;
        int org(num); //to hold the orignal value if the number for comparision

        int mod, fact(1);
        if(num==0){
            sum = fact;
        }

        while(num > 0){
            mod = num%10;  //to split the numbers from the last digit
            while (mod>=1){
                fact *= mod;
                mod--;
            }
            sum+=fact;
            fact=1;
            num/=10; 
        }

        switch (org==sum){
            case 0:
                cout<< "Your number is not strong\n";
                break;
            default :
                cout<< "your number is strong\n";
                break;
        }
    }while(num >=0);

    return 0;
}
