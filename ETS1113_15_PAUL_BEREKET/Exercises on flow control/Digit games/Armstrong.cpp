#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number, originalNumber, temp, result = 0;

    cout << "Enter a 3-digit integer: ";
    cin >> number;

    originalNumber = number;

    while (number != 0) {
        temp = number % 10;
        result += (pow(temp,3));
       number /= 10;
    }

    if (result == originalNumber) {
        cout << "The number is an Armstrong number." << endl;
    } else {
        cout << "The number is not an Armstrong number." << endl;
    }

    return 0;
}

