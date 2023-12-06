#include <iostream>

using namespace std;

int main(){

    int num, fact = 1, sumOfFact=0, digit;

    cout << "Enter a number: ";
    cin >> num;
    int originalNum = num;

    while (num > 0) {
        int digit = num % 10;
        int factorial = 1;

        for (int i = 1; i <= digit; i++) {
            factorial *= i;
        }

        sumOfFact += factorial;
        num /= 10;
    }
    
    if(originalNum == sumOfFact){
        cout << originalNum<<" is a strong number\n";
    }
    else{
        cout << originalNum << " is not a strong number\n";
    }


    return 0;
    
}
