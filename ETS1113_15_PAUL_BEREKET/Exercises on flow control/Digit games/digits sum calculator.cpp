#include <iostream>
using namespace std;

int main() {
    int number, sum = 0;

    cout << "Enter an integer: ";
    cin >> number;

 int num=number;

    while (number != 0) {
        int temp = number % 10;
        sum += temp;
        number /= 10;
    }

    cout << "Sum of the digits of " << num<<" is " << sum << endl;

    return 0;
}

