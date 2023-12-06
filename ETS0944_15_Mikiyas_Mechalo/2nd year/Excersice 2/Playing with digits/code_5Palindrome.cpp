#include <iostream>

using namespace std;

int main(){

    int num, reversedNum = 0, temp;

    cout << "Enter a number: ";
    cin >> num;

    temp =num;
    while(num != 0){
        reversedNum = reversedNum*10 + num%10;
        num /= 10;
    }

    if (temp == reversedNum)
    {
        cout << "The number is a palindrome number";
    }
    else{
        cout << "The number is not a palindrome number";
    }

    return 0;
    
}
