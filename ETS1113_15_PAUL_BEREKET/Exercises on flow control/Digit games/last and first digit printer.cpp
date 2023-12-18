#include<iostream>
using namespace std;
int main(){
int number, originalNumber, firstDigit, lastDigit, sum;
cout<<"Enter an integer: " ;
cin>>number;
originalNumber=number;


    firstDigit = number;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    // Finding the last digit
    lastDigit = originalNumber % 10;


     sum = firstDigit + lastDigit;


    cout << "Sum of First and Last Digit: " << sum << endl;

    return 0;
}
