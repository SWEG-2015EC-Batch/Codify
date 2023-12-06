#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int number, temp, numDigits= 0, firstDigit, lastDigit;
    cout << "Enter a number: ";
    cin >> number;

    temp = number;
    while (temp != 0) {
        temp /= 10;
        ++numDigits;
    }

    // to handle the case where the number has only one digit
    if (numDigits < 2) {
        cout << "Number has only one digit. No change needed." << '\n';
        return 0;
    }

    firstDigit = number / pow(10, numDigits - 1);     // Extract the first and last digits
    lastDigit = number % 10;

    number %= int(pow(10, numDigits - 1));     // Remove the first and last digits
    number /= 10;

    // Form the new number by switching the first and last digits
    int newNumber = lastDigit * pow(10, numDigits - 1) + number * 10 + firstDigit;

    // Output the result
    cout << "Original number: " << number << '\n';
    cout << "Number with first and last digits switched: " << newNumber << '\n';

    return 0;
}
