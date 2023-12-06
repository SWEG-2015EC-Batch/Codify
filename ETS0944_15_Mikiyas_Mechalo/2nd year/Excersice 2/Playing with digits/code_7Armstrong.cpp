#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int num, sum, first, last, middle, temp;

    cout << "Enter a 3 digit positive number: ";
    cin >> num;

    if(num > 999 || num < 0) {
        cout << "Please input a 3 digit positive number.";
        return 1;
    }

    temp = num;
    last = num % 10;
    middle = num;
    
    for(int i = 0; i<2 ; i++){
        middle = num%10;
        num /= 10;
    }

    while(num != 0){
        first = num % 10;
        num /= 10;
    }

    if(temp == (pow(first, 3) + pow(middle, 3) + pow(last, 3))){
        cout << "The number you entered is an armstrong number.";
    }
    else{
        cout << "The number you entered is not an armstrong number.";
    }

    return 0;
    
}
