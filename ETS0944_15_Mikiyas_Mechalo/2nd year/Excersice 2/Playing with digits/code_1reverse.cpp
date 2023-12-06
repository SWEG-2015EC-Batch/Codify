#include <iostream>

using namespace std;

int main(){

    int num, reversedNum = 0, count = 0, sum=0;

    cout << "Enter a number: ";
    cin >> num;

    while(num != 0){

        reversedNum = reversedNum*10 + num%10;
        num /= 10;
        count++;
        sum+=(num%10);
    }

    cout << "The reversed number is " << reversedNum << '\n';
    cout << "The number of digits is " << count << '\n';
    cout << "The sum of the digits is " << sum << '\n';


    return 0;
    
}
