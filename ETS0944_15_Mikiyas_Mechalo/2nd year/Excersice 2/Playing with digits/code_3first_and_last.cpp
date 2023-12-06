#include <iostream>

using namespace std;

int main(){

    int num, firstDigit, lastDigit;

    cout << "Plese enter a number: ";
    cin >> num;

    firstDigit = num;

    while(firstDigit >= 10){
        firstDigit /= 10; 
    }

    lastDigit = num % 10; 
    
    cout << "The first numbers is " << firstDigit << "\n";
    cout << "The last numbers is " << lastDigit << '\n';
    cout << "Their sum is " << firstDigit + lastDigit << '\n';

    return 0;
}
