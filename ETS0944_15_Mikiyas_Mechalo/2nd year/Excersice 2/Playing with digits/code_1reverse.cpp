#include <iostream>

using namespace std;

int main(){

    int num, reversedNum = 0;

    cout << "Enter a number: ";
    cin >> num;

    while(num != 0){
        reversedNum = reversedNum*10 + num%10;
        num /= 10;
    }

    cout << "The reversed number is " << reversedNum;


    return 0;
    
}
